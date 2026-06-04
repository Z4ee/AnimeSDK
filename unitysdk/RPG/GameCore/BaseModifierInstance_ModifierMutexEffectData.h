#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EffectMutexType.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_GAMECORE_BASEMODIFIERINSTANCE_MODIFIERMUTEXEFFECTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCD26B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseModifierInstance_ModifierMutexEffectData_TypeDefinitionIndex = 50876;

	class BaseModifierInstance_ModifierMutexEffectData : public ::System::Object
	{
	public:
		::System::String* DynamicAttach; // 0x10
		::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* Flag; // 0x18
		::System::String* EffectPath; // 0x20
		::RPG::MVector3 PositionOffset; // 0x28
		::System::Single MinMutexTime; // 0x34
		::System::Int32 MaxMutexCount; // 0x38
		::RPG::GameCore::EffectMutexType MutexType; // 0x3C

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::RPG::MVector3 a3, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* a4, ::RPG::GameCore::EffectMutexType a5, ::System::Single a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::MVector3, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>*, ::RPG::GameCore::EffectMutexType, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_MODIFIERMUTEXEFFECTDATA__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}
	};
}
