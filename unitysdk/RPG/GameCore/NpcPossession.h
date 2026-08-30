#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class LevelNPCPossessionInfo; }
namespace RPG::GameCore { class NpcPossessionEffectConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_NPCPOSSESSION_METHOD_3_5B8D283D398889CE_OFFSET UNITYSDK_OFFSET(0x1D2F9C10)
#define RPG_GAMECORE_NPCPOSSESSION_METHOD_3_9D8C85501AC534A7_OFFSET UNITYSDK_OFFSET(0x1D2F9BD0)
#define RPG_GAMECORE_NPCPOSSESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2F9C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NpcPossession_TypeDefinitionIndex = 22148;

	class NpcPossession : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x18
		::RPG::GameCore::DynamicFloat* GroupNpcID; // 0x20
		::System::String* NpcUniqueName; // 0x28
		::RPG::GameCore::LevelNPCPossessionInfo* PossessionInfo; // 0x30
		::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>* AdditivePossessionInfos; // 0x38
		::System::Boolean IsDelete; // 0x40
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x48
		::RPG::GameCore::NpcPossessionEffectConfig* AttachEffectConfig; // 0x50
		::Il2CppArray<::RPG::GameCore::NpcPossessionEffectConfig*>* AttachAdditiveEffectConfigs; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCPOSSESSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9D8C85501AC534A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NpcPossession*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NpcPossession*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCPOSSESSION_METHOD_3_9D8C85501AC534A7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5B8D283D398889CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NpcPossession* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NpcPossession*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCPOSSESSION_METHOD_3_5B8D283D398889CE_OFFSET))(a1, a2);
		}
	};
}
