#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_C6F51BBF3F52709A_1_METHOD_3_56AA6EAE795B6969_OFFSET UNITYSDK_OFFSET(0x1C94A4A0)
#define CLASS_3_C6F51BBF3F52709A_1_METHOD_3_70D89F22B6EB766C_OFFSET UNITYSDK_OFFSET(0x1C94A4F0)
#define CLASS_3_C6F51BBF3F52709A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C94A4E0)

inline static constexpr unsigned int Class_3_C6F51BBF3F52709A_1_TypeDefinitionIndex = 23460;

class Class_3_C6F51BBF3F52709A_1 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Single PAPLHBDJLMM; // 0x18
	::System::Boolean EKGDOELGLFK; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C6F51BBF3F52709A_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_56AA6EAE795B6969(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C6F51BBF3F52709A_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C6F51BBF3F52709A_1*&))((::PBYTE)hIl2Cpp + CLASS_3_C6F51BBF3F52709A_1_METHOD_3_56AA6EAE795B6969_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_70D89F22B6EB766C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C6F51BBF3F52709A_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C6F51BBF3F52709A_1*))((::PBYTE)hIl2Cpp + CLASS_3_C6F51BBF3F52709A_1_METHOD_3_70D89F22B6EB766C_OFFSET))(a1, a2);
	}
};
