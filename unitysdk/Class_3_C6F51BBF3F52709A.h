#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_C6F51BBF3F52709A_METHOD_3_56AA6EAE795B6969_OFFSET UNITYSDK_OFFSET(0x1CB869C0)
#define CLASS_3_C6F51BBF3F52709A_METHOD_3_70D89F22B6EB766C_OFFSET UNITYSDK_OFFSET(0x1CB86A00)
#define CLASS_3_C6F51BBF3F52709A__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB869F0)

inline static constexpr unsigned int Class_3_C6F51BBF3F52709A_TypeDefinitionIndex = 10225;

class Class_3_C6F51BBF3F52709A : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Boolean DMKJAJLNEBK; // 0x18
	::System::Single EKAALNAOCJL; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C6F51BBF3F52709A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_56AA6EAE795B6969(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C6F51BBF3F52709A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C6F51BBF3F52709A*&))((::PBYTE)hIl2Cpp + CLASS_3_C6F51BBF3F52709A_METHOD_3_56AA6EAE795B6969_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_70D89F22B6EB766C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C6F51BBF3F52709A* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C6F51BBF3F52709A*))((::PBYTE)hIl2Cpp + CLASS_3_C6F51BBF3F52709A_METHOD_3_70D89F22B6EB766C_OFFSET))(a1, a2);
	}
};
