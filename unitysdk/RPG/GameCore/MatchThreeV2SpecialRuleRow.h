#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEV2SPECIALRULEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18AC6EF0)
#define RPG_GAMECORE_MATCHTHREEV2SPECIALRULEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18AC70B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeV2SpecialRuleRow_TypeDefinitionIndex = 11375;

	class MatchThreeV2SpecialRuleRow : public ::System::Object
	{
	public:
		::System::String* Icon; // 0x10
		::RPG::Client::TextID Desc; // 0x18
		::System::UInt32 SpecialRuleID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2SPECIALRULEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MatchThreeV2SpecialRuleRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeV2SpecialRuleRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2SPECIALRULEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
