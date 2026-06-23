#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MarcelColor.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

namespace MoleMole
{
	inline static constexpr unsigned int MarcelShapeConfig_TypeDefinitionIndex = 45304;

	struct alignas(8) MarcelShapeConfig
	{
		::UnityEngine::GameObject* Prefab; // 0x10
		::System::Collections::Generic::Dictionary_2<::MoleMole::MarcelColor, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*>* Materials; // 0x18
	};
}
