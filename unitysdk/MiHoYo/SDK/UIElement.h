#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIBase.h"

namespace MiHoYo::SDK { class UIManager; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_UIELEMENT_GETUIMANAGER_OFFSET UNITYSDK_OFFSET(0x1BF84B70)
#define MIHOYO_SDK_UIELEMENT_GET_MANAGER_OFFSET UNITYSDK_OFFSET(0x1BF84B50)
#define MIHOYO_SDK_UIELEMENT_GET_PREFABNAME_OFFSET UNITYSDK_OFFSET(0x1BF84B30)
#define MIHOYO_SDK_UIELEMENT_ISINGLOBALUISTACKTOP_OFFSET UNITYSDK_OFFSET(0x1BF84FA0)
#define MIHOYO_SDK_UIELEMENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BF85020)
#define MIHOYO_SDK_UIELEMENT_SET_MANAGER_OFFSET UNITYSDK_OFFSET(0x1BF84B60)
#define MIHOYO_SDK_UIELEMENT_SET_PREFABNAME_OFFSET UNITYSDK_OFFSET(0x1BF84B40)
#define MIHOYO_SDK_UIELEMENT_TABACTIVE_OFFSET UNITYSDK_OFFSET(0x1BF83000)
#define MIHOYO_SDK_UIELEMENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BF84B80)
#define MIHOYO_SDK_UIELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF64690)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UIElement_TypeDefinitionIndex = 19987;

	class UIElement : public ::MiHoYo::SDK::UIBase
	{
	public:
		::System::Action* OnTab; // 0x18
		::System::Action* OnReturn; // 0x20
		::System::Action* OnEsc; // 0x28
		::System::Action* OnEnabled; // 0x30
		::System::String* _PrefabName_k__BackingField; // 0x38
		::MiHoYo::SDK::UIManager* _Manager_k__BackingField; // 0x40
		::System::Int32 tabPosition; // 0x48
		::System::Collections::Generic::List_1<::System::Object*>* tabList; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIELEMENT__CTOR_OFFSET))(this);
		}

		::System::String* get_PrefabName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIELEMENT_GET_PREFABNAME_OFFSET))(this);
		}

		::System::Void set_PrefabName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIELEMENT_SET_PREFABNAME_OFFSET))(this, value);
		}

		::MiHoYo::SDK::UIManager* get_Manager()
		{
			return ((::MiHoYo::SDK::UIManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIELEMENT_GET_MANAGER_OFFSET))(this);
		}

		::System::Void set_Manager(::MiHoYo::SDK::UIManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UIManager*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIELEMENT_SET_MANAGER_OFFSET))(this, value);
		}

		::MiHoYo::SDK::UIManager* GetUIManager()
		{
			return ((::MiHoYo::SDK::UIManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIELEMENT_GETUIMANAGER_OFFSET))(this);
		}

		::System::Void TabActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIELEMENT_TABACTIVE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIELEMENT_UPDATE_OFFSET))(this);
		}

		::System::Boolean IsInGlobalUIStackTop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIELEMENT_ISINGLOBALUISTACKTOP_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIELEMENT_ONENABLE_OFFSET))(this);
		}
	};
}
