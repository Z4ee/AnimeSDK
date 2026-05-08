#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIItemIconBtnWidgetController.h"

class Class_1_0D6706375CDAAE8C;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIWORKSHOPICONBTNWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x14C4FA10)
#define MOLEMOLE_UIWORKSHOPICONBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14C4FBB0)
#define MOLEMOLE_UIWORKSHOPICONBTNWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x14C4FBD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkshopIconBtnWidgetController_TypeDefinitionIndex = 40656;

	class UIWorkshopIconBtnWidgetController : public ::MoleMole::UIItemIconBtnWidgetController
	{
	public:
		::System::Action_1<::MoleMole::UIWorkshopIconBtnWidgetController*>* RefreshEquipStateAction; // 0x3C8
		::Class_1_0D6706375CDAAE8C* itemData; // 0x3D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPICONBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPICONBTNWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPICONBTNWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
