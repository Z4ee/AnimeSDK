#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGachaPerformance3DModelController; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x149D45A0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___C__DISPLAYCLASS36_0__PLAYCLOSEUPTL_B__1_OFFSET UNITYSDK_OFFSET(0x149D45B0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___C__DISPLAYCLASS36_0__PLAYCLOSEUPTL_B__2_OFFSET UNITYSDK_OFFSET(0x149D51C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPerformance3DModelController___c__DisplayClass36_0_TypeDefinitionIndex = 70351;

	class UIGachaPerformance3DModelController___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGachaPerformance3DModelController* __4__this; // 0x10
		::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* __9__2; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* camTimelines; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayCloseupTL_b__1(::UnityEngine::Playables::PlayableDirector* director1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___C__DISPLAYCLASS36_0__PLAYCLOSEUPTL_B__1_OFFSET))(this, director1);
		}

		::System::Void _PlayCloseupTL_b__2(::UnityEngine::Playables::PlayableDirector* director2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___C__DISPLAYCLASS36_0__PLAYCLOSEUPTL_B__2_OFFSET))(this, director2);
		}
	};
}
