#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::GameCore { class ColliderGroup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_GROUPEDCOLLIDERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xE67B6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupedColliderConfig_TypeDefinitionIndex = 57392;

	class GroupedColliderConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* DefaultActiveGroup; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::ColliderGroup*>* Groups; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPEDCOLLIDERCONFIG__CTOR_OFFSET))(this);
		}
	};
}
