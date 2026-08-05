#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0EEAD3778F96A256.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeHashMap_2.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"

#define CLASS_3_C2907946C3AFC0A5_STRUCT_2_193445514D328B53_EXECUTE_OFFSET UNITYSDK_OFFSET(0x81CA90)

inline static constexpr unsigned int Class_3_C2907946C3AFC0A5_Struct_2_193445514D328B53_TypeDefinitionIndex = 65120;

struct alignas(8) Class_3_C2907946C3AFC0A5_Struct_2_193445514D328B53
{
	::System::Boolean Field_2_2; // 0x10
	::Unity::Collections::NativeHashMap_2<::System::Int32, ::System::Int32> Field_2_1; // 0x18
	::Unity::Collections::NativeList_1<::Struct_2_0EEAD3778F96A256> Field_2_0; // 0x28

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C2907946C3AFC0A5_STRUCT_2_193445514D328B53_EXECUTE_OFFSET))(this, a1);
	}
};
