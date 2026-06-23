#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_790B79B02D84C247.h"
#include "unitysdk/System/Object.h"

#define CLASS_3_A799D03044D6625D___C_METHOD_1_4C706B6019B13D4A_OFFSET UNITYSDK_OFFSET(0x19C988C0)
#define CLASS_3_A799D03044D6625D___C_METHOD_1_7439D2F0DCA77B50_OFFSET UNITYSDK_OFFSET(0x19C988B0)
#define CLASS_3_A799D03044D6625D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C98860)
#define CLASS_3_A799D03044D6625D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19C988A0)

inline static constexpr unsigned int Class_3_A799D03044D6625D___c_TypeDefinitionIndex = 23606;

class Class_3_A799D03044D6625D___c : public ::System::Object
{
public:
	static ::Class_3_A799D03044D6625D___c** StaticGet___9()
	{
		return (::Class_3_A799D03044D6625D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A799D03044D6625D___c_TypeDefinitionIndex)->GetStaticField(0x11270);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A799D03044D6625D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A799D03044D6625D___C__CTOR_OFFSET))(this);
	}

	::Enum_3_790B79B02D84C247 Method_1_7439D2F0DCA77B50(::System::Int32 a1)
	{
		return ((::Enum_3_790B79B02D84C247(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_A799D03044D6625D___C_METHOD_1_7439D2F0DCA77B50_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_4C706B6019B13D4A(::Enum_3_790B79B02D84C247 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_790B79B02D84C247))((::PBYTE)hIl2Cpp + CLASS_3_A799D03044D6625D___C_METHOD_1_4C706B6019B13D4A_OFFSET))(this, a1);
	}
};
