#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F49CA2983DD8D8E6.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"

class Class_1_216AB6886C5F1D96;
class Class_1_CB986F8DD1655D73;
class Class_1_DB457F2E821DD51D;
class Class_2_2461A19B320A03F9;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_4ABDF779AB81694A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18EC4490)
#define CLASS_2_4ABDF779AB81694A_METHOD_2_1B9BCD64F419AAE9_OFFSET UNITYSDK_OFFSET(0x18EC44D0)
#define CLASS_2_4ABDF779AB81694A_METHOD_2_4E30FEEB9D0D4E0D_OFFSET UNITYSDK_OFFSET(0x18EC4700)
#define CLASS_2_4ABDF779AB81694A_METHOD_2_60B1DD8792AE7B9B_OFFSET UNITYSDK_OFFSET(0x18EC4520)
#define CLASS_2_4ABDF779AB81694A__CTOR_OFFSET UNITYSDK_OFFSET(0x18EC4380)

inline static constexpr unsigned int Class_2_4ABDF779AB81694A_TypeDefinitionIndex = 53403;

class Class_2_4ABDF779AB81694A : public ::Class_1_F49CA2983DD8D8E6
{
public:
	::Class_1_216AB6886C5F1D96* Field_2_0; // 0x30
	::System::Int32 Field_2_1; // 0x38

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_2_2461A19B320A03F9* a2, ::Class_1_DB457F2E821DD51D* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_2_2461A19B320A03F9*, ::Class_1_DB457F2E821DD51D*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4ABDF779AB81694A__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ABDF779AB81694A_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::AnimStateLogicType Method_2_1B9BCD64F419AAE9()
	{
		return ((::RPG::GameCore::AnimStateLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ABDF779AB81694A_METHOD_2_1B9BCD64F419AAE9_OFFSET))(this);
	}

	::System::Void Method_2_60B1DD8792AE7B9B(::RPG::GameCore::AnimStateLogicType a1, ::Class_1_CB986F8DD1655D73* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType, ::Class_1_CB986F8DD1655D73*))((::PBYTE)hIl2Cpp + CLASS_2_4ABDF779AB81694A_METHOD_2_60B1DD8792AE7B9B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4E30FEEB9D0D4E0D(::RPG::GameCore::AnimStateLogicType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType))((::PBYTE)hIl2Cpp + CLASS_2_4ABDF779AB81694A_METHOD_2_4E30FEEB9D0D4E0D_OFFSET))(this, a1);
	}
};
