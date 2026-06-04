#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3E574E88D54DE34B_RunOutStage.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraBattleRunOut; }
namespace System { class Action; }

#define CLASS_1_3E574E88D54DE34B_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xA5FADE0)
#define CLASS_1_3E574E88D54DE34B_METHOD_1_0F76D2A38DFBC84F_OFFSET UNITYSDK_OFFSET(0xA5F9F30)
#define CLASS_1_3E574E88D54DE34B_METHOD_1_5BCE9210F4ACDD0B_OFFSET UNITYSDK_OFFSET(0xA5FA920)
#define CLASS_1_3E574E88D54DE34B_METHOD_1_66F42CE2EDA79734_OFFSET UNITYSDK_OFFSET(0xA5F9FD0)
#define CLASS_1_3E574E88D54DE34B_METHOD_1_8106DDAA0FA0226C_OFFSET UNITYSDK_OFFSET(0xA5FA5A0)
#define CLASS_1_3E574E88D54DE34B_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xA5FAD90)
#define CLASS_1_3E574E88D54DE34B_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xA5FADF0)
#define CLASS_1_3E574E88D54DE34B__CTOR_OFFSET UNITYSDK_OFFSET(0xA5F9D00)

inline static constexpr unsigned int Class_1_3E574E88D54DE34B_TypeDefinitionIndex = 72959;

class Class_1_3E574E88D54DE34B : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x24
	::System::Single Field_1_4; // 0x28
	::System::Single Field_1_5; // 0x2C
	::System::Single Field_1_6; // 0x30
	::System::Boolean _IsFinished_k__BackingField; // 0x34
	::System::Single Field_1_8; // 0x38
	::UnityEngine::Vector3 Field_1_9; // 0x3C
	::Class_1_3E574E88D54DE34B_RunOutStage Field_1_10; // 0x48
	::System::UInt32 Field_1_11; // 0x4C
	::System::Single Field_1_12; // 0x50

	::System::Void _ctor(::RPG::GameCore::ChimeraBattleRunOut* a1, ::System::UInt32 a2, ::System::Int32 a3, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a4, ::System::Action* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleRunOut*, ::System::UInt32, ::System::Int32, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3E574E88D54DE34B__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_0F76D2A38DFBC84F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3E574E88D54DE34B_METHOD_1_0F76D2A38DFBC84F_OFFSET))(this, a1);
	}

	::System::Void Method_1_66F42CE2EDA79734()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E574E88D54DE34B_METHOD_1_66F42CE2EDA79734_OFFSET))(this);
	}

	::System::Void Method_1_8106DDAA0FA0226C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3E574E88D54DE34B_METHOD_1_8106DDAA0FA0226C_OFFSET))(this, a1);
	}

	::System::Void Method_1_5BCE9210F4ACDD0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E574E88D54DE34B_METHOD_1_5BCE9210F4ACDD0B_OFFSET))(this);
	}

	::System::Boolean get_IsFinished()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E574E88D54DE34B_GET_ISFINISHED_OFFSET))(this);
	}

	::System::Void set_IsFinished(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3E574E88D54DE34B_SET_ISFINISHED_OFFSET))(this, a1);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E574E88D54DE34B_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}
};
