#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBuffName.h"
#include "unitysdk/System/Object.h"

class Class_1_7686EC5B8E7BB729;

#define CLASS_1_14F9B68B21ACAAB7___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17BF9A00)
#define CLASS_1_14F9B68B21ACAAB7___C__DISPLAYCLASS9_0__REMOVEBUFFSBYNAMES_B__0_OFFSET UNITYSDK_OFFSET(0x17BF9CE0)

inline static constexpr unsigned int Class_1_14F9B68B21ACAAB7___c__DisplayClass9_0_TypeDefinitionIndex = 34677;

class Class_1_14F9B68B21ACAAB7___c__DisplayClass9_0 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::CakeRaceBuffName>* buffNames; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14F9B68B21ACAAB7___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _RemoveBuffsByNames_b__0(::Class_1_7686EC5B8E7BB729* buff)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7686EC5B8E7BB729*))((::PBYTE)hIl2Cpp + CLASS_1_14F9B68B21ACAAB7___C__DISPLAYCLASS9_0__REMOVEBUFFSBYNAMES_B__0_OFFSET))(this, buff);
	}
};
