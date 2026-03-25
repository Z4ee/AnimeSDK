#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatUIType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LuaUIGameFlowContext; }
namespace RPG::Client::DiceCombat { class DiceCombatGameFlow; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class String; }

#define CLASS_1_62DB3B5C659C57A3_METHOD_1_0220D206DA464574_OFFSET UNITYSDK_OFFSET(0x11058880)
#define CLASS_1_62DB3B5C659C57A3_METHOD_1_5C6E71FC7EE80740_OFFSET UNITYSDK_OFFSET(0x11058980)
#define CLASS_1_62DB3B5C659C57A3_METHOD_1_62EED43D02A8870D_OFFSET UNITYSDK_OFFSET(0x11058AD0)
#define CLASS_1_62DB3B5C659C57A3_METHOD_1_C6DFEF45E1FE475D_OFFSET UNITYSDK_OFFSET(0x11058CD0)
#define CLASS_1_62DB3B5C659C57A3_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11058940)
#define CLASS_1_62DB3B5C659C57A3__CTOR_OFFSET UNITYSDK_OFFSET(0x11058930)

inline static constexpr unsigned int Class_1_62DB3B5C659C57A3_TypeDefinitionIndex = 61954;

class Class_1_62DB3B5C659C57A3 : public ::System::Object
{
public:
	::RPG::Client::DiceCombat::DiceCombatGameFlow* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::DiceCombat::DiceCombatGameFlow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatGameFlow*))((::PBYTE)hIl2Cpp + CLASS_1_62DB3B5C659C57A3__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_62DB3B5C659C57A3* Method_1_0220D206DA464574(::RPG::Client::DiceCombat::DiceCombatGameFlow* a1)
	{
		return ((::Class_1_62DB3B5C659C57A3*(*)(::RPG::Client::DiceCombat::DiceCombatGameFlow*))((::PBYTE)hIl2Cpp + CLASS_1_62DB3B5C659C57A3_METHOD_1_0220D206DA464574_OFFSET))(a1);
	}

	::RPG::Client::LuaUIGameFlowContext* Method_1_5C6E71FC7EE80740(::RPG::Client::DiceCombat::DiceCombatUIType a1)
	{
		return ((::RPG::Client::LuaUIGameFlowContext*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatUIType))((::PBYTE)hIl2Cpp + CLASS_1_62DB3B5C659C57A3_METHOD_1_5C6E71FC7EE80740_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_62EED43D02A8870D(::RPG::Client::DiceCombat::DiceCombatUIType a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatUIType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_62DB3B5C659C57A3_METHOD_1_62EED43D02A8870D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62DB3B5C659C57A3_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* Method_1_C6DFEF45E1FE475D(::RPG::Client::DiceCombat::DiceCombatUIType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatUIType))((::PBYTE)hIl2Cpp + CLASS_1_62DB3B5C659C57A3_METHOD_1_C6DFEF45E1FE475D_OFFSET))(this, a1);
	}
};
