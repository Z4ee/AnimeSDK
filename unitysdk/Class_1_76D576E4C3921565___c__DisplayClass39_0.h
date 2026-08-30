#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_76D576E4C3921565;
class Class_1_76D576E4C3921565_Class_3_95F370961AEDDA1E;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client::Promises { class Promise; }

#define CLASS_1_76D576E4C3921565___C__DISPLAYCLASS39_0__ASYNCLOADGAMEOBJECTWITHPROMISE_B__0_OFFSET UNITYSDK_OFFSET(0x179B7910)
#define CLASS_1_76D576E4C3921565___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x179B76A0)

inline static constexpr unsigned int Class_1_76D576E4C3921565___c__DisplayClass39_0_TypeDefinitionIndex = 69130;

class Class_1_76D576E4C3921565___c__DisplayClass39_0 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* promise; // 0x10
	::Class_1_76D576E4C3921565* __4__this; // 0x18
	::Class_1_76D576E4C3921565_Class_3_95F370961AEDDA1E* onLoadAction; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _AsyncLoadGameobjectWithPromise_b__0(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565___C__DISPLAYCLASS39_0__ASYNCLOADGAMEOBJECTWITHPROMISE_B__0_OFFSET))(this, a1);
	}
};
