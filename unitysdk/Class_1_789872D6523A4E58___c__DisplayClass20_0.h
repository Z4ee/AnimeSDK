#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameModifier; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_789872D6523A4E58___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x105735B0)
#define CLASS_1_789872D6523A4E58___C__DISPLAYCLASS20_0__GETMODIFIER_B__0_OFFSET UNITYSDK_OFFSET(0x10574840)

inline static constexpr unsigned int Class_1_789872D6523A4E58___c__DisplayClass20_0_TypeDefinitionIndex = 52812;

class Class_1_789872D6523A4E58___c__DisplayClass20_0 : public ::System::Object
{
public:
	::System::Func_2<::RPG::Client::GridFightGameModifier*, ::System::Boolean>* pred; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetModifier_b__0(::RPG::Client::GridFightGameModifier* modifier)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + CLASS_1_789872D6523A4E58___C__DISPLAYCLASS20_0__GETMODIFIER_B__0_OFFSET))(this, modifier);
	}
};
