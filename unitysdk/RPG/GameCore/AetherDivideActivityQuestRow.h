#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AETHERDIVIDEACTIVITYQUESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AE661B0)
#define RPG_GAMECORE_AETHERDIVIDEACTIVITYQUESTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE66390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideActivityQuestRow_TypeDefinitionIndex = 10573;

	class AetherDivideActivityQuestRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::System::String* Name; // 0x18
		::System::UInt32 TypeGroupID; // 0x20
		::System::UInt32 ID; // 0x24
		::System::UInt32 ActivityModuleID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEACTIVITYQUESTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AetherDivideActivityQuestRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AetherDivideActivityQuestRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEACTIVITYQUESTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
