#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_4049D22E129EA19F;
class Class_2_5A3A67245CBC6E90;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIBOSSBATTLEDATAROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18D28740)
#define MOLEMOLE_UIBOSSBATTLEDATAROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18D287B0)
#define MOLEMOLE_UIBOSSBATTLEDATAROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18D28850)
#define MOLEMOLE_UIBOSSBATTLEDATAROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x18D28910)
#define MOLEMOLE_UIBOSSBATTLEDATAROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18D28B10)
#define MOLEMOLE_UIBOSSBATTLEDATAROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18D28B20)
#define MOLEMOLE_UIBOSSBATTLEDATAROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18D28BC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossBattleDataRowWidgetController_TypeDefinitionIndex = 58944;

	class UIBossBattleDataRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSBATTLEDATAROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_5A3A67245CBC6E90* get__viewModel()
		{
			return ((::Class_2_5A3A67245CBC6E90*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSBATTLEDATAROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSBATTLEDATAROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSBATTLEDATAROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::Class_1_4049D22E129EA19F* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4049D22E129EA19F*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSBATTLEDATAROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSBATTLEDATAROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSBATTLEDATAROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
