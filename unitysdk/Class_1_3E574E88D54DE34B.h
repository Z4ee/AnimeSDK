#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3E574E88D54DE34B_RunOutStage.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraBattleRunOut; }
namespace System { class Action; }

#define CLASS_1_3E574E88D54DE34B_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x11E21940)
#define CLASS_1_3E574E88D54DE34B_METHOD_1_2C825E716CE9F2F9_OFFSET UNITYSDK_OFFSET(0x11E214A0)
#define CLASS_1_3E574E88D54DE34B_METHOD_1_3A9C03366E936C66_OFFSET UNITYSDK_OFFSET(0x11E20B10)
#define CLASS_1_3E574E88D54DE34B_METHOD_1_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0x11E20BB0)
#define CLASS_1_3E574E88D54DE34B_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x11E218F0)
#define CLASS_1_3E574E88D54DE34B_METHOD_1_BBF4A547D7671F86_OFFSET UNITYSDK_OFFSET(0x11E21160)
#define CLASS_1_3E574E88D54DE34B_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x11E21950)
#define CLASS_1_3E574E88D54DE34B__CTOR_OFFSET UNITYSDK_OFFSET(0x11E208E0)

inline static constexpr unsigned int Class_1_3E574E88D54DE34B_TypeDefinitionIndex = 71937;

class Class_1_3E574E88D54DE34B : public ::System::Object
{
public:
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* Field_1_2; // 0x10
	::System::Action* Field_1_3; // 0x18
	::System::Single Field_1_8; // 0x20
	::Class_1_3E574E88D54DE34B_RunOutStage Field_1_12; // 0x24
	::System::Single Field_1_1; // 0x28
	::System::Single Field_1_5; // 0x2C
	::System::UInt32 Field_1_4; // 0x30
	::System::Single Field_1_11; // 0x34
	::UnityEngine::Vector3 Field_1_6; // 0x38
	::System::Single Field_1_10; // 0x44
	::System::Single Field_1_9; // 0x48
	::System::Boolean _IsFinished_k__BackingField; // 0x4C
	::System::Single Field_1_7; // 0x50

	::System::Void _ctor(::RPG::GameCore::ChimeraBattleRunOut* a1, ::System::UInt32 a2, ::System::Int32 a3, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a4, ::System::Action* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleRunOut*, ::System::UInt32, ::System::Int32, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3E574E88D54DE34B__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_3A9C03366E936C66(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3E574E88D54DE34B_METHOD_1_3A9C03366E936C66_OFFSET))(this, a1);
	}

	::System::Void Method_1_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E574E88D54DE34B_METHOD_1_8714CF4AE9195CA2_OFFSET))(this);
	}

	::System::Void Method_1_BBF4A547D7671F86(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3E574E88D54DE34B_METHOD_1_BBF4A547D7671F86_OFFSET))(this, a1);
	}

	::System::Void Method_1_2C825E716CE9F2F9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E574E88D54DE34B_METHOD_1_2C825E716CE9F2F9_OFFSET))(this);
	}

	::System::Boolean get_IsFinished()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E574E88D54DE34B_GET_ISFINISHED_OFFSET))(this);
	}

	::System::Void set_IsFinished(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3E574E88D54DE34B_SET_ISFINISHED_OFFSET))(this, value);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E574E88D54DE34B_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}
};
