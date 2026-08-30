#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_20A5FC2DE45BF4AF;

#define CLASS_1_20A5FC2DE45BF4AF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0FA370)
#define CLASS_1_20A5FC2DE45BF4AF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0FA3B0)
#define CLASS_1_20A5FC2DE45BF4AF___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E0FA3C0)

inline static constexpr unsigned int Class_1_20A5FC2DE45BF4AF___c_TypeDefinitionIndex = 28954;

class Class_1_20A5FC2DE45BF4AF___c : public ::System::Object
{
public:
	static ::Class_1_20A5FC2DE45BF4AF___c** StaticGet___9()
	{
		return (::Class_1_20A5FC2DE45BF4AF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_20A5FC2DE45BF4AF___c_TypeDefinitionIndex)->GetStaticField(0x3DE60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_20A5FC2DE45BF4AF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A5FC2DE45BF4AF___C__CTOR_OFFSET))(this);
	}

	::Class_1_20A5FC2DE45BF4AF* __cctor_b__43_0()
	{
		return ((::Class_1_20A5FC2DE45BF4AF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A5FC2DE45BF4AF___C___CCTOR_B__43_0_OFFSET))(this);
	}
};
