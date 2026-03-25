#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameModifier; }

#define CLASS_1_789872D6523A4E58___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10573830)
#define CLASS_1_789872D6523A4E58___C__DISPLAYCLASS25_0__GETMODIFIERBYUID_B__0_OFFSET UNITYSDK_OFFSET(0x105748B0)

inline static constexpr unsigned int Class_1_789872D6523A4E58___c__DisplayClass25_0_TypeDefinitionIndex = 52815;

class Class_1_789872D6523A4E58___c__DisplayClass25_0 : public ::System::Object
{
public:
	::System::UInt32 uid; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetModifierByUID_b__0(::RPG::Client::GridFightGameModifier* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58___C__DISPLAYCLASS25_0__GETMODIFIERBYUID_B__0_OFFSET))(this, x);
	}
};
