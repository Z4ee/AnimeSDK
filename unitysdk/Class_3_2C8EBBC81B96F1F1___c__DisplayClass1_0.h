#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterVisibleComponent; }

#define CLASS_3_2C8EBBC81B96F1F1___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1190C5F0)
#define CLASS_3_2C8EBBC81B96F1F1___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x1190C600)

inline static constexpr unsigned int Class_3_2C8EBBC81B96F1F1___c__DisplayClass1_0_TypeDefinitionIndex = 47247;

class Class_3_2C8EBBC81B96F1F1___c__DisplayClass1_0 : public ::System::Object
{
public:
	::RPG::GameCore::CharacterVisibleComponent* pCharVisibleComponent; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C8EBBC81B96F1F1___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C8EBBC81B96F1F1___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET))(this);
	}
};
