#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_D2262573B320708B;

#define CLASS_3_D2262573B320708B___C_METHOD_1_63E22A79D2DA8C7B_OFFSET UNITYSDK_OFFSET(0x1BAF57C0)
#define CLASS_3_D2262573B320708B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BAF5770)
#define CLASS_3_D2262573B320708B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAF57B0)

inline static constexpr unsigned int Class_3_D2262573B320708B___c_TypeDefinitionIndex = 9362;

class Class_3_D2262573B320708B___c : public ::System::Object
{
public:
	static ::Class_3_D2262573B320708B___c** StaticGet___9()
	{
		return (::Class_3_D2262573B320708B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D2262573B320708B___c_TypeDefinitionIndex)->GetStaticField(0x7FC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D2262573B320708B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D2262573B320708B___C__CTOR_OFFSET))(this);
	}

	::Class_3_D2262573B320708B* Method_1_63E22A79D2DA8C7B()
	{
		return ((::Class_3_D2262573B320708B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D2262573B320708B___C_METHOD_1_63E22A79D2DA8C7B_OFFSET))(this);
	}
};
