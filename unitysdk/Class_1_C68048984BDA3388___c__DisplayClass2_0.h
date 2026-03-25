#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5A422511FB64752E;
namespace RPG::GameCore { class MiddleSinglePackMissionConfig; }

#define CLASS_1_C68048984BDA3388___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCB446F0)
#define CLASS_1_C68048984BDA3388___C__DISPLAYCLASS2_0___GENERATEMIDDLEMISSIONPACKLIST_B__0_OFFSET UNITYSDK_OFFSET(0xCB44720)

inline static constexpr unsigned int Class_1_C68048984BDA3388___c__DisplayClass2_0_TypeDefinitionIndex = 53710;

class Class_1_C68048984BDA3388___c__DisplayClass2_0 : public ::System::Object
{
public:
	::RPG::GameCore::MiddleSinglePackMissionConfig* packMissionConfig; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C68048984BDA3388___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __GenerateMiddleMissionPackList_b__0(::Class_1_5A422511FB64752E* item)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5A422511FB64752E*))((::PBYTE)hIl2Cpp + CLASS_1_C68048984BDA3388___C__DISPLAYCLASS2_0___GENERATEMIDDLEMISSIONPACKLIST_B__0_OFFSET))(this, item);
	}
};
