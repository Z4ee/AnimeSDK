#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_83665B095F1535B5_16__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2BDAB0)

inline static constexpr unsigned int Class_1_83665B095F1535B5_16_TypeDefinitionIndex = 92695;

class Class_1_83665B095F1535B5_16 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_83665B095F1535B5_16_TypeDefinitionIndex)->GetStaticField(0x13100);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_83665B095F1535B5_16__CCTOR_OFFSET))();
	}
};
