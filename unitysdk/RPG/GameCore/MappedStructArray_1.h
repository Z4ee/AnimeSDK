#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UnmanagedStructArray_1.h"

class Class_1_43BD383C98B4C0C5_13;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int MappedStructArray_1_TypeDefinitionIndex = 33752;

	template <typename T>
	class MappedStructArray_1 : public ::RPG::GameCore::UnmanagedStructArray_1<T>
	{
	public:
		::System::String* _path; // 0x0
		::System::Func_4<::Class_1_43BD383C98B4C0C5_13*, ::System::Int64, ::System::Int32, T>* _parser; // 0x0
	};
}
