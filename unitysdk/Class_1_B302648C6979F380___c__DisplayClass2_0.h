#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_09388B68BBD5FF59;
namespace RPG::GameCore { class MiddleSinglePackMissionConfig; }

#define CLASS_1_B302648C6979F380___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12E8B830)
#define CLASS_1_B302648C6979F380___C__DISPLAYCLASS2_0___GENERATEMIDDLEMISSIONPACKLIST_B__0_OFFSET UNITYSDK_OFFSET(0x12E8B860)

inline static constexpr unsigned int Class_1_B302648C6979F380___c__DisplayClass2_0_TypeDefinitionIndex = 66135;

class Class_1_B302648C6979F380___c__DisplayClass2_0 : public ::System::Object
{
public:
	::RPG::GameCore::MiddleSinglePackMissionConfig* packMissionConfig; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B302648C6979F380___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __GenerateMiddleMissionPackList_b__0(::Class_1_09388B68BBD5FF59* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_09388B68BBD5FF59*))((::PBYTE)hIl2Cpp + CLASS_1_B302648C6979F380___C__DISPLAYCLASS2_0___GENERATEMIDDLEMISSIONPACKLIST_B__0_OFFSET))(this, a1);
	}
};
