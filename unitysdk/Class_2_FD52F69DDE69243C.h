#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4ED21A115C97704D.h"

namespace System { class String; }

#define CLASS_2_FD52F69DDE69243C_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xFB68170)
#define CLASS_2_FD52F69DDE69243C_METHOD_2_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0xFB68180)
#define CLASS_2_FD52F69DDE69243C_METHOD_2_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0xFB681A0)
#define CLASS_2_FD52F69DDE69243C_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xFB68160)
#define CLASS_2_FD52F69DDE69243C_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xFB68190)
#define CLASS_2_FD52F69DDE69243C_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xFB68150)
#define CLASS_2_FD52F69DDE69243C__CTOR_1_OFFSET UNITYSDK_OFFSET(0xFB680E0)
#define CLASS_2_FD52F69DDE69243C__CTOR_OFFSET UNITYSDK_OFFSET(0xFB68080)

inline static constexpr unsigned int Class_2_FD52F69DDE69243C_TypeDefinitionIndex = 49923;

class Class_2_FD52F69DDE69243C : public ::Class_1_4ED21A115C97704D
{
public:
	::System::String* Field_2_1; // 0x20
	::System::Boolean Field_2_2; // 0x28
	::System::Boolean Field_2_0; // 0x29

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD52F69DDE69243C__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::Boolean a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_FD52F69DDE69243C__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD52F69DDE69243C_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD52F69DDE69243C_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD52F69DDE69243C_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_2_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_FD52F69DDE69243C_METHOD_2_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD52F69DDE69243C_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FD52F69DDE69243C_METHOD_2_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}
};
