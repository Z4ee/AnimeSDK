#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
#include "unitysdk/System/Object.h"

class Class_1_CB986F8DD1655D73;
class Class_1_DB457F2E821DD51D;
class Class_2_1DBE0E1023AFDBC5;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_F49CA2983DD8D8E6_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x143AB0A0)
#define CLASS_1_F49CA2983DD8D8E6_METHOD_1_CF1FD9261C8E9D84_OFFSET UNITYSDK_OFFSET(0x143AB100)
#define CLASS_1_F49CA2983DD8D8E6_METHOD_1_D70F885C74F01CC8_OFFSET UNITYSDK_OFFSET(0x143AB050)
#define CLASS_1_F49CA2983DD8D8E6__CTOR_OFFSET UNITYSDK_OFFSET(0x143AB040)

inline static constexpr unsigned int Class_1_F49CA2983DD8D8E6_TypeDefinitionIndex = 52248;

class Class_1_F49CA2983DD8D8E6 : public ::System::Object
{
public:
	::Class_2_1DBE0E1023AFDBC5* Field_1_0; // 0x10
	::Class_1_CB986F8DD1655D73* Field_1_1; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::Class_1_DB457F2E821DD51D* Field_1_3; // 0x28

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_2_1DBE0E1023AFDBC5* a2, ::Class_1_DB457F2E821DD51D* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_2_1DBE0E1023AFDBC5*, ::Class_1_DB457F2E821DD51D*))((::PBYTE)hIl2Cpp + CLASS_1_F49CA2983DD8D8E6__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D70F885C74F01CC8(::System::String* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F49CA2983DD8D8E6_METHOD_1_D70F885C74F01CC8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F49CA2983DD8D8E6_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_CF1FD9261C8E9D84(::Class_1_CB986F8DD1655D73* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CB986F8DD1655D73*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F49CA2983DD8D8E6_METHOD_1_CF1FD9261C8E9D84_OFFSET))(this, a1, a2);
	}
};
