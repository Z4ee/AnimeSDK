#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NewsTickerItem; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_1_8421D4DF3905ADA9_CREATE_OFFSET UNITYSDK_OFFSET(0x1561F820)
#define CLASS_1_8421D4DF3905ADA9_ONRECYCLEDITEMREUSED_OFFSET UNITYSDK_OFFSET(0x1561F9E0)
#define CLASS_1_8421D4DF3905ADA9__CTOR_OFFSET UNITYSDK_OFFSET(0x1561F810)

inline static constexpr unsigned int Class_1_8421D4DF3905ADA9_TypeDefinitionIndex = 65921;

class Class_1_8421D4DF3905ADA9 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::UnityEngine::Transform* Field_1_1; // 0x18

	::System::Void _ctor(::UnityEngine::GameObject* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_8421D4DF3905ADA9__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::NewsTickerItem* Create()
	{
		return ((::RPG::Client::NewsTickerItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8421D4DF3905ADA9_CREATE_OFFSET))(this);
	}

	::System::Void OnRecycledItemReused(::RPG::Client::NewsTickerItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NewsTickerItem*))((::PBYTE)hIl2Cpp + CLASS_1_8421D4DF3905ADA9_ONRECYCLEDITEMREUSED_OFFSET))(this, a1);
	}
};
