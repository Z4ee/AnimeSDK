#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace Nap::NapECS
{
	inline static constexpr unsigned int ObjectPool_1_TypeDefinitionIndex = 38022;

	template <typename T>
	class ObjectPool_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Stack_1<::System::Object*>* m_objectStack; // 0x0
		::System::Action_1<::System::Object*>* m_resetAction; // 0x0
		::System::Action_1<::System::Object*>* m_onetimeInitAction; // 0x0
		::System::Int32 m_MaxFreeCount; // 0x0
	};
}
