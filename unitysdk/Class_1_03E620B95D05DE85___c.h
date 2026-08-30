#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_03E620B95D05DE85;

#define CLASS_1_03E620B95D05DE85___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E945720)
#define CLASS_1_03E620B95D05DE85___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E945760)
#define CLASS_1_03E620B95D05DE85___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1E945770)

inline static constexpr unsigned int Class_1_03E620B95D05DE85___c_TypeDefinitionIndex = 28601;

class Class_1_03E620B95D05DE85___c : public ::System::Object
{
public:
	static ::Class_1_03E620B95D05DE85___c** StaticGet___9()
	{
		return (::Class_1_03E620B95D05DE85___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_03E620B95D05DE85___c_TypeDefinitionIndex)->GetStaticField(0x44F70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_03E620B95D05DE85___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03E620B95D05DE85___C__CTOR_OFFSET))(this);
	}

	::Class_1_03E620B95D05DE85* __cctor_b__58_0()
	{
		return ((::Class_1_03E620B95D05DE85*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03E620B95D05DE85___C___CCTOR_B__58_0_OFFSET))(this);
	}
};
