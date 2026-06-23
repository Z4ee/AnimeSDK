#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_3.h"
#include "unitysdk/System/Object.h"

#define CLASS_3_AE02BC8285203464_28___C_METHOD_1_4C706B6019B13D4A_OFFSET UNITYSDK_OFFSET(0x19AA7AA0)
#define CLASS_3_AE02BC8285203464_28___C_METHOD_1_7439D2F0DCA77B50_OFFSET UNITYSDK_OFFSET(0x19AA7AB0)
#define CLASS_3_AE02BC8285203464_28___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19AA7A50)
#define CLASS_3_AE02BC8285203464_28___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19AA7A90)

inline static constexpr unsigned int Class_3_AE02BC8285203464_28___c_TypeDefinitionIndex = 25879;

class Class_3_AE02BC8285203464_28___c : public ::System::Object
{
public:
	static ::Class_3_AE02BC8285203464_28___c** StaticGet___9()
	{
		return (::Class_3_AE02BC8285203464_28___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_AE02BC8285203464_28___c_TypeDefinitionIndex)->GetStaticField(0x13FF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_AE02BC8285203464_28___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AE02BC8285203464_28___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_4C706B6019B13D4A(::Enum_3_0A3761FE34514D6C_3 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_3))((::PBYTE)hIl2Cpp + CLASS_3_AE02BC8285203464_28___C_METHOD_1_4C706B6019B13D4A_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_3 Method_1_7439D2F0DCA77B50(::System::Int32 a1)
	{
		return ((::Enum_3_0A3761FE34514D6C_3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_AE02BC8285203464_28___C_METHOD_1_7439D2F0DCA77B50_OFFSET))(this, a1);
	}
};
