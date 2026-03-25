#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightModifierEffectType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameModifier; }

#define CLASS_1_789872D6523A4E58___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10573750)
#define CLASS_1_789872D6523A4E58___C__DISPLAYCLASS24_0__GETMODIFIERBYEFFECTTYPE_B__0_OFFSET UNITYSDK_OFFSET(0x10574890)

inline static constexpr unsigned int Class_1_789872D6523A4E58___c__DisplayClass24_0_TypeDefinitionIndex = 52814;

class Class_1_789872D6523A4E58___c__DisplayClass24_0 : public ::System::Object
{
public:
	::RPG::Client::GridFightModifierEffectType effectType; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetModifierByEffectType_b__0(::RPG::Client::GridFightGameModifier* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58___C__DISPLAYCLASS24_0__GETMODIFIERBYEFFECTTYPE_B__0_OFFSET))(this, x);
	}
};
