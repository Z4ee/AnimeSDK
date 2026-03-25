#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5D7D12B9E06AB41E;
class Class_1_5D7D12B9E06AB41E_Class_3_95F370961AEDDA1E;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client::Promises { class Promise; }

#define CLASS_1_5D7D12B9E06AB41E___C__DISPLAYCLASS39_0__ASYNCLOADGAMEOBJECTWITHPROMISE_B__0_OFFSET UNITYSDK_OFFSET(0x110DD8F0)
#define CLASS_1_5D7D12B9E06AB41E___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x110DD680)

inline static constexpr unsigned int Class_1_5D7D12B9E06AB41E___c__DisplayClass39_0_TypeDefinitionIndex = 56525;

class Class_1_5D7D12B9E06AB41E___c__DisplayClass39_0 : public ::System::Object
{
public:
	::Class_1_5D7D12B9E06AB41E_Class_3_95F370961AEDDA1E* onLoadAction; // 0x10
	::Class_1_5D7D12B9E06AB41E* __4__this; // 0x18
	::RPG::Client::Promises::Promise* promise; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _AsyncLoadGameobjectWithPromise_b__0(::RPG::Client::IAssetOperation* assetOp)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E___C__DISPLAYCLASS39_0__ASYNCLOADGAMEOBJECTWITHPROMISE_B__0_OFFSET))(this, assetOp);
	}
};
