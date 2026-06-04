#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGFESLEVELABILITYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1962ACE0)
#define RPG_GAMECORE_CHENLINGFESLEVELABILITYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1962AF90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesLevelAbilityRow_TypeDefinitionIndex = 10670;

	class ChenLingFesLevelAbilityRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::System::String* IconPath; // 0x18
		::System::UInt32 ID; // 0x20
		::RPG::Client::TextID AbilityDesc; // 0x28
		::RPG::Client::TextID AbilityName; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESLEVELABILITYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesLevelAbilityRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesLevelAbilityRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESLEVELABILITYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
