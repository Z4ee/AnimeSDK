#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_867B6CE75953535A_1;
class Class_3_D6E9A038FA23103A;
namespace System { class String; }
namespace UnityEngine { class Coroutine; }

#define CLASS_1_7D93990153DD34ED_EXECUTE_OFFSET UNITYSDK_OFFSET(0xD7D3C50)
#define CLASS_1_7D93990153DD34ED_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD7D25F0)
#define CLASS_1_7D93990153DD34ED_METHOD_1_0E00D903BD55E67C_OFFSET UNITYSDK_OFFSET(0xD7D1750)
#define CLASS_1_7D93990153DD34ED_METHOD_1_178812F674E8B05A_OFFSET UNITYSDK_OFFSET(0xD7D2EF0)
#define CLASS_1_7D93990153DD34ED_METHOD_1_47EDBC4CA1AB8BEE_OFFSET UNITYSDK_OFFSET(0xD7D2EA0)
#define CLASS_1_7D93990153DD34ED_METHOD_1_7D5C8911419B1FA3_OFFSET UNITYSDK_OFFSET(0xD7D2570)
#define CLASS_1_7D93990153DD34ED_METHOD_1_7D905CC30A55BF61_1_OFFSET UNITYSDK_OFFSET(0xD7D3E20)
#define CLASS_1_7D93990153DD34ED_METHOD_1_7D905CC30A55BF61_OFFSET UNITYSDK_OFFSET(0xD7D3CC0)
#define CLASS_1_7D93990153DD34ED_METHOD_1_C0FBE2EB5AC963BC_OFFSET UNITYSDK_OFFSET(0xD7D1A70)
#define CLASS_1_7D93990153DD34ED_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xD7D35E0)
#define CLASS_1_7D93990153DD34ED__CTOR_OFFSET UNITYSDK_OFFSET(0xD7D1740)

inline static constexpr unsigned int Class_1_7D93990153DD34ED_TypeDefinitionIndex = 62532;

class Class_1_7D93990153DD34ED : public ::System::Object
{
public:
	::Class_1_867B6CE75953535A_1* Field_1_0; // 0x10
	::Class_3_D6E9A038FA23103A* Field_1_1; // 0x18
	::UnityEngine::Coroutine* Field_1_4; // 0x20
	::System::Int32 Field_1_2; // 0x28
	::System::Single Field_1_3; // 0x2C

	::System::Void _ctor(::Class_1_867B6CE75953535A_1* a1, ::Class_3_D6E9A038FA23103A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A_1*, ::Class_3_D6E9A038FA23103A*))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0E00D903BD55E67C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED_METHOD_1_0E00D903BD55E67C_OFFSET))(this, a1);
	}

	::System::Void Method_1_C0FBE2EB5AC963BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED_METHOD_1_C0FBE2EB5AC963BC_OFFSET))(this);
	}

	::System::Void Method_1_7D5C8911419B1FA3(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED_METHOD_1_7D5C8911419B1FA3_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED_INITIALIZE_OFFSET))(this);
	}

	::System::Void Method_1_47EDBC4CA1AB8BEE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED_METHOD_1_47EDBC4CA1AB8BEE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_178812F674E8B05A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED_METHOD_1_178812F674E8B05A_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_7D905CC30A55BF61(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED_METHOD_1_7D905CC30A55BF61_OFFSET))(this, a1);
	}

	::System::Void Method_1_7D905CC30A55BF61_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED_METHOD_1_7D905CC30A55BF61_1_OFFSET))(this, a1);
	}
};
