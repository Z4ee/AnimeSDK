#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NewsTicker_MoveDirectionType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NewsTickerItem; }
namespace RPG::Client { template <typename T> class INewsTickerPoolableItemCreator_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_4D062232954906A4_METHOD_1_53EDABF5E6FF12B5_OFFSET UNITYSDK_OFFSET(0x118547A0)

inline static constexpr unsigned int Class_1_4D062232954906A4_TypeDefinitionIndex = 63602;

class Class_1_4D062232954906A4 : public ::System::Object
{
public:
	static ::RPG::Client::INewsTickerPoolableItemCreator_1<::RPG::Client::NewsTickerItem*>* Method_1_53EDABF5E6FF12B5(::RPG::Client::NewsTicker_MoveDirectionType a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Transform* a3)
	{
		return ((::RPG::Client::INewsTickerPoolableItemCreator_1<::RPG::Client::NewsTickerItem*>*(*)(::RPG::Client::NewsTicker_MoveDirectionType, ::UnityEngine::GameObject*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_4D062232954906A4_METHOD_1_53EDABF5E6FF12B5_OFFSET))(a1, a2, a3);
	}
};
