#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleEffectLifeTimeType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingBattleEffectTier; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGBATTLEEFFECTCONFIG_METHOD_2_69C4CAE422465EF3_OFFSET UNITYSDK_OFFSET(0x170793E0)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1707D0C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleEffectConfig_TypeDefinitionIndex = 14399;

	class ChenLingBattleEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 Scale; // 0x10
		::RPG::MVector3 Rotation; // 0x1C
		::System::String* EffectPath; // 0x28
		::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* EffectTiers; // 0x30
		::System::String* AttachPointName; // 0x38
		::System::String* UniqueName; // 0x40
		::System::Boolean IsAttachToTarget; // 0x48
		::RPG::GameCore::ChenLingBattleEffectLifeTimeType LifeTimeType; // 0x4C
		::System::UInt32 MaxCountLimit; // 0x50
		::System::Boolean IsAffectByAttackSpeed; // 0x54
		::System::Boolean IsForbidInitRenderCache; // 0x55

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_69C4CAE422465EF3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECTCONFIG_METHOD_2_69C4CAE422465EF3_OFFSET))(a1, a2);
		}
	};
}
