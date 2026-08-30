#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_0B84ADD7815498A2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TriggerEffectParams; }
namespace System { class String; }

#define RPG_GAMECORE_BASEMODIFIERINSTANCE_MODIFIEREFFECTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6234B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseModifierInstance_ModifierEffectData_TypeDefinitionIndex = 54644;

	class BaseModifierInstance_ModifierEffectData : public ::System::Object
	{
	public:
		::Struct_2_0B84ADD7815498A2 EffectInst; // 0x10
		::System::String* DynamicAttach; // 0x20
		::System::String* UniqueName; // 0x28
		::System::String* EffectPath; // 0x30
		::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* Flag; // 0x38
		::RPG::Client::TriggerEffectParams* EffectParam; // 0x40
		::RPG::MVector3 RotationOffset; // 0x48
		::System::Boolean AutoHideInSkill; // 0x54
		::System::Int32 ReuseRefCount; // 0x58
		::RPG::MVector3 PositionOffset; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_MODIFIEREFFECTDATA__CTOR_OFFSET))(this);
		}
	};
}
