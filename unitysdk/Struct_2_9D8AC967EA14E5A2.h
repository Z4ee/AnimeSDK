#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_0E9EED74A778662A;

#define STRUCT_2_9D8AC967EA14E5A2_METHOD_2_FCEE1EECCA3A6DFD_OFFSET UNITYSDK_OFFSET(0x20DEB30)
#define STRUCT_2_9D8AC967EA14E5A2__CTOR_OFFSET UNITYSDK_OFFSET(0x14926C0)

inline static constexpr unsigned int Struct_2_9D8AC967EA14E5A2_TypeDefinitionIndex = 28722;

struct alignas(8) Struct_2_9D8AC967EA14E5A2
{
	::System::UInt64 Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x18
	::Class_1_0E9EED74A778662A* Field_2_2; // 0x20

	::System::Void _ctor(::System::UInt64 a1, ::System::UInt32 a2, ::Class_1_0E9EED74A778662A* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::Class_1_0E9EED74A778662A*))((::PBYTE)hIl2Cpp + STRUCT_2_9D8AC967EA14E5A2__CTOR_OFFSET))(this, a1, a2, a3);
	}

	/*
	::Struct_2_FE916A7725FF5C18 Method_2_FCEE1EECCA3A6DFD()
	{
		return ((::Struct_2_FE916A7725FF5C18(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9D8AC967EA14E5A2_METHOD_2_FCEE1EECCA3A6DFD_OFFSET))(this);
	}
	*/
};
