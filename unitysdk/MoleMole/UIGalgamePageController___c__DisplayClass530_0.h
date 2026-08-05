#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController; }
namespace UnityEngine { class Object; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS530_0__CREATEENTERBGLOADBATCH_B__0_OFFSET UNITYSDK_OFFSET(0x19EE4770)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS530_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19EE4760)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass530_0_TypeDefinitionIndex = 62815;

	class UIGalgamePageController___c__DisplayClass530_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController* __4__this; // 0x10
		::System::Int32 currStageNodeIdx; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS530_0__CTOR_OFFSET))(this);
		}

		::System::Void _CreateEnterBGLoadBatch_b__0(::UnityEngine::Object* res)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS530_0__CREATEENTERBGLOADBATCH_B__0_OFFSET))(this, res);
		}
	};
}
