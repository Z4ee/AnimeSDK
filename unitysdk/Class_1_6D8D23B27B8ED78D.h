#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatV2UIType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LuaUIGameFlowContext; }
namespace RPG::Client::DiceCombat { class DiceCombatV2GameFlow; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class String; }

#define CLASS_1_6D8D23B27B8ED78D_METHOD_1_20E8F279A63249A4_OFFSET UNITYSDK_OFFSET(0x127C9A60)
#define CLASS_1_6D8D23B27B8ED78D_METHOD_1_54412D5020BB1531_OFFSET UNITYSDK_OFFSET(0x127C9CB0)
#define CLASS_1_6D8D23B27B8ED78D_METHOD_1_84E69FC94E3FAD84_OFFSET UNITYSDK_OFFSET(0x127C9B60)
#define CLASS_1_6D8D23B27B8ED78D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x127C9B20)
#define CLASS_1_6D8D23B27B8ED78D_METHOD_1_D47DFA01BE0A4EC1_OFFSET UNITYSDK_OFFSET(0x127C9EB0)
#define CLASS_1_6D8D23B27B8ED78D__CTOR_OFFSET UNITYSDK_OFFSET(0x127C9B10)

inline static constexpr unsigned int Class_1_6D8D23B27B8ED78D_TypeDefinitionIndex = 69953;

class Class_1_6D8D23B27B8ED78D : public ::System::Object
{
public:
	::RPG::Client::DiceCombat::DiceCombatV2GameFlow* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::DiceCombat::DiceCombatV2GameFlow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2GameFlow*))((::PBYTE)hIl2Cpp + CLASS_1_6D8D23B27B8ED78D__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_6D8D23B27B8ED78D* Method_1_20E8F279A63249A4(::RPG::Client::DiceCombat::DiceCombatV2GameFlow* a1)
	{
		return ((::Class_1_6D8D23B27B8ED78D*(*)(::RPG::Client::DiceCombat::DiceCombatV2GameFlow*))((::PBYTE)hIl2Cpp + CLASS_1_6D8D23B27B8ED78D_METHOD_1_20E8F279A63249A4_OFFSET))(a1);
	}

	::RPG::Client::LuaUIGameFlowContext* Method_1_84E69FC94E3FAD84(::RPG::Client::DiceCombat::DiceCombatV2UIType a1)
	{
		return ((::RPG::Client::LuaUIGameFlowContext*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2UIType))((::PBYTE)hIl2Cpp + CLASS_1_6D8D23B27B8ED78D_METHOD_1_84E69FC94E3FAD84_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_54412D5020BB1531(::RPG::Client::DiceCombat::DiceCombatV2UIType a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2UIType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_6D8D23B27B8ED78D_METHOD_1_54412D5020BB1531_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D8D23B27B8ED78D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* Method_1_D47DFA01BE0A4EC1(::RPG::Client::DiceCombat::DiceCombatV2UIType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2UIType))((::PBYTE)hIl2Cpp + CLASS_1_6D8D23B27B8ED78D_METHOD_1_D47DFA01BE0A4EC1_OFFSET))(this, a1);
	}
};
