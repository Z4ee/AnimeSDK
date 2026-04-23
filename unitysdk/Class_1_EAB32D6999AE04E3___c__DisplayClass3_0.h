#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EAB32D6999AE04E3;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_EAB32D6999AE04E3___C__DISPLAYCLASS3_0__CREATESUMMONUNIT_B__0_OFFSET UNITYSDK_OFFSET(0x966EAC0)
#define CLASS_1_EAB32D6999AE04E3___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x966BD90)

inline static constexpr unsigned int Class_1_EAB32D6999AE04E3___c__DisplayClass3_0_TypeDefinitionIndex = 56036;

class Class_1_EAB32D6999AE04E3___c__DisplayClass3_0 : public ::System::Object
{
public:
	::System::Action_1<::RPG::GameCore::GameEntity*>* onLoadFinish; // 0x10
	::System::String* uniqueName; // 0x18
	::Class_1_EAB32D6999AE04E3* __4__this; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Void _CreateSummonUnit_b__0(::RPG::GameCore::GameEntity* entity)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EAB32D6999AE04E3___C__DISPLAYCLASS3_0__CREATESUMMONUNIT_B__0_OFFSET))(this, entity);
	}
};
