#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/TextAnchor.h"

class Class_1_777EB91B86430809_1;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIGENERALDROPDOWNACTIONSCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x169C9560)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralDropDownActionsContext_TypeDefinitionIndex = 79252;

	class UIGeneralDropDownActionsContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::Class_1_777EB91B86430809_1*>* ButtonContexts; // 0x28
		::UnityEngine::Transform* LocateRD; // 0x30
		::UnityEngine::Transform* LocateLD; // 0x38
		::UnityEngine::Transform* LocateLT; // 0x40
		::UnityEngine::Transform* LocateRT; // 0x48
		::UnityEngine::RectTransform* AutoAnchorCanvas; // 0x50
		::UnityEngine::TextAnchor AnchorMode; // 0x58
		::System::Boolean AutoAnchor; // 0x5C
		::MoleMole::InputLogicEventType CloseEventType; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNACTIONSCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
