#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_105C32866538BE74;

#define CLASS_1_1DF33654C491D2DF_METHOD_1_DF25C122A725DA91_OFFSET UNITYSDK_OFFSET(0x1D0E7D00)
#define CLASS_1_1DF33654C491D2DF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0E8640)
#define CLASS_1_1DF33654C491D2DF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0E7CF0)

inline static constexpr unsigned int Class_1_1DF33654C491D2DF_TypeDefinitionIndex = 41511;

class Class_1_1DF33654C491D2DF : public ::System::Object
{
public:
	static ::Class_1_1DF33654C491D2DF** StaticGet_Field_1_0()
	{
		return (::Class_1_1DF33654C491D2DF**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DF33654C491D2DF_TypeDefinitionIndex)->GetStaticField(0x4E240);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DF33654C491D2DF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1DF33654C491D2DF__CCTOR_OFFSET))();
	}

	::System::Object* Method_1_DF25C122A725DA91(::Class_1_105C32866538BE74* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::Class_1_105C32866538BE74*))((::PBYTE)hIl2Cpp + CLASS_1_1DF33654C491D2DF_METHOD_1_DF25C122A725DA91_OFFSET))(this, a1);
	}
};
