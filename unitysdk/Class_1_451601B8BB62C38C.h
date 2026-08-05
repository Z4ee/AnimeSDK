#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_451601B8BB62C38C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15599BD0)

inline static constexpr unsigned int Class_1_451601B8BB62C38C_TypeDefinitionIndex = 83541;

class Class_1_451601B8BB62C38C : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_451601B8BB62C38C_TypeDefinitionIndex)->GetStaticField(0xD640);
	}
	// static const ::System::Int32 Field_1_0 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x6; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_451601B8BB62C38C__CCTOR_OFFSET))();
	}
};
