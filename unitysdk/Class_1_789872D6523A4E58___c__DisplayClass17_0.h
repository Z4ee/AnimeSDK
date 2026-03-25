#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameModifier; }

#define CLASS_1_789872D6523A4E58___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10573420)
#define CLASS_1_789872D6523A4E58___C__DISPLAYCLASS17_0__UPDATEREMOVE_B__0_OFFSET UNITYSDK_OFFSET(0x105747E0)

inline static constexpr unsigned int Class_1_789872D6523A4E58___c__DisplayClass17_0_TypeDefinitionIndex = 52811;

class Class_1_789872D6523A4E58___c__DisplayClass17_0 : public ::System::Object
{
public:
	::System::UInt32 uid; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _UpdateRemove_b__0(::RPG::Client::GridFightGameModifier* modifier)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58___C__DISPLAYCLASS17_0__UPDATEREMOVE_B__0_OFFSET))(this, modifier);
	}
};
