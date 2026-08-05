#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

inline static constexpr unsigned int CachedMonoBehaviour_1_TypeDefinitionIndex = 40080;

template <typename T>
class CachedMonoBehaviour_1 : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Collections::Generic::HashSet_1<T>** StaticGet_all()
	{
		return (::System::Collections::Generic::HashSet_1<T>**)Il2CppClass::FromTypeDefinitionIndex(CachedMonoBehaviour_1_TypeDefinitionIndex)->GetStaticField(0x0);
	}
};
