#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIINLEVELROTATORCONTROLCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x152873D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelRotatorControlContext_TypeDefinitionIndex = 51234;

	class UIInLevelRotatorControlContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::UnityEngine::Vector2>* OnMoveInput; // 0x28
		::System::Action* OnClose; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELROTATORCONTROLCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
