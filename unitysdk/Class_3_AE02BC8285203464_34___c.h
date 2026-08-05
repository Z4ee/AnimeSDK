#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_1.h"
#include "unitysdk/System/Object.h"

#define CLASS_3_AE02BC8285203464_34___C_METHOD_1_4C706B6019B13D4A_OFFSET UNITYSDK_OFFSET(0x1A48CD90)
#define CLASS_3_AE02BC8285203464_34___C_METHOD_1_7439D2F0DCA77B50_OFFSET UNITYSDK_OFFSET(0x1A48CDA0)
#define CLASS_3_AE02BC8285203464_34___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A48CD40)
#define CLASS_3_AE02BC8285203464_34___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A48CD80)

inline static constexpr unsigned int Class_3_AE02BC8285203464_34___c_TypeDefinitionIndex = 26426;

class Class_3_AE02BC8285203464_34___c : public ::System::Object
{
public:
	static ::Class_3_AE02BC8285203464_34___c** StaticGet___9()
	{
		return (::Class_3_AE02BC8285203464_34___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_AE02BC8285203464_34___c_TypeDefinitionIndex)->GetStaticField(0x1ADD0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_AE02BC8285203464_34___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AE02BC8285203464_34___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_4C706B6019B13D4A(::Enum_3_0A3761FE34514D6C_1 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_1))((::PBYTE)hIl2Cpp + CLASS_3_AE02BC8285203464_34___C_METHOD_1_4C706B6019B13D4A_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_1 Method_1_7439D2F0DCA77B50(::System::Int32 a1)
	{
		return ((::Enum_3_0A3761FE34514D6C_1(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_AE02BC8285203464_34___C_METHOD_1_7439D2F0DCA77B50_OFFSET))(this, a1);
	}
};
