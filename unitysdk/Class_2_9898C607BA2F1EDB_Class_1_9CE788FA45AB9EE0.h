#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4146D2C3F243C0E3.h"
#include "unitysdk/System/Object.h"

class Class_2_9898C607BA2F1EDB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9898C607BA2F1EDB_CLASS_1_9CE788FA45AB9EE0_METHOD_1_AB640961F167C1D2_OFFSET UNITYSDK_OFFSET(0x130B2690)
#define CLASS_2_9898C607BA2F1EDB_CLASS_1_9CE788FA45AB9EE0_METHOD_1_C9A3013DD208C696_OFFSET UNITYSDK_OFFSET(0x130B25A0)
#define CLASS_2_9898C607BA2F1EDB_CLASS_1_9CE788FA45AB9EE0__CTOR_OFFSET UNITYSDK_OFFSET(0x130B2590)

inline static constexpr unsigned int Class_2_9898C607BA2F1EDB_Class_1_9CE788FA45AB9EE0_TypeDefinitionIndex = 57504;

class Class_2_9898C607BA2F1EDB_Class_1_9CE788FA45AB9EE0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_4; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x18
	::Class_2_9898C607BA2F1EDB* Field_1_2; // 0x20
	::System::Action* Field_1_1; // 0x28
	::Enum_3_4146D2C3F243C0E3 Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9898C607BA2F1EDB_CLASS_1_9CE788FA45AB9EE0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C9A3013DD208C696()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9898C607BA2F1EDB_CLASS_1_9CE788FA45AB9EE0_METHOD_1_C9A3013DD208C696_OFFSET))(this);
	}

	::System::Boolean Method_1_AB640961F167C1D2(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9898C607BA2F1EDB_CLASS_1_9CE788FA45AB9EE0_METHOD_1_AB640961F167C1D2_OFFSET))(this, a1);
	}
};
