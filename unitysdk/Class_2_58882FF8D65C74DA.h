#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_26684305CEECE64E.h"

class Class_2_3ABA989E5AECB261;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionWaitSleep; }

#define CLASS_2_58882FF8D65C74DA_METHOD_2_8B042FA1F9BB81E6_OFFSET UNITYSDK_OFFSET(0x1660C3B0)
#define CLASS_2_58882FF8D65C74DA__CTOR_OFFSET UNITYSDK_OFFSET(0x1660C3A0)

inline static constexpr unsigned int Class_2_58882FF8D65C74DA_TypeDefinitionIndex = 29053;

class Class_2_58882FF8D65C74DA : public ::Class_1_26684305CEECE64E
{
public:
	::RPG::GameCore::CakeRaceActionWaitSleep* Field_2_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionWaitSleep* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionWaitSleep*))((::PBYTE)hIl2Cpp + CLASS_2_58882FF8D65C74DA__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B042FA1F9BB81E6(::Class_2_3ABA989E5AECB261* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3ABA989E5AECB261*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_58882FF8D65C74DA_METHOD_2_8B042FA1F9BB81E6_OFFSET))(this, a1, a2, a3);
	}
};
