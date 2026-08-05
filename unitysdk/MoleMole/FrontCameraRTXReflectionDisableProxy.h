#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_FRONTCAMERARTXREFLECTIONDISABLEPROXY_SWITCHMIRRORRTXREFLECTION_OFFSET UNITYSDK_OFFSET(0x19083000)
#define MOLEMOLE_FRONTCAMERARTXREFLECTIONDISABLEPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x190832A0)

namespace MoleMole
{
	inline static constexpr unsigned int FrontCameraRTXReflectionDisableProxy_TypeDefinitionIndex = 78624;

	class FrontCameraRTXReflectionDisableProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::GameObject** StaticGet_Field_5_0()
		{
			return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(FrontCameraRTXReflectionDisableProxy_TypeDefinitionIndex)->GetStaticField(0x4A820);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FRONTCAMERARTXREFLECTIONDISABLEPROXY__CTOR_OFFSET))(this);
		}

		static ::System::Void SwitchMirrorRtxReflection(::System::Boolean a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_FRONTCAMERARTXREFLECTIONDISABLEPROXY_SWITCHMIRRORRTXREFLECTION_OFFSET))(a1, a2);
		}
	};
}
