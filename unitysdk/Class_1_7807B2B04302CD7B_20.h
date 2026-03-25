#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_7807B2B04302CD7B_20__CCTOR_OFFSET UNITYSDK_OFFSET(0x8CE44E0)

inline static constexpr unsigned int Class_1_7807B2B04302CD7B_20_TypeDefinitionIndex = 39942;

class Class_1_7807B2B04302CD7B_20 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7807B2B04302CD7B_20_TypeDefinitionIndex)->GetStaticField(0x4EB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7807B2B04302CD7B_20__CCTOR_OFFSET))();
	}
};
