#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_11B5C6B3FA66CD5A;
class Class_1_2A30DC66AD14D707;
namespace RPG::Client { class ChimeraDuelGameSession; }
namespace RPG::Client::Prop { class ChimeraDuelShopViewEffectBase; }

#define CLASS_1_B7473CCDD2B9AE2A___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC15B210)
#define CLASS_1_B7473CCDD2B9AE2A___C__DISPLAYCLASS6_0___TRYCREATEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xC15C2B0)

inline static constexpr unsigned int Class_1_B7473CCDD2B9AE2A___c__DisplayClass6_0_TypeDefinitionIndex = 77877;

class Class_1_B7473CCDD2B9AE2A___c__DisplayClass6_0 : public ::System::Object
{
public:
	::Class_1_2A30DC66AD14D707* skill; // 0x10
	::RPG::Client::ChimeraDuelGameSession* session; // 0x18
	::Class_1_11B5C6B3FA66CD5A* effectData; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7473CCDD2B9AE2A___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Prop::ChimeraDuelShopViewEffectBase* __TryCreateEffect_b__0(::System::UInt32 a1)
	{
		return ((::RPG::Client::Prop::ChimeraDuelShopViewEffectBase*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B7473CCDD2B9AE2A___C__DISPLAYCLASS6_0___TRYCREATEEFFECT_B__0_OFFSET))(this, a1);
	}
};
