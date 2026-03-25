#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EFFECT_ABYSSSHINECONTROL_SHINECONTROLSTRUCT__CTOR_OFFSET UNITYSDK_OFFSET(0x9538CF0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_AbyssShineControl_ShineControlStruct_TypeDefinitionIndex = 57660;

	class Effect_AbyssShineControl_ShineControlStruct : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Transform*>* ControlPoint; // 0x10
		::System::Single Distance; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ABYSSSHINECONTROL_SHINECONTROLSTRUCT__CTOR_OFFSET))(this);
		}
	};
}
