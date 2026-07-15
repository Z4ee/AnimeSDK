#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

namespace RPG::CustomRP
{
	inline static constexpr unsigned int Coroutine_1_TypeDefinitionIndex = 36094;

	template <typename T>
	class Coroutine_1 : public ::System::Object
	{
	public:
		T returnVal; // 0x0
		::System::Exception* e; // 0x0
		::UnityEngine::Coroutine* coroutine; // 0x0
		::System::Object* yielded; // 0x0
	};
}
