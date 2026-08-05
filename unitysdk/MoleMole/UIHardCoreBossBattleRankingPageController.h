#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_8D25287257853ABA;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17BF2F70)
#define MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17BF2F80)
#define MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17BF2FF0)
#define MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17BF3090)
#define MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17BF32C0)
#define MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17BF32D0)
#define MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17BF3370)

namespace MoleMole
{
	inline static constexpr unsigned int UIHardCoreBossBattleRankingPageController_TypeDefinitionIndex = 49749;

	class UIHardCoreBossBattleRankingPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_8D25287257853ABA* get__viewModel()
		{
			return ((::Class_2_8D25287257853ABA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
