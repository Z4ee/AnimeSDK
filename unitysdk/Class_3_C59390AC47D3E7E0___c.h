#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_EA02B975BED3466B;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_C59390AC47D3E7E0___C_METHOD_1_6C4FFF58A8789279_OFFSET UNITYSDK_OFFSET(0x17E6C850)
#define CLASS_3_C59390AC47D3E7E0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E6C800)
#define CLASS_3_C59390AC47D3E7E0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E6C840)

inline static constexpr unsigned int Class_3_C59390AC47D3E7E0___c_TypeDefinitionIndex = 48327;

class Class_3_C59390AC47D3E7E0___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_EA02B975BED3466B*>** StaticGet___9__7_0()
	{
		return (::System::Action_1<::Class_3_EA02B975BED3466B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C59390AC47D3E7E0___c_TypeDefinitionIndex)->GetStaticField(0x3EBB0);
	}
	static ::Class_3_C59390AC47D3E7E0___c** StaticGet___9()
	{
		return (::Class_3_C59390AC47D3E7E0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C59390AC47D3E7E0___c_TypeDefinitionIndex)->GetStaticField(0x3EBB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C59390AC47D3E7E0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C59390AC47D3E7E0___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6C4FFF58A8789279(::Class_3_EA02B975BED3466B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_EA02B975BED3466B*))((::PBYTE)hIl2Cpp + CLASS_3_C59390AC47D3E7E0___C_METHOD_1_6C4FFF58A8789279_OFFSET))(this, a1);
	}
};
