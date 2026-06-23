#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class UIManager; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MIHOYO_SDK_UIMANAGERFACADE_DESTROYALLUI_OFFSET UNITYSDK_OFFSET(0x1C39BC00)
#define MIHOYO_SDK_UIMANAGERFACADE_ENABLEUITRACKING_OFFSET UNITYSDK_OFFSET(0x1C39BBE0)
#define MIHOYO_SDK_UIMANAGERFACADE_GET_INSATANCE_OFFSET UNITYSDK_OFFSET(0x1C39B920)
#define MIHOYO_SDK_UIMANAGERFACADE_ISENABLEUITRACKING_OFFSET UNITYSDK_OFFSET(0x1C39BBF0)
#define MIHOYO_SDK_UIMANAGERFACADE_POPUIMANAGER_OFFSET UNITYSDK_OFFSET(0x1C39C070)
#define MIHOYO_SDK_UIMANAGERFACADE_PUSHUIMANAGER_OFFSET UNITYSDK_OFFSET(0x1C39BF50)
#define MIHOYO_SDK_UIMANAGERFACADE_SET_INSATANCE_OFFSET UNITYSDK_OFFSET(0x1C39BB80)
#define MIHOYO_SDK_UIMANAGERFACADE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C39C170)
#define MIHOYO_SDK_UIMANAGERFACADE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C39BAB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UIManagerFacade_TypeDefinitionIndex = 20025;

	class UIManagerFacade : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::UIManagerFacade** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::UIManagerFacade**)Il2CppClass::FromTypeDefinitionIndex(UIManagerFacade_TypeDefinitionIndex)->GetStaticField(0xAF80);
		}
		::System::Collections::Generic::HashSet_1<::MiHoYo::SDK::UIManager*>* m_setUIManager; // 0x10
		::System::Boolean m_bEnableUITracking; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGERFACADE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGERFACADE__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::UIManagerFacade* get_Insatance()
		{
			return ((::MiHoYo::SDK::UIManagerFacade*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGERFACADE_GET_INSATANCE_OFFSET))();
		}

		static ::System::Void set_Insatance(::MiHoYo::SDK::UIManagerFacade* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::UIManagerFacade*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGERFACADE_SET_INSATANCE_OFFSET))(value);
		}

		::System::Void EnableUITracking(::System::Boolean bEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGERFACADE_ENABLEUITRACKING_OFFSET))(this, bEnable);
		}

		::System::Boolean IsEnableUITracking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGERFACADE_ISENABLEUITRACKING_OFFSET))(this);
		}

		::System::Void DestroyAllUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGERFACADE_DESTROYALLUI_OFFSET))(this);
		}

		::System::Void PushUIManager(::MiHoYo::SDK::UIManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UIManager*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGERFACADE_PUSHUIMANAGER_OFFSET))(this, manager);
		}

		::System::Void PopUIManager(::MiHoYo::SDK::UIManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UIManager*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIMANAGERFACADE_POPUIMANAGER_OFFSET))(this, manager);
		}
	};
}
