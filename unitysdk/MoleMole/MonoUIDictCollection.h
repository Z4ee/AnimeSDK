#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOUIDICTCOLLECTION_TRYGETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x12649070)
#define MOLEMOLE_MONOUIDICTCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x12649190)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIDictCollection_TypeDefinitionIndex = 74686;

	class MonoUIDictCollection : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* mapItems; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIDICTCOLLECTION__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* TryGetTransform(::System::String* name)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIDICTCOLLECTION_TRYGETTRANSFORM_OFFSET))(this, name);
		}
	};
}
