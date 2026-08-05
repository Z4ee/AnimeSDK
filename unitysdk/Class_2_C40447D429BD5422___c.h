#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_C40447D429BD5422___C_METHOD_1_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x17192220)
#define CLASS_2_C40447D429BD5422___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x171921D0)
#define CLASS_2_C40447D429BD5422___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17192210)

inline static constexpr unsigned int Class_2_C40447D429BD5422___c_TypeDefinitionIndex = 71458;

class Class_2_C40447D429BD5422___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__92_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C40447D429BD5422___c_TypeDefinitionIndex)->GetStaticField(0x48050);
	}
	static ::Class_2_C40447D429BD5422___c** StaticGet___9()
	{
		return (::Class_2_C40447D429BD5422___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C40447D429BD5422___c_TypeDefinitionIndex)->GetStaticField(0x48058);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C40447D429BD5422___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C40447D429BD5422___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C40447D429BD5422___C_METHOD_1_24B05D2E15A5C3C8_OFFSET))(this);
	}
};
