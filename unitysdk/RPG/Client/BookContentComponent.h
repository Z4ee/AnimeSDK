#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class BookContentComponent_BookContentData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BOOKCONTENTCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD92B40)

namespace RPG::Client
{
	inline static constexpr unsigned int BookContentComponent_TypeDefinitionIndex = 72435;

	class BookContentComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::BookContentComponent_BookContentData*>* BookContentPrefabList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKCONTENTCOMPONENT__CTOR_OFFSET))(this);
		}
	};
}
