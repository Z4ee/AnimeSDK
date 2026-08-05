#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace SQLite { template <typename T1, typename T2> class FastColumnSetter___c__DisplayClass2_0_2; }
namespace System { template <typename T1, typename T2> class Action_2; }

namespace SQLite
{
	inline static constexpr unsigned int FastColumnSetter___c__DisplayClass2_1_2_TypeDefinitionIndex = 39074;

	template <typename ObjectType, typename ColumnMemberType>
	class FastColumnSetter___c__DisplayClass2_1_2 : public ::System::Object
	{
	public:
		::System::Action_2<ObjectType, ::System::Nullable_1<ColumnMemberType>>* setProperty; // 0x0
		::SQLite::FastColumnSetter___c__DisplayClass2_0_2<ObjectType, ColumnMemberType>* CS___8__locals1; // 0x0
	};
}
