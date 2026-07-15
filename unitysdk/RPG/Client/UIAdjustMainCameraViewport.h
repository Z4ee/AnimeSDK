#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class NotifyHandler; }
namespace System { class Object; }

#define RPG_CLIENT_UIADJUSTMAINCAMERAVIEWPORT_METHOD_5_9AFCA18B112F248A_OFFSET UNITYSDK_OFFSET(0x16FFBE90)
#define RPG_CLIENT_UIADJUSTMAINCAMERAVIEWPORT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16FFBE20)
#define RPG_CLIENT_UIADJUSTMAINCAMERAVIEWPORT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16FFB8A0)
#define RPG_CLIENT_UIADJUSTMAINCAMERAVIEWPORT_REFRESHADJUSTMENT_OFFSET UNITYSDK_OFFSET(0x16FFB970)
#define RPG_CLIENT_UIADJUSTMAINCAMERAVIEWPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x16FFBEE0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIAdjustMainCameraViewport_TypeDefinitionIndex = 69682;

	class UIAdjustMainCameraViewport : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::NotifyHandler* Field_5_0; // 0x18
		::UnityEngine::Vector2 OffsetMin; // 0x20
		::UnityEngine::Vector2 OffsetMax; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADJUSTMAINCAMERAVIEWPORT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADJUSTMAINCAMERAVIEWPORT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADJUSTMAINCAMERAVIEWPORT_ONDISABLE_OFFSET))(this);
		}

		::System::Void RefreshAdjustment()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADJUSTMAINCAMERAVIEWPORT_REFRESHADJUSTMENT_OFFSET))(this);
		}

		::System::Void Method_5_9AFCA18B112F248A(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADJUSTMAINCAMERAVIEWPORT_METHOD_5_9AFCA18B112F248A_OFFSET))(this, a1);
		}
	};
}
