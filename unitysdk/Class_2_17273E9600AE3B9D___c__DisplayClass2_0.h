#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_17273E9600AE3B9D;
namespace RPG::Client { class AdventurePhase; }

#define CLASS_2_17273E9600AE3B9D___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19B43C60)
#define CLASS_2_17273E9600AE3B9D___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x19B44170)

inline static constexpr unsigned int Class_2_17273E9600AE3B9D___c__DisplayClass2_0_TypeDefinitionIndex = 58940;

class Class_2_17273E9600AE3B9D___c__DisplayClass2_0 : public ::System::Object
{
public:
	::Class_2_17273E9600AE3B9D* __4__this; // 0x10
	::RPG::Client::AdventurePhase* pADP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17273E9600AE3B9D___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17273E9600AE3B9D___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET))(this);
	}
};
