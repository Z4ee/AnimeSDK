#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPSKILLACTUALATTACKER_METHOD_3_5E3D6A511F215349_OFFSET UNITYSDK_OFFSET(0x1E1BD390)
#define RPG_GAMECORE_TARGETMAPSKILLACTUALATTACKER_METHOD_3_619A10B54563F4CF_OFFSET UNITYSDK_OFFSET(0x1E1BD310)
#define RPG_GAMECORE_TARGETMAPSKILLACTUALATTACKER_METHOD_3_982571D8808CBC5E_OFFSET UNITYSDK_OFFSET(0x1E1BD290)
#define RPG_GAMECORE_TARGETMAPSKILLACTUALATTACKER_METHOD_3_9EC02CF9D492E87C_OFFSET UNITYSDK_OFFSET(0x1E1BD370)
#define RPG_GAMECORE_TARGETMAPSKILLACTUALATTACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BD300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapSkillActualAttacker_TypeDefinitionIndex = 23676;

	class TargetMapSkillActualAttacker : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLACTUALATTACKER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_982571D8808CBC5E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapSkillActualAttacker*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapSkillActualAttacker*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLACTUALATTACKER_METHOD_3_982571D8808CBC5E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_619A10B54563F4CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapSkillActualAttacker* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapSkillActualAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLACTUALATTACKER_METHOD_3_619A10B54563F4CF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9EC02CF9D492E87C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillActualAttacker*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillActualAttacker*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLACTUALATTACKER_METHOD_3_9EC02CF9D492E87C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5E3D6A511F215349(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillActualAttacker* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillActualAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLACTUALATTACKER_METHOD_3_5E3D6A511F215349_OFFSET))(a1, a2);
		}
	};
}
