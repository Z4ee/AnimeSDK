#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_26684305CEECE64E.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionAddBuff; }

#define CLASS_2_499024E1CB98D768_METHOD_2_EDA04D77B90507D4_OFFSET UNITYSDK_OFFSET(0x189CC410)
#define CLASS_2_499024E1CB98D768__CTOR_OFFSET UNITYSDK_OFFSET(0x189CC400)

inline static constexpr unsigned int Class_2_499024E1CB98D768_TypeDefinitionIndex = 35046;

class Class_2_499024E1CB98D768 : public ::Class_1_26684305CEECE64E
{
public:
	::RPG::GameCore::CakeRaceActionAddBuff* Field_2_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionAddBuff* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionAddBuff*))((::PBYTE)hIl2Cpp + CLASS_2_499024E1CB98D768__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDA04D77B90507D4(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_499024E1CB98D768_METHOD_2_EDA04D77B90507D4_OFFSET))(this, a1, a2, a3);
	}
};
