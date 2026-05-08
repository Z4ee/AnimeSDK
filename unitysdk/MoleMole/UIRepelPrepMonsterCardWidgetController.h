#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_AFD9211503308052;
class Class_2_F8EB4D9464ADCCA1;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIREPELPREPMONSTERCARDWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13FF85C0)
#define MOLEMOLE_UIREPELPREPMONSTERCARDWIDGETCONTROLLER_ONCLICK_OFFSET UNITYSDK_OFFSET(0x13FF86F0)
#define MOLEMOLE_UIREPELPREPMONSTERCARDWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13FF8630)
#define MOLEMOLE_UIREPELPREPMONSTERCARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x13FF8730)
#define MOLEMOLE_UIREPELPREPMONSTERCARDWIDGETCONTROLLER_SETCARDCLICK_OFFSET UNITYSDK_OFFSET(0x13FF87D0)
#define MOLEMOLE_UIREPELPREPMONSTERCARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13FF8920)
#define MOLEMOLE_UIREPELPREPMONSTERCARDWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13FF8930)
#define MOLEMOLE_UIREPELPREPMONSTERCARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x13FF89D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRepelPrepMonsterCardWidgetController_TypeDefinitionIndex = 64987;

	class UIRepelPrepMonsterCardWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_F8EB4D9464ADCCA1* monsterConfig; // 0x2E8
		::System::Action_1<::System::Int32>* cardClick; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPMONSTERCARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_AFD9211503308052* get__viewModel()
		{
			return ((::Class_2_AFD9211503308052*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPMONSTERCARDWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPMONSTERCARDWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPMONSTERCARDWIDGETCONTROLLER_ONCLICK_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPMONSTERCARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetCardClick(::System::Action_1<::System::Int32>* cardClick, ::Class_2_F8EB4D9464ADCCA1* monsterConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*, ::Class_2_F8EB4D9464ADCCA1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPMONSTERCARDWIDGETCONTROLLER_SETCARDCLICK_OFFSET))(this, cardClick, monsterConfig);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPMONSTERCARDWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPMONSTERCARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
