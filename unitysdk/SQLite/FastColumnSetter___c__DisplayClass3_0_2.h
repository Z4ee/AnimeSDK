#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }

namespace SQLite
{
	inline static constexpr unsigned int FastColumnSetter___c__DisplayClass3_0_2_TypeDefinitionIndex = 39075;

	template <typename ObjectType, typename ColumnMemberType>
	class FastColumnSetter___c__DisplayClass3_0_2 : public ::System::Object
	{
	public:
		::System::Action_2<ObjectType, ColumnMemberType>* setProperty; // 0x0
		::System::Func_3<::System::IntPtr, ::System::Int32, ColumnMemberType>* getColumnValue; // 0x0
	};
}
