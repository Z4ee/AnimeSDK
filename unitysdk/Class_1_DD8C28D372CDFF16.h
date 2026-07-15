#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_DD8C28D372CDFF16__CCTOR_OFFSET UNITYSDK_OFFSET(0x154BF8F0)

inline static constexpr unsigned int Class_1_DD8C28D372CDFF16_TypeDefinitionIndex = 6745;

class Class_1_DD8C28D372CDFF16 : public ::System::Object
{
public:
	static ::System::Object** StaticGet_Field_1_0()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DD8C28D372CDFF16_TypeDefinitionIndex)->GetStaticField(0x3FE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DD8C28D372CDFF16__CCTOR_OFFSET))();
	}
};
