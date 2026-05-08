#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0EEAD3778F96A256.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeHashMap_2.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"

#define CLASS_3_04C4166B6662A8DB_STRUCT_2_D1B2FD5A6549B864_EXECUTE_OFFSET UNITYSDK_OFFSET(0x793DE0)

inline static constexpr unsigned int Class_3_04C4166B6662A8DB_Struct_2_D1B2FD5A6549B864_TypeDefinitionIndex = 66717;

struct alignas(8) Class_3_04C4166B6662A8DB_Struct_2_D1B2FD5A6549B864
{
	::Unity::Collections::NativeHashMap_2<::System::Int32, ::System::Int32> Field_2_0; // 0x10
	::Unity::Collections::NativeList_1<::Struct_2_0EEAD3778F96A256> Field_2_1; // 0x20

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_04C4166B6662A8DB_STRUCT_2_D1B2FD5A6549B864_EXECUTE_OFFSET))(this, a1);
	}
};
