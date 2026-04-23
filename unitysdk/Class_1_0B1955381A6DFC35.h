#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_575;
class Class_1_8D88B5114427A0B2;
class Class_2_F71231D877170194;
namespace System { class String; }

#define CLASS_1_0B1955381A6DFC35_METHOD_1_2452E53230DD1B2E_OFFSET UNITYSDK_OFFSET(0x111B68E0)
#define CLASS_1_0B1955381A6DFC35__CCTOR_OFFSET UNITYSDK_OFFSET(0x111B6C50)
#define CLASS_1_0B1955381A6DFC35__CTOR_OFFSET UNITYSDK_OFFSET(0x111B6C40)

inline static constexpr unsigned int Class_1_0B1955381A6DFC35_TypeDefinitionIndex = 58284;

class Class_1_0B1955381A6DFC35 : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_575** StaticGet_Field_1_0()
	{
		return (::Class_0_16E4307DCC419505_575**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B1955381A6DFC35_TypeDefinitionIndex)->GetStaticField(0x198E0);
	}
	static ::Class_2_F71231D877170194** StaticGet_Field_1_1()
	{
		return (::Class_2_F71231D877170194**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B1955381A6DFC35_TypeDefinitionIndex)->GetStaticField(0x198E8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B1955381A6DFC35__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0B1955381A6DFC35__CCTOR_OFFSET))();
	}

	static ::Class_1_8D88B5114427A0B2* Method_1_2452E53230DD1B2E(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::Class_1_8D88B5114427A0B2*(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0B1955381A6DFC35_METHOD_1_2452E53230DD1B2E_OFFSET))(a1, a2);
	}
};
