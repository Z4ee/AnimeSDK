#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F49CA2983DD8D8E6.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"

class Class_1_CB986F8DD1655D73;
class Class_1_DB457F2E821DD51D;
class Class_2_1DBE0E1023AFDBC5;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_CBC970029DEC1F95_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4D9820)
#define CLASS_2_CBC970029DEC1F95_METHOD_2_1874C360B49B2B3A_OFFSET UNITYSDK_OFFSET(0xA4D9B20)
#define CLASS_2_CBC970029DEC1F95_METHOD_2_1B9BCD64F419AAE9_OFFSET UNITYSDK_OFFSET(0xA4D9870)
#define CLASS_2_CBC970029DEC1F95_METHOD_2_C6B94F1176765669_OFFSET UNITYSDK_OFFSET(0xA4D98C0)
#define CLASS_2_CBC970029DEC1F95__CTOR_OFFSET UNITYSDK_OFFSET(0xA4D9810)

inline static constexpr unsigned int Class_2_CBC970029DEC1F95_TypeDefinitionIndex = 52247;

class Class_2_CBC970029DEC1F95 : public ::Class_1_F49CA2983DD8D8E6
{
public:
	::System::String* Field_2_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_2_1DBE0E1023AFDBC5* a2, ::Class_1_DB457F2E821DD51D* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_2_1DBE0E1023AFDBC5*, ::Class_1_DB457F2E821DD51D*))((::PBYTE)hIl2Cpp + CLASS_2_CBC970029DEC1F95__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CBC970029DEC1F95_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::AnimStateLogicType Method_2_1B9BCD64F419AAE9()
	{
		return ((::RPG::GameCore::AnimStateLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CBC970029DEC1F95_METHOD_2_1B9BCD64F419AAE9_OFFSET))(this);
	}

	::System::Void Method_2_C6B94F1176765669(::RPG::GameCore::AnimStateLogicType a1, ::Class_1_CB986F8DD1655D73* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType, ::Class_1_CB986F8DD1655D73*))((::PBYTE)hIl2Cpp + CLASS_2_CBC970029DEC1F95_METHOD_2_C6B94F1176765669_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1874C360B49B2B3A(::RPG::GameCore::AnimStateLogicType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType))((::PBYTE)hIl2Cpp + CLASS_2_CBC970029DEC1F95_METHOD_2_1874C360B49B2B3A_OFFSET))(this, a1);
	}
};
