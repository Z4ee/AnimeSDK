#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_067D4200A77257AF;

#define CLASS_1_067D4200A77257AF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA407B0)
#define CLASS_1_067D4200A77257AF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA407E0)
#define CLASS_1_067D4200A77257AF___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1AA407F0)

inline static constexpr unsigned int Class_1_067D4200A77257AF___c_TypeDefinitionIndex = 25700;

class Class_1_067D4200A77257AF___c : public ::System::Object
{
public:
	static ::Class_1_067D4200A77257AF___c** StaticGet___9()
	{
		return (::Class_1_067D4200A77257AF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_067D4200A77257AF___c_TypeDefinitionIndex)->GetStaticField(0x6950);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_067D4200A77257AF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_067D4200A77257AF___C__CTOR_OFFSET))(this);
	}

	::Class_1_067D4200A77257AF* __cctor_b__43_0()
	{
		return ((::Class_1_067D4200A77257AF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_067D4200A77257AF___C___CCTOR_B__43_0_OFFSET))(this);
	}
};
