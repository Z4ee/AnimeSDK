#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

class Class_0_16E4307DCC419505_1037;
class Class_0_16E4307DCC419505_1038;
class Class_1_7A3194024C7D2DEC;
namespace RPG::Client { class Booklet; }
namespace RPG::Client { class IBookletView; }
namespace RPG::GameCore::Booklet { class ElementConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

namespace RPG::Client
{
	inline static constexpr unsigned int BookletElement_1_TypeDefinitionIndex = 67630;

	template <typename TElementConfig>
	class BookletElement_1 : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		TElementConfig _Config; // 0x0
		::System::Collections::Generic::List_1<::Class_1_7A3194024C7D2DEC*>* _UIAdaptOperations; // 0x0
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1037*>* _Children; // 0x0
		::RPG::Client::IBookletView* _View_k__BackingField; // 0x0
		::Class_0_16E4307DCC419505_1037* _Parent_k__BackingField; // 0x0
	};
}
