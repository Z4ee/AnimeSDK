#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_83665B095F1535B5_12__CCTOR_OFFSET UNITYSDK_OFFSET(0x12E4A060)

inline static constexpr unsigned int Class_1_83665B095F1535B5_12_TypeDefinitionIndex = 69750;

class Class_1_83665B095F1535B5_12 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_83665B095F1535B5_12_TypeDefinitionIndex)->GetStaticField(0x10350);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_83665B095F1535B5_12__CCTOR_OFFSET))();
	}
};
