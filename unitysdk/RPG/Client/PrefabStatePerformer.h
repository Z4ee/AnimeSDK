#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PREFABSTATEPERFORMER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE1FEC0)

namespace RPG::Client
{
	inline static constexpr unsigned int PrefabStatePerformer_TypeDefinitionIndex = 68929;

	class PrefabStatePerformer : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* RelatedNodes; // 0x10
		::System::String* SystemName; // 0x18

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFABSTATEPERFORMER__CTOR_OFFSET))(this, a1);
		}
	};
}
