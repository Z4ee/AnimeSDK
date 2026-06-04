#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1FB256EC3633CF9E.h"

#define CLASS_2_1EE1B730253BD780_1_METHOD_2_CEA32FF190776922_OFFSET UNITYSDK_OFFSET(0xA6B0F40)
#define CLASS_2_1EE1B730253BD780_1__CCTOR_OFFSET UNITYSDK_OFFSET(0xA6B12F0)
#define CLASS_2_1EE1B730253BD780_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA6B12E0)

inline static constexpr unsigned int Class_2_1EE1B730253BD780_1_TypeDefinitionIndex = 72524;

class Class_2_1EE1B730253BD780_1 : public ::Class_1_1FB256EC3633CF9E
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_1EE1B730253BD780_1_TypeDefinitionIndex)->GetStaticField(0xD080);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1EE1B730253BD780_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1EE1B730253BD780_1__CCTOR_OFFSET))();
	}

	::System::Void Method_2_CEA32FF190776922()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1EE1B730253BD780_1_METHOD_2_CEA32FF190776922_OFFSET))(this);
	}
};
