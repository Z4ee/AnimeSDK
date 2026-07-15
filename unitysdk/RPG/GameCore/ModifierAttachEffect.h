#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EffectMutexType.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_MODIFIERATTACHEFFECT_METHOD_3_0157308838234DC8_OFFSET UNITYSDK_OFFSET(0x1AF6F8E0)
#define RPG_GAMECORE_MODIFIERATTACHEFFECT_METHOD_3_7F5A69FF5160D9EE_OFFSET UNITYSDK_OFFSET(0x1AF6F890)
#define RPG_GAMECORE_MODIFIERATTACHEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF6F8D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierAttachEffect_TypeDefinitionIndex = 22624;

	class ModifierAttachEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* Flags; // 0x20
		::System::String* EffectPath; // 0x28
		::System::String* AttachPoint; // 0x30
		::RPG::MVector3 PositionOffset; // 0x38
		::System::Single Delay; // 0x44
		::System::Boolean AddColliderHeightOffset; // 0x48
		::System::Single ColliderHeightRatio; // 0x4C
		::System::Single MinMutexTime; // 0x50
		::RPG::GameCore::EffectMutexType MutexType; // 0x54
		::System::UInt32 MaxMutexCount; // 0x58
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

		static ::System::Void Method_3_0157308838234DC8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifierAttachEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifierAttachEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERATTACHEFFECT_METHOD_3_0157308838234DC8_OFFSET))(a1, a2);
		}
	};
}
