#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfGame; }

#define CLASS_2_FEDD9082E0C1471B___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17D7F030)
#define CLASS_2_FEDD9082E0C1471B___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x17D7F0F0)

inline static constexpr unsigned int Class_2_FEDD9082E0C1471B___c__DisplayClass2_0_TypeDefinitionIndex = 55516;

class Class_2_FEDD9082E0C1471B___c__DisplayClass2_0 : public ::System::Object
{
public:
	::RPG::Client::ElfGame* game; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEDD9082E0C1471B___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEDD9082E0C1471B___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET))(this);
	}
};
