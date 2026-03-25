#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_2_AD939B577414942F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x117A0D50)
#define CLASS_2_AD939B577414942F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x117A0D90)

inline static constexpr unsigned int Class_2_AD939B577414942F___c_TypeDefinitionIndex = 61027;

class Class_2_AD939B577414942F___c : public ::System::Object
{
public:
	static ::Class_2_AD939B577414942F___c** StaticGet___9()
	{
		return (::Class_2_AD939B577414942F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AD939B577414942F___c_TypeDefinitionIndex)->GetStaticField(0x45020);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_AD939B577414942F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD939B577414942F___C__CTOR_OFFSET))(this);
	}
};
