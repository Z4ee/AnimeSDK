#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8E32CC045D19B25E;

#define CLASS_1_8E32CC045D19B25E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BFCD580)
#define CLASS_1_8E32CC045D19B25E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFCD5C0)
#define CLASS_1_8E32CC045D19B25E___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1BFCD5D0)

inline static constexpr unsigned int Class_1_8E32CC045D19B25E___c_TypeDefinitionIndex = 31929;

class Class_1_8E32CC045D19B25E___c : public ::System::Object
{
public:
	static ::Class_1_8E32CC045D19B25E___c** StaticGet___9()
	{
		return (::Class_1_8E32CC045D19B25E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E32CC045D19B25E___c_TypeDefinitionIndex)->GetStaticField(0x28E70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E32CC045D19B25E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E32CC045D19B25E___C__CTOR_OFFSET))(this);
	}

	::Class_1_8E32CC045D19B25E* __cctor_b__38_0()
	{
		return ((::Class_1_8E32CC045D19B25E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E32CC045D19B25E___C___CCTOR_B__38_0_OFFSET))(this);
	}
};
