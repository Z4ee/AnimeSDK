#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_83665B095F1535B5_11__CCTOR_OFFSET UNITYSDK_OFFSET(0x11ADEDA0)
#define CLASS_1_83665B095F1535B5_11__CTOR_OFFSET UNITYSDK_OFFSET(0x11ADED90)

inline static constexpr unsigned int Class_1_83665B095F1535B5_11_TypeDefinitionIndex = 63120;

class Class_1_83665B095F1535B5_11 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_83665B095F1535B5_11_TypeDefinitionIndex)->GetStaticField(0x130F0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83665B095F1535B5_11__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_83665B095F1535B5_11__CCTOR_OFFSET))();
	}
};
