#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define RPG_CLIENT_DISABLEUIPOSTPROCESSBEHAVIOUR_CLASS_1_52555BE5DD3DE9E2__CTOR_OFFSET UNITYSDK_OFFSET(0xB7F76A0)

namespace RPG::Client
{
	inline static constexpr unsigned int DisableUIPostProcessBehaviour_Class_1_52555BE5DD3DE9E2_TypeDefinitionIndex = 67969;

	class DisableUIPostProcessBehaviour_Class_1_52555BE5DD3DE9E2 : public ::System::Object
	{
	public:
		::UnityEngine::Material* Field_1_0; // 0x10
		::UnityEngine::Material* Field_1_1; // 0x18

		::System::Void _ctor(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DISABLEUIPOSTPROCESSBEHAVIOUR_CLASS_1_52555BE5DD3DE9E2__CTOR_OFFSET))(this, a1);
		}
	};
}
