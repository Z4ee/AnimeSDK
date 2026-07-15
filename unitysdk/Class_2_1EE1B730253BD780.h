#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1FB256EC3633CF9E.h"

#define CLASS_2_1EE1B730253BD780_METHOD_2_CEA32FF190776922_OFFSET UNITYSDK_OFFSET(0x17F8B7A0)
#define CLASS_2_1EE1B730253BD780__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F8BB50)
#define CLASS_2_1EE1B730253BD780__CTOR_OFFSET UNITYSDK_OFFSET(0x17F8BB40)

inline static constexpr unsigned int Class_2_1EE1B730253BD780_TypeDefinitionIndex = 74049;

class Class_2_1EE1B730253BD780 : public ::Class_1_1FB256EC3633CF9E
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_1EE1B730253BD780_TypeDefinitionIndex)->GetStaticField(0xB780);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1EE1B730253BD780__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1EE1B730253BD780__CCTOR_OFFSET))();
	}

	::System::Void Method_2_CEA32FF190776922()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1EE1B730253BD780_METHOD_2_CEA32FF190776922_OFFSET))(this);
	}
};
