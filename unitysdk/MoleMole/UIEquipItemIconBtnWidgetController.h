#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIItemIconBtnWidgetController.h"

class Class_1_0D6706375CDAAE8C;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIEQUIPITEMICONBTNWIDGETCONTROLLER_GETISMATERIAL_OFFSET UNITYSDK_OFFSET(0x16F145D0)
#define MOLEMOLE_UIEQUIPITEMICONBTNWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x16F142D0)
#define MOLEMOLE_UIEQUIPITEMICONBTNWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16F142E0)
#define MOLEMOLE_UIEQUIPITEMICONBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16F14620)
#define MOLEMOLE_UIEQUIPITEMICONBTNWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16F14640)

namespace MoleMole
{
	inline static constexpr unsigned int UIEquipItemIconBtnWidgetController_TypeDefinitionIndex = 71655;

	class UIEquipItemIconBtnWidgetController : public ::MoleMole::UIItemIconBtnWidgetController
	{
	public:
		::System::Action_1<::MoleMole::UIEquipItemIconBtnWidgetController*>* RefreshEquipStateAction; // 0x3D0
		::Class_1_0D6706375CDAAE8C* itemData; // 0x3D8
		::System::Boolean isMaterial; // 0x3E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPITEMICONBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPITEMICONBTNWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPITEMICONBTNWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Boolean GetIsMaterial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPITEMICONBTNWIDGETCONTROLLER_GETISMATERIAL_OFFSET))(this);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPITEMICONBTNWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
