#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_544F425D4D7FE2EE;
class Class_1_5EBD02232B1B6972;
class Class_1_EA471C1B20C1B83C;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F546382F4336378D_METHOD_1_1BB0BE9D215D94D7_OFFSET UNITYSDK_OFFSET(0x11AAAFA0)
#define CLASS_1_F546382F4336378D_METHOD_1_9088016A4CFD4E97_OFFSET UNITYSDK_OFFSET(0x11AAAC80)
#define CLASS_1_F546382F4336378D__CTOR_OFFSET UNITYSDK_OFFSET(0x11AAB2D0)

inline static constexpr unsigned int Class_1_F546382F4336378D_TypeDefinitionIndex = 57523;

class Class_1_F546382F4336378D : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F546382F4336378D__CTOR_OFFSET))(this);
	}

	::Class_1_EA471C1B20C1B83C* Method_1_9088016A4CFD4E97(::Class_1_544F425D4D7FE2EE* a1)
	{
		return ((::Class_1_EA471C1B20C1B83C*(*)(::PVOID, ::Class_1_544F425D4D7FE2EE*))((::PBYTE)hIl2Cpp + CLASS_1_F546382F4336378D_METHOD_1_9088016A4CFD4E97_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_5EBD02232B1B6972*>* Method_1_1BB0BE9D215D94D7(::Class_1_544F425D4D7FE2EE* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_5EBD02232B1B6972*>*(*)(::PVOID, ::Class_1_544F425D4D7FE2EE*))((::PBYTE)hIl2Cpp + CLASS_1_F546382F4336378D_METHOD_1_1BB0BE9D215D94D7_OFFSET))(this, a1);
	}
};
