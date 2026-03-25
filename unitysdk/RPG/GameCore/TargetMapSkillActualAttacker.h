#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETMAPSKILLACTUALATTACKER_METHOD_3_619A10B54563F4CF_OFFSET UNITYSDK_OFFSET(0x177C3930)
#define RPG_GAMECORE_TARGETMAPSKILLACTUALATTACKER_METHOD_3_97B20532A9D3B542_OFFSET UNITYSDK_OFFSET(0x177C3870)
#define RPG_GAMECORE_TARGETMAPSKILLACTUALATTACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x177C3910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapSkillActualAttacker_TypeDefinitionIndex = 22228;

	class TargetMapSkillActualAttacker : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLACTUALATTACKER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_97B20532A9D3B542(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapSkillActualAttacker*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapSkillActualAttacker*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLACTUALATTACKER_METHOD_3_97B20532A9D3B542_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_619A10B54563F4CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapSkillActualAttacker* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapSkillActualAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLACTUALATTACKER_METHOD_3_619A10B54563F4CF_OFFSET))(a1, a2);
		}
	};
}
