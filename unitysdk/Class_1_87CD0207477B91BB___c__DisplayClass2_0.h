#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IdleLiveEventSentenceRow; }

#define CLASS_1_87CD0207477B91BB___C__DISPLAYCLASS2_0__CREATE_B__0_OFFSET UNITYSDK_OFFSET(0xB2120B0)
#define CLASS_1_87CD0207477B91BB___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB211D70)

inline static constexpr unsigned int Class_1_87CD0207477B91BB___c__DisplayClass2_0_TypeDefinitionIndex = 69222;

class Class_1_87CD0207477B91BB___c__DisplayClass2_0 : public ::System::Object
{
public:
	::System::UInt32 sectionId; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87CD0207477B91BB___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _Create_b__0(::RPG::GameCore::IdleLiveEventSentenceRow* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::IdleLiveEventSentenceRow*))((::PBYTE)hIl2Cpp + CLASS_1_87CD0207477B91BB___C__DISPLAYCLASS2_0__CREATE_B__0_OFFSET))(this, x);
	}
};
