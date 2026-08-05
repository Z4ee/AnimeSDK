#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_587B6B5C051AB299.h"
#include "unitysdk/System/Object.h"

#define CLASS_3_3529FD927F4CDBA6___C_METHOD_1_4C706B6019B13D4A_OFFSET UNITYSDK_OFFSET(0x1A80A4D0)
#define CLASS_3_3529FD927F4CDBA6___C_METHOD_1_7439D2F0DCA77B50_OFFSET UNITYSDK_OFFSET(0x1A80A4E0)
#define CLASS_3_3529FD927F4CDBA6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A80A480)
#define CLASS_3_3529FD927F4CDBA6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A80A4C0)

inline static constexpr unsigned int Class_3_3529FD927F4CDBA6___c_TypeDefinitionIndex = 24887;

class Class_3_3529FD927F4CDBA6___c : public ::System::Object
{
public:
	static ::Class_3_3529FD927F4CDBA6___c** StaticGet___9()
	{
		return (::Class_3_3529FD927F4CDBA6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_3529FD927F4CDBA6___c_TypeDefinitionIndex)->GetStaticField(0x169F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3529FD927F4CDBA6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3529FD927F4CDBA6___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_4C706B6019B13D4A(::Enum_3_587B6B5C051AB299 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_587B6B5C051AB299))((::PBYTE)hIl2Cpp + CLASS_3_3529FD927F4CDBA6___C_METHOD_1_4C706B6019B13D4A_OFFSET))(this, a1);
	}

	::Enum_3_587B6B5C051AB299 Method_1_7439D2F0DCA77B50(::System::Int32 a1)
	{
		return ((::Enum_3_587B6B5C051AB299(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3529FD927F4CDBA6___C_METHOD_1_7439D2F0DCA77B50_OFFSET))(this, a1);
	}
};
