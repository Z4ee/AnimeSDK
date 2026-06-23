#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_37FB1E4A01FFA033;
class Class_3_398B7A90ED0C0464_2;
class Class_3_3C5ECA5FDADC11D0;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGTROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1779C4F0)
#define MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGTROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1779C560)
#define MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1779C600)
#define MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGTROWWIDGETCONTROLLER_SETSELFDATA_OFFSET UNITYSDK_OFFSET(0x1779C7A0)
#define MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1779C870)
#define MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGTROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1779C880)
#define MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1779C920)

namespace MoleMole
{
	inline static constexpr unsigned int UIHardCoreBossBattleRankingtRowWidgetController_TypeDefinitionIndex = 45582;

	class UIHardCoreBossBattleRankingtRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_37FB1E4A01FFA033* get__viewModel()
		{
			return ((::Class_2_37FB1E4A01FFA033*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGTROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGTROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetSelfData(::Class_3_3C5ECA5FDADC11D0* selfInfo, ::Class_3_398B7A90ED0C0464_2* selfRankInfo, ::System::Int32 selfFriendRankIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_3C5ECA5FDADC11D0*, ::Class_3_398B7A90ED0C0464_2*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGTROWWIDGETCONTROLLER_SETSELFDATA_OFFSET))(this, selfInfo, selfRankInfo, selfFriendRankIndex);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGTROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
