#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Object; }
namespace UnityEngine { class Camera; }

#define RPG_CLIENT_UI3DCANVASFITTER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCB0AAC0)
#define RPG_CLIENT_UI3DCANVASFITTER_METHOD_5_0717423DDEA0E9A4_OFFSET UNITYSDK_OFFSET(0xCB0B4E0)
#define RPG_CLIENT_UI3DCANVASFITTER_METHOD_5_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xCB0AB50)
#define RPG_CLIENT_UI3DCANVASFITTER_METHOD_5_0ED2EEE19D10A0A7_OFFSET UNITYSDK_OFFSET(0xCB0A890)
#define RPG_CLIENT_UI3DCANVASFITTER_METHOD_5_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0xCB0A600)
#define RPG_CLIENT_UI3DCANVASFITTER_METHOD_5_79661C0243426B92_OFFSET UNITYSDK_OFFSET(0xCB0AFE0)
#define RPG_CLIENT_UI3DCANVASFITTER_METHOD_5_7FDE31EDE47E1969_OFFSET UNITYSDK_OFFSET(0xCB0B8D0)
#define RPG_CLIENT_UI3DCANVASFITTER_METHOD_5_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xCB0ADD0)
#define RPG_CLIENT_UI3DCANVASFITTER_METHOD_5_999B8B439422C7E7_OFFSET UNITYSDK_OFFSET(0xCB0B170)
#define RPG_CLIENT_UI3DCANVASFITTER_METHOD_5_B41DC260337975FD_OFFSET UNITYSDK_OFFSET(0xCB0AE80)
#define RPG_CLIENT_UI3DCANVASFITTER_METHOD_5_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0xCB0A7E0)
#define RPG_CLIENT_UI3DCANVASFITTER_METHOD_5_E10F3359B5E0D724_OFFSET UNITYSDK_OFFSET(0xCB0B280)
#define RPG_CLIENT_UI3DCANVASFITTER_METHOD_5_EE97EFC752A55D2E_OFFSET UNITYSDK_OFFSET(0xCB0AF90)
#define RPG_CLIENT_UI3DCANVASFITTER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCB0A9B0)
#define RPG_CLIENT_UI3DCANVASFITTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCB0A4D0)
#define RPG_CLIENT_UI3DCANVASFITTER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xCB0AF10)
#define RPG_CLIENT_UI3DCANVASFITTER__CTOR_OFFSET UNITYSDK_OFFSET(0xCB0BAB0)
#define RPG_CLIENT_UI3DCANVASFITTER___UPDATERUNTIMETARGETCAMERA_B__6_0_OFFSET UNITYSDK_OFFSET(0xCB0BAD0)

namespace RPG::Client
{
	inline static constexpr unsigned int UI3DCanvasFitter_TypeDefinitionIndex = 64574;

	class UI3DCanvasFitter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean IsTickingToFollowCamera; // 0x18
		::UnityEngine::Camera* UI3DCamera; // 0x20
		::System::Single DistanceToCamera; // 0x28
		::System::Boolean UseCanvasScaler; // 0x2C
		::UnityEngine::Vector2 PCResolution; // 0x30
		::UnityEngine::Vector2 PhoneResolution; // 0x38
		::System::Boolean ScaleZ; // 0x40
		::UnityEngine::Camera* Field_5_7; // 0x48
		::System::Boolean Field_5_8; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER_ONDISABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER_ONVALIDATE_OFFSET))(this);
		}

		::System::Void Method_5_B41DC260337975FD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER_METHOD_5_B41DC260337975FD_OFFSET))(this, a1);
		}

		::System::Void Method_5_EE97EFC752A55D2E(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER_METHOD_5_EE97EFC752A55D2E_OFFSET))(this, a1);
		}

		::System::Void Method_5_60E1F7F58CCF739F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER_METHOD_5_60E1F7F58CCF739F_OFFSET))(this);
		}

		::System::Void Method_5_0865E94460F11643()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER_METHOD_5_0865E94460F11643_OFFSET))(this);
		}

		::System::Void Method_5_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER_METHOD_5_89D1F247B9D324EE_OFFSET))(this);
		}

		::System::Void Method_5_BB2928BEC244DEB7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER_METHOD_5_BB2928BEC244DEB7_OFFSET))(this);
		}

		::System::Void Method_5_999B8B439422C7E7(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER_METHOD_5_999B8B439422C7E7_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_E10F3359B5E0D724(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER_METHOD_5_E10F3359B5E0D724_OFFSET))(this, a1);
		}

		::System::Void Method_5_0717423DDEA0E9A4(::System::Single& a1, ::System::Single& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER_METHOD_5_0717423DDEA0E9A4_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_79661C0243426B92(::System::Single& a1, ::System::Single& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER_METHOD_5_79661C0243426B92_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_0ED2EEE19D10A0A7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER_METHOD_5_0ED2EEE19D10A0A7_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_5_7FDE31EDE47E1969(::System::Boolean a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER_METHOD_5_7FDE31EDE47E1969_OFFSET))(this, a1);
		}

		::System::Void __UpdateRuntimeTargetCamera_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCANVASFITTER___UPDATERUNTIMETARGETCAMERA_B__6_0_OFFSET))(this);
		}
	};
}
