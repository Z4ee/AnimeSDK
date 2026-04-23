#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUENOUSDICEBRANCHTAGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D4BB10)
#define RPG_GAMECORE_ROGUENOUSDICEBRANCHTAGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D4BCD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousDiceBranchTagRow_TypeDefinitionIndex = 14108;

	class RogueNousDiceBranchTagRow : public ::System::Object
	{
	public:
		::System::String* TagIcon; // 0x10
		::RPG::Client::TextID BranchTagName; // 0x18
		::System::UInt32 TagID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICEBRANCHTAGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueNousDiceBranchTagRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueNousDiceBranchTagRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICEBRANCHTAGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
