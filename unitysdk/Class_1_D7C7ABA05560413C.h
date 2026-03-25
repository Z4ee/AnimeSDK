#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6AE08EF87FF0FFCC;
class Class_1_ECA8DD13FC77FF77;
class Class_1_EFFEB9C331210706;
namespace System { class Type; }

#define CLASS_1_D7C7ABA05560413C_METHOD_1_3B10EBB5408EF02E_OFFSET UNITYSDK_OFFSET(0x11480AA0)
#define CLASS_1_D7C7ABA05560413C_METHOD_1_3EACA5870CDCB012_OFFSET UNITYSDK_OFFSET(0x11480A00)
#define CLASS_1_D7C7ABA05560413C_METHOD_1_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x11480990)
#define CLASS_1_D7C7ABA05560413C__CTOR_OFFSET UNITYSDK_OFFSET(0x11480A10)

inline static constexpr unsigned int Class_1_D7C7ABA05560413C_TypeDefinitionIndex = 50867;

class Class_1_D7C7ABA05560413C : public ::System::Object
{
public:
	::Class_1_ECA8DD13FC77FF77* Field_1_1; // 0x10
	::Class_1_EFFEB9C331210706* Field_1_0; // 0x18

	::System::Void _ctor(::Class_1_EFFEB9C331210706* a1, ::Class_1_ECA8DD13FC77FF77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EFFEB9C331210706*, ::Class_1_ECA8DD13FC77FF77*))((::PBYTE)hIl2Cpp + CLASS_1_D7C7ABA05560413C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Type* Method_1_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7C7ABA05560413C_METHOD_1_4FB5F56430673EA6_OFFSET))(this);
	}

	::Il2CppArray<::System::Type*>* Method_1_3EACA5870CDCB012()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7C7ABA05560413C_METHOD_1_3EACA5870CDCB012_OFFSET))(this);
	}

	::System::Void Method_1_3B10EBB5408EF02E(::Class_1_6AE08EF87FF0FFCC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6AE08EF87FF0FFCC*))((::PBYTE)hIl2Cpp + CLASS_1_D7C7ABA05560413C_METHOD_1_3B10EBB5408EF02E_OFFSET))(this, a1);
	}
};
