#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C320CF7265193ED8;

#define CLASS_1_C320CF7265193ED8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E639340)
#define CLASS_1_C320CF7265193ED8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E639380)
#define CLASS_1_C320CF7265193ED8___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E639390)

inline static constexpr unsigned int Class_1_C320CF7265193ED8___c_TypeDefinitionIndex = 32660;

class Class_1_C320CF7265193ED8___c : public ::System::Object
{
public:
	static ::Class_1_C320CF7265193ED8___c** StaticGet___9()
	{
		return (::Class_1_C320CF7265193ED8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C320CF7265193ED8___c_TypeDefinitionIndex)->GetStaticField(0x341D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C320CF7265193ED8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C320CF7265193ED8___C__CTOR_OFFSET))(this);
	}

	::Class_1_C320CF7265193ED8* __cctor_b__38_0()
	{
		return ((::Class_1_C320CF7265193ED8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C320CF7265193ED8___C___CCTOR_B__38_0_OFFSET))(this);
	}
};
