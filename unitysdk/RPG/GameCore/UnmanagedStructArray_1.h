#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_13;
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System::IO { class UnmanagedMemoryAccessor; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnmanagedStructArray_1_TypeDefinitionIndex = 33757;

	template <typename T>
	class UnmanagedStructArray_1 : public ::System::Object
	{
	public:
		::System::Int64 _offset; // 0x0
		::System::Int64 _size; // 0x0
		::Class_1_43BD383C98B4C0C5_13* _reader; // 0x0
		::System::Func_4<::Class_1_43BD383C98B4C0C5_13*, ::System::Int64, ::System::Int32, T>* _parser; // 0x0
	};
}
