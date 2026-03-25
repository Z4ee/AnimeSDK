#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_3.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_BAKEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x8404290)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int BakedEvent_TypeDefinitionIndex = 37599;

	class BakedEvent : public ::UnityEngine::Events::UnityEvent_3<::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_BAKEDEVENT__CTOR_OFFSET))(this);
		}
	};
}
