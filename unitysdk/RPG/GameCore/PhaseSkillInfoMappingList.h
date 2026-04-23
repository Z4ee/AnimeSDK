#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PHASESKILLINFOMAPPINGLIST_METHOD_2_D500A9B496107AEA_OFFSET UNITYSDK_OFFSET(0x18BEF4F0)
#define RPG_GAMECORE_PHASESKILLINFOMAPPINGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x18BEF5B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhaseSkillInfoMappingList_TypeDefinitionIndex = 15653;

	class PhaseSkillInfoMappingList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* IdPerPhase; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHASESKILLINFOMAPPINGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D500A9B496107AEA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhaseSkillInfoMappingList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhaseSkillInfoMappingList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHASESKILLINFOMAPPINGLIST_METHOD_2_D500A9B496107AEA_OFFSET))(a1, a2);
		}
	};
}
