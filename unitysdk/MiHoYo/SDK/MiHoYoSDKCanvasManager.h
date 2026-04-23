#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_MIHOYOSDKCANVASMANAGER_DESTROYCANVAS_OFFSET UNITYSDK_OFFSET(0x8D3CC10)
#define MIHOYO_SDK_MIHOYOSDKCANVASMANAGER_GETCANVAS_OFFSET UNITYSDK_OFFSET(0x8D3C9E0)
#define MIHOYO_SDK_MIHOYOSDKCANVASMANAGER_GETSCALE_OFFSET UNITYSDK_OFFSET(0x8D3CA80)
#define MIHOYO_SDK_MIHOYOSDKCANVASMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x8D3C960)
#define MIHOYO_SDK_MIHOYOSDKCANVASMANAGER_INSTANCE_OFFSET UNITYSDK_OFFSET(0x8D3C850)
#define MIHOYO_SDK_MIHOYOSDKCANVASMANAGER_TRYDESTROYCANVAS_OFFSET UNITYSDK_OFFSET(0x8D3CCA0)
#define MIHOYO_SDK_MIHOYOSDKCANVASMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x8D3C950)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKCanvasManager_TypeDefinitionIndex = 43068;

	class MiHoYoSDKCanvasManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::MiHoYoSDKCanvasManager** StaticGet__instance()
		{
			return (::MiHoYo::SDK::MiHoYoSDKCanvasManager**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKCanvasManager_TypeDefinitionIndex)->GetStaticField(0x4C020);
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
