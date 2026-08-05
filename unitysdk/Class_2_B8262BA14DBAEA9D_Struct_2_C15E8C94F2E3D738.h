#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_2_B8262BA14DBAEA9D;
namespace System { class String; }

#define CLASS_2_B8262BA14DBAEA9D_STRUCT_2_C15E8C94F2E3D738_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B1B50)
#define CLASS_2_B8262BA14DBAEA9D_STRUCT_2_C15E8C94F2E3D738__CTOR_OFFSET UNITYSDK_OFFSET(0x9B1B40)

inline static constexpr unsigned int Class_2_B8262BA14DBAEA9D_Struct_2_C15E8C94F2E3D738_TypeDefinitionIndex = 35179;

struct alignas(8) Class_2_B8262BA14DBAEA9D_Struct_2_C15E8C94F2E3D738
{
	::Class_2_B8262BA14DBAEA9D* Field_2_0; // 0x10
	::System::String* Field_2_7; // 0x18

	::System::Void _ctor(::Class_2_B8262BA14DBAEA9D* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8262BA14DBAEA9D*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B8262BA14DBAEA9D_STRUCT_2_C15E8C94F2E3D738__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8262BA14DBAEA9D_STRUCT_2_C15E8C94F2E3D738_DISPOSE_OFFSET))(this);
	}
};
