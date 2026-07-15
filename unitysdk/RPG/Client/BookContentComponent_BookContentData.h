#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_BOOKCONTENTCOMPONENT_BOOKCONTENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19FE2560)

namespace RPG::Client
{
	inline static constexpr unsigned int BookContentComponent_BookContentData_TypeDefinitionIndex = 69236;

	class BookContentComponent_BookContentData : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* Prefab; // 0x10
		::System::Single Padding; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKCONTENTCOMPONENT_BOOKCONTENTDATA__CTOR_OFFSET))(this);
		}
	};
}
