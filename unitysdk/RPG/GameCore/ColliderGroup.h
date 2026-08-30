#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define RPG_GAMECORE_COLLIDERGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xE58A470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ColliderGroup_TypeDefinitionIndex = 57391;

	class ColliderGroup : public ::System::Object
	{
	public:
		::System::String* GroupName; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* Colliders; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERGROUP__CTOR_OFFSET))(this);
		}
	};
}
