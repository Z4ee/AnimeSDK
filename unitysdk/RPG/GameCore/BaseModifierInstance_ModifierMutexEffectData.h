#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EffectMutexType.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_GAMECORE_BASEMODIFIERINSTANCE_MODIFIERMUTEXEFFECTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6234C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseModifierInstance_ModifierMutexEffectData_TypeDefinitionIndex = 54645;

	class BaseModifierInstance_ModifierMutexEffectData : public ::System::Object
	{
	public:
		::System::String* DynamicAttach; // 0x10
		::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* Flag; // 0x18
		::System::String* EffectPath; // 0x20
		::RPG::MVector3 PositionOffset; // 0x28
		::RPG::GameCore::EffectMutexType MutexType; // 0x34
		::System::Int32 MaxMutexCount; // 0x38
		::System::Single MinMutexTime; // 0x3C
		::RPG::MVector3 RotationOffset; // 0x40

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::RPG::MVector3 a3, ::RPG::MVector3 a4, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* a5, ::RPG::GameCore::EffectMutexType a6, ::System::Single a7, ::System::Int32 a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::MVector3, ::RPG::MVector3, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>*, ::RPG::GameCore::EffectMutexType, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_MODIFIERMUTEXEFFECTDATA__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}
	};
}
