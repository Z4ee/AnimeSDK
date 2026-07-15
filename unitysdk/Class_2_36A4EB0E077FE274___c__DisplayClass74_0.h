#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_004034A1FAAF468A;
class Class_2_36A4EB0E077FE274;
namespace RPG::Client { class IAssetOperation; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_36A4EB0E077FE274___C__DISPLAYCLASS74_0__ASYNCLOADGAMEOBJECT_B__0_OFFSET UNITYSDK_OFFSET(0x18B0C8A0)
#define CLASS_2_36A4EB0E077FE274___C__DISPLAYCLASS74_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18B0AB60)

inline static constexpr unsigned int Class_2_36A4EB0E077FE274___c__DisplayClass74_0_TypeDefinitionIndex = 54593;

class Class_2_36A4EB0E077FE274___c__DisplayClass74_0 : public ::System::Object
{
public:
	::Class_2_36A4EB0E077FE274* __4__this; // 0x10
	::System::Action_1<::Class_1_004034A1FAAF468A*>* onLoadAction; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274___C__DISPLAYCLASS74_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _AsyncLoadGameObject_b__0(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274___C__DISPLAYCLASS74_0__ASYNCLOADGAMEOBJECT_B__0_OFFSET))(this, a1);
	}
};
