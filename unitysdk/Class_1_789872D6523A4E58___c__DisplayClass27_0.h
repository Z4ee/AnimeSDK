#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameModifier; }
namespace System { class Type; }

#define CLASS_1_789872D6523A4E58___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x105739D0)
#define CLASS_1_789872D6523A4E58___C__DISPLAYCLASS27_0__HASMODIFIER_B__0_OFFSET UNITYSDK_OFFSET(0x10574910)

inline static constexpr unsigned int Class_1_789872D6523A4E58___c__DisplayClass27_0_TypeDefinitionIndex = 52816;

class Class_1_789872D6523A4E58___c__DisplayClass27_0 : public ::System::Object
{
public:
	::System::Type* type; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _HasModifier_b__0(::RPG::Client::GridFightGameModifier* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58___C__DISPLAYCLASS27_0__HASMODIFIER_B__0_OFFSET))(this, x);
	}
};
