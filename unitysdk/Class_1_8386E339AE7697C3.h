#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_8386E339AE7697C3_METHOD_1_34DA542281C267E6_OFFSET UNITYSDK_OFFSET(0x133ED740)
#define CLASS_1_8386E339AE7697C3_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0x133ED6D0)
#define CLASS_1_8386E339AE7697C3__CCTOR_OFFSET UNITYSDK_OFFSET(0x133ED6C0)
#define CLASS_1_8386E339AE7697C3__CTOR_OFFSET UNITYSDK_OFFSET(0x133ED6B0)

inline static constexpr unsigned int Class_1_8386E339AE7697C3_TypeDefinitionIndex = 44149;

class Class_1_8386E339AE7697C3 : public ::System::Object
{
public:
	static ::Class_1_8386E339AE7697C3** StaticGet_Field_1_0()
	{
		return (::Class_1_8386E339AE7697C3**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8386E339AE7697C3_TypeDefinitionIndex)->GetStaticField(0x482E0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8386E339AE7697C3__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8386E339AE7697C3__CCTOR_OFFSET))();
	}

	static ::Class_1_8386E339AE7697C3* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_8386E339AE7697C3*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8386E339AE7697C3_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}

	::System::Boolean Method_1_34DA542281C267E6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8386E339AE7697C3_METHOD_1_34DA542281C267E6_OFFSET))(this);
	}
};
