#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2CDF619C23140440;
class Class_3_001D9EA49F6215B6;
namespace System { class String; }
namespace UnityEngine { class Coroutine; }

#define CLASS_1_7D93990153DD34ED_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18BD32F0)
#define CLASS_1_7D93990153DD34ED_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18BD1A50)
#define CLASS_1_7D93990153DD34ED_METHOD_1_414C8F92528E4746_OFFSET UNITYSDK_OFFSET(0x18BD2390)
#define CLASS_1_7D93990153DD34ED_METHOD_1_6AF8CC03883E6064_OFFSET UNITYSDK_OFFSET(0x18BD0BC0)
#define CLASS_1_7D93990153DD34ED_METHOD_1_7D5C8911419B1FA3_OFFSET UNITYSDK_OFFSET(0x18BD19D0)
#define CLASS_1_7D93990153DD34ED_METHOD_1_8DF47EF45ABD2A6C_OFFSET UNITYSDK_OFFSET(0x18BD23E0)
#define CLASS_1_7D93990153DD34ED_METHOD_1_92EF378E5C246C05_OFFSET UNITYSDK_OFFSET(0x18BD0EE0)
#define CLASS_1_7D93990153DD34ED_METHOD_1_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x18BD3640)
#define CLASS_1_7D93990153DD34ED_METHOD_1_C450A961450309C9_1_OFFSET UNITYSDK_OFFSET(0x18BD34D0)
#define CLASS_1_7D93990153DD34ED_METHOD_1_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x18BD3360)
#define CLASS_1_7D93990153DD34ED_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x18BD2C70)
#define CLASS_1_7D93990153DD34ED__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD0BB0)

inline static constexpr unsigned int Class_1_7D93990153DD34ED_TypeDefinitionIndex = 72884;

class Class_1_7D93990153DD34ED : public ::System::Object
{
public:
	::Class_3_001D9EA49F6215B6* Field_1_0; // 0x10
	::UnityEngine::Coroutine* Field_1_1; // 0x18
	::Class_1_2CDF619C23140440* Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x28
	::System::Int32 Field_1_4; // 0x2C

	::System::Void _ctor(::Class_1_2CDF619C23140440* a1, ::Class_3_001D9EA49F6215B6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_001D9EA49F6215B6*))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED__CTOR_OFFSET))(this, a1, a2);
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

	::System::Void Method_1_414C8F92528E4746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED_METHOD_1_414C8F92528E4746_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_8DF47EF45ABD2A6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED_METHOD_1_8DF47EF45ABD2A6C_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED_METHOD_1_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_C450A961450309C9_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED_METHOD_1_C450A961450309C9_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7D93990153DD34ED_METHOD_1_A27D06F9481FAFDB_OFFSET))(this, a1);
	}
};
