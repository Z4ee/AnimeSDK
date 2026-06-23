#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6B62062C66B4EF65_METHOD_1_74CBB463271664A3_1_OFFSET UNITYSDK_OFFSET(0x137AFC50)
#define CLASS_1_6B62062C66B4EF65_METHOD_1_74CBB463271664A3_OFFSET UNITYSDK_OFFSET(0x137AFB20)
#define CLASS_1_6B62062C66B4EF65_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x137AFD80)
#define CLASS_1_6B62062C66B4EF65_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x137AFB10)
#define CLASS_1_6B62062C66B4EF65__CCTOR_OFFSET UNITYSDK_OFFSET(0x137AFB00)

inline static constexpr unsigned int Class_1_6B62062C66B4EF65_TypeDefinitionIndex = 64740;

class Class_1_6B62062C66B4EF65 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B62062C66B4EF65_TypeDefinitionIndex)->GetStaticField(0xCA00);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B62062C66B4EF65_TypeDefinitionIndex)->GetStaticField(0xCA01);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B62062C66B4EF65__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B62062C66B4EF65_METHOD_1_F0088C88851A7DFB_OFFSET))();
	}

	static ::System::Void Method_1_74CBB463271664A3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6B62062C66B4EF65_METHOD_1_74CBB463271664A3_OFFSET))(a1);
	}

	static ::System::Void Method_1_74CBB463271664A3_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6B62062C66B4EF65_METHOD_1_74CBB463271664A3_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B62062C66B4EF65_METHOD_1_F0088C88851A7DFB_1_OFFSET))();
	}
};
