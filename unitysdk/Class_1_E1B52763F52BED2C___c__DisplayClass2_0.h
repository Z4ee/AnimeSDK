#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IdleLiveEventSentenceRow; }

#define CLASS_1_E1B52763F52BED2C___C__DISPLAYCLASS2_0__CREATE_B__0_OFFSET UNITYSDK_OFFSET(0xBECEEB0)
#define CLASS_1_E1B52763F52BED2C___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBECEB30)

inline static constexpr unsigned int Class_1_E1B52763F52BED2C___c__DisplayClass2_0_TypeDefinitionIndex = 74864;

class Class_1_E1B52763F52BED2C___c__DisplayClass2_0 : public ::System::Object
{
public:
	::System::UInt32 sectionId; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1B52763F52BED2C___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _Create_b__0(::RPG::GameCore::IdleLiveEventSentenceRow* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::IdleLiveEventSentenceRow*))((::PBYTE)hIl2Cpp + CLASS_1_E1B52763F52BED2C___C__DISPLAYCLASS2_0__CREATE_B__0_OFFSET))(this, a1);
	}
};
