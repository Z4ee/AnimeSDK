#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2AC9AD1E6333334B;

#define CLASS_1_2AC9AD1E6333334B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A830870)
#define CLASS_1_2AC9AD1E6333334B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8308B0)
#define CLASS_1_2AC9AD1E6333334B___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1A8308C0)

inline static constexpr unsigned int Class_1_2AC9AD1E6333334B___c_TypeDefinitionIndex = 24860;

class Class_1_2AC9AD1E6333334B___c : public ::System::Object
{
public:
	static ::Class_1_2AC9AD1E6333334B___c** StaticGet___9()
	{
		return (::Class_1_2AC9AD1E6333334B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AC9AD1E6333334B___c_TypeDefinitionIndex)->GetStaticField(0x51780);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2AC9AD1E6333334B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AC9AD1E6333334B___C__CTOR_OFFSET))(this);
	}

	::Class_1_2AC9AD1E6333334B* __cctor_b__43_0()
	{
		return ((::Class_1_2AC9AD1E6333334B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AC9AD1E6333334B___C___CCTOR_B__43_0_OFFSET))(this);
	}
};
