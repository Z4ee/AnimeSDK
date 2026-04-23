#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TutorialBlockType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_5B53AC518D6F8EE7_METHOD_1_3306F24AC967FE79_OFFSET UNITYSDK_OFFSET(0x117B76E0)
#define CLASS_1_5B53AC518D6F8EE7_METHOD_1_7B612B5D52B5CB3F_OFFSET UNITYSDK_OFFSET(0x117B7550)
#define CLASS_1_5B53AC518D6F8EE7_METHOD_1_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x117B7620)
#define CLASS_1_5B53AC518D6F8EE7__CTOR_OFFSET UNITYSDK_OFFSET(0x117B7610)

inline static constexpr unsigned int Class_1_5B53AC518D6F8EE7_TypeDefinitionIndex = 62909;

class Class_1_5B53AC518D6F8EE7 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B53AC518D6F8EE7__CTOR_OFFSET))(this);
	}

	static ::Class_1_5B53AC518D6F8EE7* Method_1_7B612B5D52B5CB3F(::RPG::Client::TutorialBlockType a1)
	{
		return ((::Class_1_5B53AC518D6F8EE7*(*)(::RPG::Client::TutorialBlockType))((::PBYTE)hIl2Cpp + CLASS_1_5B53AC518D6F8EE7_METHOD_1_7B612B5D52B5CB3F_OFFSET))(a1);
	}

	static ::Class_1_5B53AC518D6F8EE7* Method_1_B64C60973842FE45()
	{
		return ((::Class_1_5B53AC518D6F8EE7*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B53AC518D6F8EE7_METHOD_1_B64C60973842FE45_OFFSET))();
	}

	::System::Void Method_1_3306F24AC967FE79()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B53AC518D6F8EE7_METHOD_1_3306F24AC967FE79_OFFSET))(this);
	}
};
