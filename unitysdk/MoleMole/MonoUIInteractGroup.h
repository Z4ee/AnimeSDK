#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class UIGeneralBubbleChatChildWindowController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_MONOUIINTERACTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x151504B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIInteractGroup_TypeDefinitionIndex = 41070;

	class MonoUIInteractGroup : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIGeneralBubbleChatChildWindowController*>* bubbles; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIINTERACTGROUP__CTOR_OFFSET))(this);
		}
	};
}
