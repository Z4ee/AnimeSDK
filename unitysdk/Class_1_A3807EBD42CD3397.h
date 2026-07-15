#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatUIType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LuaUIGameFlowContext; }
namespace RPG::Client::DiceCombat { class DiceCombatGameFlow; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class String; }

#define CLASS_1_A3807EBD42CD3397_METHOD_1_0220D206DA464574_OFFSET UNITYSDK_OFFSET(0x17D8C490)
#define CLASS_1_A3807EBD42CD3397_METHOD_1_3F1F82B93FFB647B_OFFSET UNITYSDK_OFFSET(0x17D8C6E0)
#define CLASS_1_A3807EBD42CD3397_METHOD_1_5C6E71FC7EE80740_OFFSET UNITYSDK_OFFSET(0x17D8C590)
#define CLASS_1_A3807EBD42CD3397_METHOD_1_C6DFEF45E1FE475D_OFFSET UNITYSDK_OFFSET(0x17D8C8E0)
#define CLASS_1_A3807EBD42CD3397_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17D8C550)
#define CLASS_1_A3807EBD42CD3397__CTOR_OFFSET UNITYSDK_OFFSET(0x17D8C540)

inline static constexpr unsigned int Class_1_A3807EBD42CD3397_TypeDefinitionIndex = 72204;

class Class_1_A3807EBD42CD3397 : public ::System::Object
{
public:
	::RPG::Client::DiceCombat::DiceCombatGameFlow* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::DiceCombat::DiceCombatGameFlow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatGameFlow*))((::PBYTE)hIl2Cpp + CLASS_1_A3807EBD42CD3397__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_A3807EBD42CD3397* Method_1_0220D206DA464574(::RPG::Client::DiceCombat::DiceCombatGameFlow* a1)
	{
		return ((::Class_1_A3807EBD42CD3397*(*)(::RPG::Client::DiceCombat::DiceCombatGameFlow*))((::PBYTE)hIl2Cpp + CLASS_1_A3807EBD42CD3397_METHOD_1_0220D206DA464574_OFFSET))(a1);
	}

	::RPG::Client::LuaUIGameFlowContext* Method_1_5C6E71FC7EE80740(::RPG::Client::DiceCombat::DiceCombatUIType a1)
	{
		return ((::RPG::Client::LuaUIGameFlowContext*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatUIType))((::PBYTE)hIl2Cpp + CLASS_1_A3807EBD42CD3397_METHOD_1_5C6E71FC7EE80740_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_3F1F82B93FFB647B(::RPG::Client::DiceCombat::DiceCombatUIType a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatUIType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_A3807EBD42CD3397_METHOD_1_3F1F82B93FFB647B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3807EBD42CD3397_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* Method_1_C6DFEF45E1FE475D(::RPG::Client::DiceCombat::DiceCombatUIType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatUIType))((::PBYTE)hIl2Cpp + CLASS_1_A3807EBD42CD3397_METHOD_1_C6DFEF45E1FE475D_OFFSET))(this, a1);
	}
};
