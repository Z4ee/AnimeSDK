#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UINODECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA712B00)

namespace RPG::Client
{
	inline static constexpr unsigned int UINodeCollection_TypeDefinitionIndex = 56467;

	class UINodeCollection : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Nodes; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINODECOLLECTION__CTOR_OFFSET))(this);
		}
	};
}
