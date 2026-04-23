#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6362CD83CDC8DC0E__CCTOR_OFFSET UNITYSDK_OFFSET(0x191EEA50)

inline static constexpr unsigned int Class_1_6362CD83CDC8DC0E_TypeDefinitionIndex = 8876;

class Class_1_6362CD83CDC8DC0E : public ::System::Object
{
public:
	static ::System::Object** StaticGet_Field_1_0()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6362CD83CDC8DC0E_TypeDefinitionIndex)->GetStaticField(0x3DDB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6362CD83CDC8DC0E__CCTOR_OFFSET))();
	}
};
