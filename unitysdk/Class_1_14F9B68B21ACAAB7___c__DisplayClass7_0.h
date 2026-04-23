#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7686EC5B8E7BB729;
namespace RPG::GameCore { class CakeRaceBuffConfig; }

#define CLASS_1_14F9B68B21ACAAB7___C__DISPLAYCLASS7_0__ADDBUFF_B__0_OFFSET UNITYSDK_OFFSET(0x17BF9CA0)
#define CLASS_1_14F9B68B21ACAAB7___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17BF91D0)

inline static constexpr unsigned int Class_1_14F9B68B21ACAAB7___c__DisplayClass7_0_TypeDefinitionIndex = 34676;

class Class_1_14F9B68B21ACAAB7___c__DisplayClass7_0 : public ::System::Object
{
public:
	::RPG::GameCore::CakeRaceBuffConfig* buffConfig; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14F9B68B21ACAAB7___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _AddBuff_b__0(::Class_1_7686EC5B8E7BB729* buff)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7686EC5B8E7BB729*))((::PBYTE)hIl2Cpp + CLASS_1_14F9B68B21ACAAB7___C__DISPLAYCLASS7_0__ADDBUFF_B__0_OFFSET))(this, buff);
	}
};
