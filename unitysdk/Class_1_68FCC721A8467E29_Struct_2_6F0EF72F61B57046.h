#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0EEAD3778F96A256.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeHashMap_2.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/Unity/Mathematics/float3.h"
#include "unitysdk/Unity/Mathematics/quaternion.h"

#define CLASS_1_68FCC721A8467E29_STRUCT_2_6F0EF72F61B57046_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7B53D0)
#define CLASS_1_68FCC721A8467E29_STRUCT_2_6F0EF72F61B57046_METHOD_2_F2016E7EF4C53E46_OFFSET UNITYSDK_OFFSET(0x1285A120)

inline static constexpr unsigned int Class_1_68FCC721A8467E29_Struct_2_6F0EF72F61B57046_TypeDefinitionIndex = 89397;

struct alignas(8) Class_1_68FCC721A8467E29_Struct_2_6F0EF72F61B57046
{
	::Unity::Collections::NativeList_1<::Struct_2_0EEAD3778F96A256> Field_2_2; // 0x10
	::Unity::Collections::NativeHashMap_2<::System::Int32, ::System::Int32> Field_2_1; // 0x20
	::Unity::Mathematics::quaternion Field_2_0; // 0x30
	::Unity::Mathematics::float3 Field_2_7; // 0x40

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_68FCC721A8467E29_STRUCT_2_6F0EF72F61B57046_EXECUTE_OFFSET))(this, a1);
	}

	static ::Unity::Mathematics::float3 Method_2_F2016E7EF4C53E46(::Unity::Mathematics::quaternion a1)
	{
		return ((::Unity::Mathematics::float3(*)(::Unity::Mathematics::quaternion))((::PBYTE)hIl2Cpp + CLASS_1_68FCC721A8467E29_STRUCT_2_6F0EF72F61B57046_METHOD_2_F2016E7EF4C53E46_OFFSET))(a1);
	}
};
