#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_72FF3C03F0F06A80;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_72FF3C03F0F06A80___C__DISPLAYCLASS3_0__CREATESUMMONUNIT_B__0_OFFSET UNITYSDK_OFFSET(0x179A9B70)
#define CLASS_1_72FF3C03F0F06A80___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x179A6AE0)

inline static constexpr unsigned int Class_1_72FF3C03F0F06A80___c__DisplayClass3_0_TypeDefinitionIndex = 58045;

class Class_1_72FF3C03F0F06A80___c__DisplayClass3_0 : public ::System::Object
{
public:
	::System::String* uniqueName; // 0x10
	::System::Action_1<::RPG::GameCore::GameEntity*>* onLoadFinish; // 0x18
	::Class_1_72FF3C03F0F06A80* __4__this; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Void _CreateSummonUnit_b__0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80___C__DISPLAYCLASS3_0__CREATESUMMONUNIT_B__0_OFFSET))(this, a1);
	}
};
