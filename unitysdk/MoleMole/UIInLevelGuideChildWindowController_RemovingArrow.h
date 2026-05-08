#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UIInLevelGuideItemChildWindowController; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_REMOVINGARROW_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x16406220)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_REMOVINGARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x164062C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelGuideChildWindowController_RemovingArrow_TypeDefinitionIndex = 50703;

	class UIInLevelGuideChildWindowController_RemovingArrow : public ::System::Object
	{
	public:
		::MoleMole::UIInLevelGuideItemChildWindowController* ctrl; // 0x10
		::System::Func_1<::UnityEngine::Vector3>* posFunc; // 0x18
		::UnityEngine::Vector3 pos; // 0x20

		::System::Void _ctor(::MoleMole::UIInLevelGuideItemChildWindowController* ctrl, ::UnityEngine::Vector3 pos, ::System::Func_1<::UnityEngine::Vector3>* posFunc)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelGuideItemChildWindowController*, ::UnityEngine::Vector3, ::System::Func_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_REMOVINGARROW__CTOR_OFFSET))(this, ctrl, pos, posFunc);
		}

		::UnityEngine::Vector3 GetPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_REMOVINGARROW_GETPOSITION_OFFSET))(this);
		}
	};
}
