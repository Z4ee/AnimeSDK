#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Hash128.h"

namespace Coffee::UIParticleInternal { template <typename T> class ObjectRepository_1_Entry; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int ObjectRepository_1_TypeDefinitionIndex = 42338;

	template <typename T>
	class ObjectRepository_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, ::Coffee::UIParticleInternal::ObjectRepository_1_Entry<T>*>* _cache; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Hash128>* _objectKey; // 0x0
		::System::String* _name; // 0x0
		::System::Action_1<T>* _onRelease; // 0x0
		::System::Collections::Generic::Stack_1<::Coffee::UIParticleInternal::ObjectRepository_1_Entry<T>*>* _pool; // 0x0
	};
}
