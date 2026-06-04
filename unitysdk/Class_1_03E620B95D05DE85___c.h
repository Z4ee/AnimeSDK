#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_03E620B95D05DE85;

#define CLASS_1_03E620B95D05DE85___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A77EE70)
#define CLASS_1_03E620B95D05DE85___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A77EEB0)
#define CLASS_1_03E620B95D05DE85___C___CCTOR_B__74_0_OFFSET UNITYSDK_OFFSET(0x1A77EEC0)

inline static constexpr unsigned int Class_1_03E620B95D05DE85___c_TypeDefinitionIndex = 25392;

class Class_1_03E620B95D05DE85___c : public ::System::Object
{
public:
	static ::Class_1_03E620B95D05DE85___c** StaticGet___9()
	{
		return (::Class_1_03E620B95D05DE85___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_03E620B95D05DE85___c_TypeDefinitionIndex)->GetStaticField(0x46460);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_03E620B95D05DE85___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03E620B95D05DE85___C__CTOR_OFFSET))(this);
	}

	::Class_1_03E620B95D05DE85* __cctor_b__74_0()
	{
		return ((::Class_1_03E620B95D05DE85*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03E620B95D05DE85___C___CCTOR_B__74_0_OFFSET))(this);
	}
};
