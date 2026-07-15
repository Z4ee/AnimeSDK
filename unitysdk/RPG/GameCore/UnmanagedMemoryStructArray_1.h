#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UnmanagedStructArray_1.h"
#include "unitysdk/System/Span_1.h"

class Class_1_43BD383C98B4C0C5_13;
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnmanagedMemoryStructArray_1_TypeDefinitionIndex = 33754;

	template <typename T>
	class UnmanagedMemoryStructArray_1 : public ::RPG::GameCore::UnmanagedStructArray_1<T>
	{
	public:
		::System::IntPtr _memory; // 0x0
	};
}
