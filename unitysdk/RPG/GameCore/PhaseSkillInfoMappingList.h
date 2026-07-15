#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PHASESKILLINFOMAPPINGLIST_METHOD_2_F0B7E641956ED287_OFFSET UNITYSDK_OFFSET(0x1B4BB7C0)
#define RPG_GAMECORE_PHASESKILLINFOMAPPINGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4BB880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhaseSkillInfoMappingList_TypeDefinitionIndex = 15884;

	class PhaseSkillInfoMappingList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* IdPerPhase; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHASESKILLINFOMAPPINGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F0B7E641956ED287(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhaseSkillInfoMappingList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhaseSkillInfoMappingList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHASESKILLINFOMAPPINGLIST_METHOD_2_F0B7E641956ED287_OFFSET))(a1, a2);
		}
	};
}
