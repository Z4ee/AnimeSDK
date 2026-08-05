#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_524;

#define CLASS_1_4CEFAE80A67E8DA1_METHOD_1_5AAEF3CEBE65A5B5_OFFSET UNITYSDK_OFFSET(0x14E7BB90)
#define CLASS_1_4CEFAE80A67E8DA1_METHOD_1_E20365345CC9C440_OFFSET UNITYSDK_OFFSET(0x14E7BB30)
#define CLASS_1_4CEFAE80A67E8DA1__CCTOR_OFFSET UNITYSDK_OFFSET(0x14E7BAD0)

inline static constexpr unsigned int Class_1_4CEFAE80A67E8DA1_TypeDefinitionIndex = 68231;

class Class_1_4CEFAE80A67E8DA1 : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_524** StaticGet_Field_1_0()
	{
		return (::Class_0_16E4307DCC419505_524**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4CEFAE80A67E8DA1_TypeDefinitionIndex)->GetStaticField(0x382A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4CEFAE80A67E8DA1__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_524* Method_1_E20365345CC9C440()
	{
		return ((::Class_0_16E4307DCC419505_524*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4CEFAE80A67E8DA1_METHOD_1_E20365345CC9C440_OFFSET))();
	}

	static ::System::Void Method_1_5AAEF3CEBE65A5B5(::Class_0_16E4307DCC419505_524* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_524*))((::PBYTE)hIl2Cpp + CLASS_1_4CEFAE80A67E8DA1_METHOD_1_5AAEF3CEBE65A5B5_OFFSET))(a1);
	}
};
