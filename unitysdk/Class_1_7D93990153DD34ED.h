#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2CDF619C23140440;
class Class_3_D6E9A038FA23103A;
namespace System { class String; }
namespace UnityEngine { class Coroutine; }

#define CLASS_1_7D93990153DD34ED_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB28A040)
#define CLASS_1_7D93990153DD34ED_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB288970)
#define CLASS_1_7D93990153DD34ED_METHOD_1_178812F674E8B05A_OFFSET UNITYSDK_OFFSET(0xB2892E0)
#define CLASS_1_7D93990153DD34ED_METHOD_1_47EDBC4CA1AB8BEE_OFFSET UNITYSDK_OFFSET(0xB289290)
#define CLASS_1_7D93990153DD34ED_METHOD_1_6AF8CC03883E6064_OFFSET UNITYSDK_OFFSET(0xB287AE0)
#define CLASS_1_7D93990153DD34ED_METHOD_1_7D5C8911419B1FA3_OFFSET UNITYSDK_OFFSET(0xB2888F0)
#define CLASS_1_7D93990153DD34ED_METHOD_1_7D905CC30A55BF61_1_OFFSET UNITYSDK_OFFSET(0xB28A210)
#define CLASS_1_7D93990153DD34ED_METHOD_1_7D905CC30A55BF61_OFFSET UNITYSDK_OFFSET(0xB28A0B0)
#define CLASS_1_7D93990153DD34ED_METHOD_1_92EF378E5C246C05_OFFSET UNITYSDK_OFFSET(0xB287E00)
#define CLASS_1_7D93990153DD34ED_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB2899D0)
#define CLASS_1_7D93990153DD34ED__CTOR_OFFSET UNITYSDK_OFFSET(0xB287AD0)

inline static constexpr unsigned int Class_1_7D93990153DD34ED_TypeDefinitionIndex = 71359;

class Class_1_7D93990153DD34ED : public ::System::Object
{
public:
	::Class_3_D6E9A038FA23103A* Field_1_0; // 0x10
	::Class_1_2CDF619C23140440* Field_1_1; // 0x18
	::UnityEngine::Coroutine* Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x28
	::System::Single Field_1_4; // 0x2C

	::System::Void _ctor(::Class_1_2CDF619C23140440* a1, ::Class_3_D6E9A038FA23103A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_D6E9A038FA23103A*))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6AF8CC03883E6064(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED_METHOD_1_6AF8CC03883E6064_OFFSET))(this, a1);
	}

	::System::Void Method_1_92EF378E5C246C05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED_METHOD_1_92EF378E5C246C05_OFFSET))(this);
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
