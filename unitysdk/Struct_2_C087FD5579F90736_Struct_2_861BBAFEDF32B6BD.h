#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeVariableArray_1.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_C087FD5579F90736_STRUCT_2_861BBAFEDF32B6BD_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x7F7C60)

inline static constexpr unsigned int Struct_2_C087FD5579F90736_Struct_2_861BBAFEDF32B6BD_TypeDefinitionIndex = 86668;

struct alignas(8) Struct_2_C087FD5579F90736_Struct_2_861BBAFEDF32B6BD
{
	::Foundation::Unreal::FTransform Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x30
	::Foundation::Unreal::FName Field_2_2; // 0x34
	::Foundation::NativeVariableArray_1<::Foundation::Unreal::FTransform3D> Field_2_3; // 0x40

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C087FD5579F90736_STRUCT_2_861BBAFEDF32B6BD_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}
};
