#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_004034A1FAAF468A;
class Class_2_4C1AAFE95CDED36F;
namespace RPG::Client { class IAssetOperation; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_4C1AAFE95CDED36F___C__DISPLAYCLASS78_0__ASYNCLOADGAMEOBJECT_B__0_OFFSET UNITYSDK_OFFSET(0x160B5E70)
#define CLASS_2_4C1AAFE95CDED36F___C__DISPLAYCLASS78_0__CTOR_OFFSET UNITYSDK_OFFSET(0x160B44A0)

inline static constexpr unsigned int Class_2_4C1AAFE95CDED36F___c__DisplayClass78_0_TypeDefinitionIndex = 57314;

class Class_2_4C1AAFE95CDED36F___c__DisplayClass78_0 : public ::System::Object
{
public:
	::Class_2_4C1AAFE95CDED36F* __4__this; // 0x10
	::System::Action_1<::Class_1_004034A1FAAF468A*>* onLoadAction; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F___C__DISPLAYCLASS78_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _AsyncLoadGameObject_b__0(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F___C__DISPLAYCLASS78_0__ASYNCLOADGAMEOBJECT_B__0_OFFSET))(this, a1);
	}
};
