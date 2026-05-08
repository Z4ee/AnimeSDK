#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_ARRAYX_ISIN_OFFSET UNITYSDK_OFFSET(0x19D9BDE0)
#define FOUNDATION_ARRAYX_ISNOTIN_OFFSET UNITYSDK_OFFSET(0x19D9BE70)

namespace Foundation
{
	inline static constexpr unsigned int ArrayX_TypeDefinitionIndex = 7880;

	class ArrayX : public ::System::Object
	{
	public:
		static ::System::Boolean IsIn(::System::Int32 source, ::Il2CppArray<::System::Int32>* list)
		{
			return ((::System::Boolean(*)(::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + FOUNDATION_ARRAYX_ISIN_OFFSET))(source, list);
		}

		static ::System::Boolean IsNotIn(::System::Int32 source, ::Il2CppArray<::System::Int32>* list)
		{
			return ((::System::Boolean(*)(::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + FOUNDATION_ARRAYX_ISNOTIN_OFFSET))(source, list);
		}
	};
}
