#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AFC3C7A272BDF32C;
namespace RPG::Client { class MapPropDef; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_AFC3C7A272BDF32C___C__DISPLAYCLASS7_0__CREATEPROP_B__0_OFFSET UNITYSDK_OFFSET(0xC48B2D0)
#define CLASS_1_AFC3C7A272BDF32C___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC488030)

inline static constexpr unsigned int Class_1_AFC3C7A272BDF32C___c__DisplayClass7_0_TypeDefinitionIndex = 60866;

class Class_1_AFC3C7A272BDF32C___c__DisplayClass7_0 : public ::System::Object
{
public:
	::System::String* friendlyName; // 0x10
	::Class_1_AFC3C7A272BDF32C* __4__this; // 0x18
	::RPG::Client::MapPropDef* mapPropDef; // 0x20
	::RPG::GameCore::PropRow* pProp; // 0x28
	::System::String* uniqueName; // 0x30
	::System::Action_1<::RPG::GameCore::GameEntity*>* onLoadFinish; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFC3C7A272BDF32C___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Void _CreateProp_b__0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AFC3C7A272BDF32C___C__DISPLAYCLASS7_0__CREATEPROP_B__0_OFFSET))(this, a1);
	}
};
