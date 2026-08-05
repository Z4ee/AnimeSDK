#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DEST_MATH_QUERY_SORT_1_OFFSET UNITYSDK_OFFSET(0x1FBBB6F0)
#define DEST_MATH_QUERY_SORT_2_OFFSET UNITYSDK_OFFSET(0x1FBBB760)
#define DEST_MATH_QUERY_SORT_OFFSET UNITYSDK_OFFSET(0x1FBBB6D0)
#define DEST_MATH_QUERY__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBBB6C0)

namespace Dest::Math
{
	inline static constexpr unsigned int Query_TypeDefinitionIndex = 35448;

	class Query : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_QUERY__CTOR_OFFSET))(this);
		}

		static ::System::Boolean Sort(::System::Int32& v0, ::System::Int32& v1)
		{
			return ((::System::Boolean(*)(::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + DEST_MATH_QUERY_SORT_OFFSET))(v0, v1);
		}

		static ::System::Boolean Sort_1(::System::Int32& v0, ::System::Int32& v1, ::System::Int32& v2)
		{
			return ((::System::Boolean(*)(::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + DEST_MATH_QUERY_SORT_1_OFFSET))(v0, v1, v2);
		}

		static ::System::Boolean Sort_2(::System::Int32& v0, ::System::Int32& v1, ::System::Int32& v2, ::System::Int32& v3)
		{
			return ((::System::Boolean(*)(::System::Int32&, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + DEST_MATH_QUERY_SORT_2_OFFSET))(v0, v1, v2, v3);
		}
	};
}
