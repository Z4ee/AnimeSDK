#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_MIHOYOSDKCANVASMANAGER_DESTROYCANVAS_OFFSET UNITYSDK_OFFSET(0xAFC9E30)
#define MIHOYO_SDK_MIHOYOSDKCANVASMANAGER_GETCANVAS_OFFSET UNITYSDK_OFFSET(0xAFC9C10)
#define MIHOYO_SDK_MIHOYOSDKCANVASMANAGER_GETSCALE_OFFSET UNITYSDK_OFFSET(0xAFC9CB0)
#define MIHOYO_SDK_MIHOYOSDKCANVASMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xAFC9B90)
#define MIHOYO_SDK_MIHOYOSDKCANVASMANAGER_INSTANCE_OFFSET UNITYSDK_OFFSET(0xAFC9A80)
#define MIHOYO_SDK_MIHOYOSDKCANVASMANAGER_TRYDESTROYCANVAS_OFFSET UNITYSDK_OFFSET(0xAFC9EA0)
#define MIHOYO_SDK_MIHOYOSDKCANVASMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xAFC9B80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKCanvasManager_TypeDefinitionIndex = 46459;

	class MiHoYoSDKCanvasManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::MiHoYoSDKCanvasManager** StaticGet__instance()
		{
			return (::MiHoYo::SDK::MiHoYoSDKCanvasManager**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKCanvasManager_TypeDefinitionIndex)->GetStaticField(0x25A60);
		}
		// static const ::System::String* CanvasPrefabPath; // 0x0
		// static const ::System::String* CanvasName; // 0x0
		::UnityEngine::GameObject* canvas; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKCANVASMANAGER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::MiHoYoSDKCanvasManager* Instance()
		{
			return ((::MiHoYo::SDK::MiHoYoSDKCanvasManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKCANVASMANAGER_INSTANCE_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKCANVASMANAGER_INIT_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetCanvas()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKCANVASMANAGER_GETCANVAS_OFFSET))(this);
		}

		::System::Single GetScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKCANVASMANAGER_GETSCALE_OFFSET))(this);
		}

		::System::Void DestroyCanvas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKCANVASMANAGER_DESTROYCANVAS_OFFSET))(this);
		}

		::System::Void TryDestroyCanvas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKCANVASMANAGER_TRYDESTROYCANVAS_OFFSET))(this);
		}
	};
}
