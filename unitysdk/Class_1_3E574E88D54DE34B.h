#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3E574E88D54DE34B_RunOutStage.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraBattleRunOut; }
namespace System { class Action; }

#define CLASS_1_3E574E88D54DE34B_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1875F400)
#define CLASS_1_3E574E88D54DE34B_METHOD_1_0F76D2A38DFBC84F_OFFSET UNITYSDK_OFFSET(0x1875E550)
#define CLASS_1_3E574E88D54DE34B_METHOD_1_5BCE9210F4ACDD0B_OFFSET UNITYSDK_OFFSET(0x1875EF40)
#define CLASS_1_3E574E88D54DE34B_METHOD_1_66F42CE2EDA79734_OFFSET UNITYSDK_OFFSET(0x1875E5F0)
#define CLASS_1_3E574E88D54DE34B_METHOD_1_8106DDAA0FA0226C_OFFSET UNITYSDK_OFFSET(0x1875EBC0)
#define CLASS_1_3E574E88D54DE34B_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x1875F3B0)
#define CLASS_1_3E574E88D54DE34B_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1875F410)
#define CLASS_1_3E574E88D54DE34B__CTOR_OFFSET UNITYSDK_OFFSET(0x1875E310)

inline static constexpr unsigned int Class_1_3E574E88D54DE34B_TypeDefinitionIndex = 77969;

class Class_1_3E574E88D54DE34B : public ::System::Object
{
public:
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* NHNHKBJJKPP; // 0x10
	::System::Action* MECKBKLEHAN; // 0x18
	::System::Single DKOFFPPGEFI; // 0x20
	::System::Single FOMCKBAHCFM; // 0x24
	::Class_1_3E574E88D54DE34B_RunOutStage PMCOAFPCDFM; // 0x28
	::System::Single BNKPEFBBIDI; // 0x2C
	::UnityEngine::Vector3 AHDEBHBGBCM; // 0x30
	::System::Single HDKHGKNBPBN; // 0x3C
	::System::Single ANIPBKCEANB; // 0x40
	::System::Boolean _IsFinished_k__BackingField; // 0x44
	::System::UInt32 NJFKHPIHDEF; // 0x48
	::System::Single MOEGDGLAJOC; // 0x4C
	::System::Single CGKGMIEKCFK; // 0x50

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
