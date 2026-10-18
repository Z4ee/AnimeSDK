#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleFlowStateType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_936;
class Class_0_16E4307DCC419505_937;
namespace RPG::GameCore { class BaseExpeditionBattleAction; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_19A7374627019A7F_GET_ROUTEID_OFFSET UNITYSDK_OFFSET(0xC37BD60)
#define CLASS_1_19A7374627019A7F_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xC37BD70)
#define CLASS_1_19A7374627019A7F_METHOD_1_5FD53494E10EEAFF_OFFSET UNITYSDK_OFFSET(0xC37BFE0)
#define CLASS_1_19A7374627019A7F_METHOD_1_75C26C58F405F018_OFFSET UNITYSDK_OFFSET(0xC37BDD0)
#define CLASS_1_19A7374627019A7F_METHOD_1_76EEAB8A93B91981_OFFSET UNITYSDK_OFFSET(0xC37C2A0)
#define CLASS_1_19A7374627019A7F_METHOD_1_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0xC37C190)
#define CLASS_1_19A7374627019A7F_METHOD_1_8A4C6820E5F5715F_OFFSET UNITYSDK_OFFSET(0xC37C4A0)
#define CLASS_1_19A7374627019A7F_METHOD_1_EFB2061F730A6AEA_OFFSET UNITYSDK_OFFSET(0xC37C5A0)
#define CLASS_1_19A7374627019A7F__CTOR_OFFSET UNITYSDK_OFFSET(0xC37BEB0)

inline static constexpr unsigned int Class_1_19A7374627019A7F_TypeDefinitionIndex = 63900;

class Class_1_19A7374627019A7F : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* ECPKBEMLAPG; // 0x10
	::System::Func_2<::RPG::GameCore::ExpeditionBattleFlowStateType, ::Class_0_16E4307DCC419505_936*>* CBKKDIMPBJL; // 0x18
	::Class_0_16E4307DCC419505_937* PMIJOPOIDML; // 0x20
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_936*>* JHAPINEOBNF; // 0x28
	::System::Int32 KIBHMBDDHKC; // 0x30
	::System::UInt32 CJBDCNHICBD; // 0x34
	::System::UInt32 _RouteID_k__BackingField; // 0x38

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_936*>* a3, ::Class_0_16E4307DCC419505_937* a4, ::System::Func_2<::RPG::GameCore::ExpeditionBattleFlowStateType, ::Class_0_16E4307DCC419505_936*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_936*>*, ::Class_0_16E4307DCC419505_937*, ::System::Func_2<::RPG::GameCore::ExpeditionBattleFlowStateType, ::Class_0_16E4307DCC419505_936*>*))((::PBYTE)hIl2Cpp + CLASS_1_19A7374627019A7F__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::UInt32 get_RouteID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19A7374627019A7F_GET_ROUTEID_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19A7374627019A7F_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::RPG::GameCore::ExpeditionBattleFlowStateType Method_1_75C26C58F405F018()
	{
		return ((::RPG::GameCore::ExpeditionBattleFlowStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19A7374627019A7F_METHOD_1_75C26C58F405F018_OFFSET))(this);
	}

	::System::Boolean Method_1_5FD53494E10EEAFF(::RPG::GameCore::BaseExpeditionBattleAction*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BaseExpeditionBattleAction*&))((::PBYTE)hIl2Cpp + CLASS_1_19A7374627019A7F_METHOD_1_5FD53494E10EEAFF_OFFSET))(this, a1);
	}

	::System::Void Method_1_8A4C6820E5F5715F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19A7374627019A7F_METHOD_1_8A4C6820E5F5715F_OFFSET))(this);
	}

	::System::Void Method_1_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19A7374627019A7F_METHOD_1_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Boolean Method_1_76EEAB8A93B91981(::Class_0_16E4307DCC419505_936* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_936*))((::PBYTE)hIl2Cpp + CLASS_1_19A7374627019A7F_METHOD_1_76EEAB8A93B91981_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_EFB2061F730A6AEA(::RPG::GameCore::ExpeditionBattleFlowStateType a1, ::Class_0_16E4307DCC419505_936*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ExpeditionBattleFlowStateType, ::Class_0_16E4307DCC419505_936*&))((::PBYTE)hIl2Cpp + CLASS_1_19A7374627019A7F_METHOD_1_EFB2061F730A6AEA_OFFSET))(this, a1, a2);
	}
};
