#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MiHoYo::SDK { class Dll_OnDestroyDelegate; }
namespace System { class Action; }

#define MIHOYO_SDK_DLL_ADD_DLLDESTROYHANDLER_OFFSET UNITYSDK_OFFSET(0x1DD3CBD0)
#define MIHOYO_SDK_DLL_ADD_ONESC_OFFSET UNITYSDK_OFFSET(0x1DD3C870)
#define MIHOYO_SDK_DLL_ADD_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1DD3C770)
#define MIHOYO_SDK_DLL_ADD_ONTAB_OFFSET UNITYSDK_OFFSET(0x1DD3C670)
#define MIHOYO_SDK_DLL_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1DD3C970)
#define MIHOYO_SDK_DLL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1DD3CF10)
#define MIHOYO_SDK_DLL_REMOVE_DLLDESTROYHANDLER_OFFSET UNITYSDK_OFFSET(0x1DD3CC50)
#define MIHOYO_SDK_DLL_REMOVE_ONESC_OFFSET UNITYSDK_OFFSET(0x1DD3C8F0)
#define MIHOYO_SDK_DLL_REMOVE_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1DD3C7F0)
#define MIHOYO_SDK_DLL_REMOVE_ONTAB_OFFSET UNITYSDK_OFFSET(0x1DD3C6F0)
#define MIHOYO_SDK_DLL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1DD3CCD0)
#define MIHOYO_SDK_DLL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD3CF20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Dll_TypeDefinitionIndex = 20051;

	class Dll : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MiHoYo::SDK::Dll** StaticGet__instance()
		{
			return (::MiHoYo::SDK::Dll**)Il2CppClass::FromTypeDefinitionIndex(Dll_TypeDefinitionIndex)->GetStaticField(0xB1A0);
		}
		::System::Action* OnTab; // 0x18
		::System::Action* OnReturn; // 0x20
		::System::Action* OnEsc; // 0x28
		::System::Boolean escFromWin32; // 0x30
		::MiHoYo::SDK::Dll_OnDestroyDelegate* DLLDestroyHandler; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL__CTOR_OFFSET))(this);
		}

		::System::Void add_OnTab(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_ADD_ONTAB_OFFSET))(this, value);
		}

		::System::Void remove_OnTab(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_REMOVE_ONTAB_OFFSET))(this, value);
		}

		::System::Void add_OnReturn(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_ADD_ONRETURN_OFFSET))(this, value);
		}

		::System::Void remove_OnReturn(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_REMOVE_ONRETURN_OFFSET))(this, value);
		}

		::System::Void add_OnEsc(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_ADD_ONESC_OFFSET))(this, value);
		}

		::System::Void remove_OnEsc(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_REMOVE_ONESC_OFFSET))(this, value);
		}

		static ::MiHoYo::SDK::Dll* Instance()
		{
			return ((::MiHoYo::SDK::Dll*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_INSTANCE_OFFSET))();
		}

		::System::Void add_DLLDestroyHandler(::MiHoYo::SDK::Dll_OnDestroyDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Dll_OnDestroyDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_ADD_DLLDESTROYHANDLER_OFFSET))(this, value);
		}

		::System::Void remove_DLLDestroyHandler(::MiHoYo::SDK::Dll_OnDestroyDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Dll_OnDestroyDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_REMOVE_DLLDESTROYHANDLER_OFFSET))(this, value);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_ONDESTROY_OFFSET))(this);
		}
	};
}
