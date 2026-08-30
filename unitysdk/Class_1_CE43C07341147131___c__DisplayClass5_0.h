#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"

class Class_1_25EA9E797601849C;

#define CLASS_1_CE43C07341147131___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB47EC0)
#define CLASS_1_CE43C07341147131___C__DISPLAYCLASS5_0___QUERYBYOWNERTYPE_B__0_OFFSET UNITYSDK_OFFSET(0xBB480B0)

inline static constexpr unsigned int Class_1_CE43C07341147131___c__DisplayClass5_0_TypeDefinitionIndex = 79898;

class Class_1_CE43C07341147131___c__DisplayClass5_0 : public ::System::Object
{
public:
	::RPG::GameCore::FateRinHouguOwnerType ownerType; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE43C07341147131___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __QueryByOwnerType_b__0(::Class_1_25EA9E797601849C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_25EA9E797601849C*))((::PBYTE)hIl2Cpp + CLASS_1_CE43C07341147131___C__DISPLAYCLASS5_0___QUERYBYOWNERTYPE_B__0_OFFSET))(this, a1);
	}
};
