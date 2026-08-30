#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define RPG_CLIENT_DISABLEUIPOSTPROCESSBEHAVIOUR_CLASS_1_52555BE5DD3DE9E2__CTOR_OFFSET UNITYSDK_OFFSET(0xCD7EB80)

namespace RPG::Client
{
	inline static constexpr unsigned int DisableUIPostProcessBehaviour_Class_1_52555BE5DD3DE9E2_TypeDefinitionIndex = 72682;

	class DisableUIPostProcessBehaviour_Class_1_52555BE5DD3DE9E2 : public ::System::Object
	{
	public:
		::UnityEngine::Material* IOPGBMHKHML; // 0x10
		::UnityEngine::Material* CHCCEGMKGON; // 0x18

		::System::Void _ctor(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DISABLEUIPOSTPROCESSBEHAVIOUR_CLASS_1_52555BE5DD3DE9E2__CTOR_OFFSET))(this, a1);
		}
	};
}
