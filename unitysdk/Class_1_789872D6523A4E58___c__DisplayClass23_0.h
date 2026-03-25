#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameModifier; }
namespace System { class Type; }

#define CLASS_1_789872D6523A4E58___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10573680)
#define CLASS_1_789872D6523A4E58___C__DISPLAYCLASS23_0__GETMODIFIER_B__0_OFFSET UNITYSDK_OFFSET(0x10574860)

inline static constexpr unsigned int Class_1_789872D6523A4E58___c__DisplayClass23_0_TypeDefinitionIndex = 52813;

class Class_1_789872D6523A4E58___c__DisplayClass23_0 : public ::System::Object
{
public:
	::System::Type* type; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetModifier_b__0(::RPG::Client::GridFightGameModifier* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58___C__DISPLAYCLASS23_0__GETMODIFIER_B__0_OFFSET))(this, x);
	}
};
