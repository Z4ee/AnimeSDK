#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MiHoYo::SDK { class Dll_OnDestroyDelegate; }
namespace System { class Action; }

#define MIHOYO_SDK_DLL_ADD_DLLDESTROYHANDLER_OFFSET UNITYSDK_OFFSET(0x1B9433F0)
#define MIHOYO_SDK_DLL_ADD_ONESC_OFFSET UNITYSDK_OFFSET(0x1B943330)
#define MIHOYO_SDK_DLL_ADD_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1B943270)
#define MIHOYO_SDK_DLL_ADD_ONTAB_OFFSET UNITYSDK_OFFSET(0x1B9431B0)
#define MIHOYO_SDK_DLL_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B91FB20)
#define MIHOYO_SDK_DLL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B943930)
#define MIHOYO_SDK_DLL_REMOVE_DLLDESTROYHANDLER_OFFSET UNITYSDK_OFFSET(0x1B943450)
#define MIHOYO_SDK_DLL_REMOVE_ONESC_OFFSET UNITYSDK_OFFSET(0x1B943390)
#define MIHOYO_SDK_DLL_REMOVE_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1B9432D0)
#define MIHOYO_SDK_DLL_REMOVE_ONTAB_OFFSET UNITYSDK_OFFSET(0x1B943210)
#define MIHOYO_SDK_DLL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B9434B0)
#define MIHOYO_SDK_DLL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B943940)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Dll_TypeDefinitionIndex = 7897;

	class Dll : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MiHoYo::SDK::Dll** StaticGet__instance()
		{
			return (::MiHoYo::SDK::Dll**)Il2CppClass::FromTypeDefinitionIndex(Dll_TypeDefinitionIndex)->GetStaticField(0x109F0);
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

		::System::Void add_OnTab(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_ADD_ONTAB_OFFSET))(this, a1);
		}

		::System::Void remove_OnTab(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_REMOVE_ONTAB_OFFSET))(this, a1);
		}

		::System::Void add_OnReturn(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_ADD_ONRETURN_OFFSET))(this, a1);
		}

		::System::Void remove_OnReturn(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_REMOVE_ONRETURN_OFFSET))(this, a1);
		}

		::System::Void add_OnEsc(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_ADD_ONESC_OFFSET))(this, a1);
		}

		::System::Void remove_OnEsc(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_REMOVE_ONESC_OFFSET))(this, a1);
		}

		static ::MiHoYo::SDK::Dll* Instance()
		{
			return ((::MiHoYo::SDK::Dll*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_INSTANCE_OFFSET))();
		}

		::System::Void add_DLLDestroyHandler(::MiHoYo::SDK::Dll_OnDestroyDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Dll_OnDestroyDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_ADD_DLLDESTROYHANDLER_OFFSET))(this, a1);
		}

		::System::Void remove_DLLDestroyHandler(::MiHoYo::SDK::Dll_OnDestroyDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Dll_OnDestroyDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_REMOVE_DLLDESTROYHANDLER_OFFSET))(this, a1);
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
