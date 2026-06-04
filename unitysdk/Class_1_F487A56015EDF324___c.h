#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F487A56015EDF324;

#define CLASS_1_F487A56015EDF324___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A867F20)
#define CLASS_1_F487A56015EDF324___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A867F60)
#define CLASS_1_F487A56015EDF324___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1A867F70)

inline static constexpr unsigned int Class_1_F487A56015EDF324___c_TypeDefinitionIndex = 27564;

class Class_1_F487A56015EDF324___c : public ::System::Object
{
public:
	static ::Class_1_F487A56015EDF324___c** StaticGet___9()
	{
		return (::Class_1_F487A56015EDF324___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F487A56015EDF324___c_TypeDefinitionIndex)->GetStaticField(0x539B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324___C__CTOR_OFFSET))(this);
	}

	::Class_1_F487A56015EDF324* __cctor_b__43_0()
	{
		return ((::Class_1_F487A56015EDF324*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324___C___CCTOR_B__43_0_OFFSET))(this);
	}
};
