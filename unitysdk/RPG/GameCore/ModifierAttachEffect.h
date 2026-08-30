#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EffectMutexType.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicVector3; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_MODIFIERATTACHEFFECT_METHOD_3_3496E939E99635A3_OFFSET UNITYSDK_OFFSET(0x1D2AA1E0)
#define RPG_GAMECORE_MODIFIERATTACHEFFECT_METHOD_3_7F5A69FF5160D9EE_OFFSET UNITYSDK_OFFSET(0x1D2AA190)
#define RPG_GAMECORE_MODIFIERATTACHEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2AA1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierAttachEffect_TypeDefinitionIndex = 23201;

	class ModifierAttachEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* Flags; // 0x20
		::System::String* EffectPath; // 0x28
		::System::String* AttachPoint; // 0x30
		::RPG::GameCore::DynamicVector3* PositionOffset; // 0x38
		::RPG::GameCore::DynamicVector3* RotationOffset; // 0x40
		::System::Single Delay; // 0x48
		::System::Boolean AddColliderHeightOffset; // 0x4C
		::System::Single ColliderHeightRatio; // 0x50
		::System::Single MinMutexTime; // 0x54
		::RPG::GameCore::EffectMutexType MutexType; // 0x58
		::System::UInt32 MaxMutexCount; // 0x5C
		::System::String* UniqueEffectName; // 0x60
		::System::Boolean AutoHideInSkill; // 0x68
		::System::Boolean IgnoreFadeOutMutexError; // 0x69

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERATTACHEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7F5A69FF5160D9EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifierAttachEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifierAttachEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERATTACHEFFECT_METHOD_3_7F5A69FF5160D9EE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3496E939E99635A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifierAttachEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifierAttachEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERATTACHEFFECT_METHOD_3_3496E939E99635A3_OFFSET))(a1, a2);
		}
	};
}
