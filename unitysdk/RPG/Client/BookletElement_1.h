#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

class Class_0_16E4307DCC419505_1136;
class Class_0_16E4307DCC419505_1137;
class Class_1_33414E91216E4EB5;
namespace RPG::Client { class Booklet; }
namespace RPG::Client { class IBookletView; }
namespace RPG::GameCore::Booklet { class ElementConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

namespace RPG::Client
{
	inline static constexpr unsigned int BookletElement_1_TypeDefinitionIndex = 72315;

	template <typename TElementConfig>
	class BookletElement_1 : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		TElementConfig _Config; // 0x0
		::System::Collections::Generic::List_1<::Class_1_33414E91216E4EB5*>* _UIAdaptOperations; // 0x0
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1136*>* _Children; // 0x0
		::RPG::Client::IBookletView* _View_k__BackingField; // 0x0
		::Class_0_16E4307DCC419505_1136* _Parent_k__BackingField; // 0x0
	};
}
