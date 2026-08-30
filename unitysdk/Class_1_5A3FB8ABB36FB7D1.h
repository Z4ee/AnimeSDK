#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleFlowStateType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_836;
class Class_1_19A7374627019A7F;
class Class_1_811C21B122C8082C;
namespace RPG::Client { class ExpeditionBattleActionDispatch; }
namespace RPG::GameCore { class BaseExpeditionBattleAction; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5A3FB8ABB36FB7D1_GET_LEVELINDEX_OFFSET UNITYSDK_OFFSET(0x17947620)
#define CLASS_1_5A3FB8ABB36FB7D1_METHOD_1_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x179487F0)
#define CLASS_1_5A3FB8ABB36FB7D1_METHOD_1_4D38FB50FCAD9609_OFFSET UNITYSDK_OFFSET(0x179475D0)
#define CLASS_1_5A3FB8ABB36FB7D1_METHOD_1_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x179479D0)
#define CLASS_1_5A3FB8ABB36FB7D1_METHOD_1_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x17948110)
#define CLASS_1_5A3FB8ABB36FB7D1_METHOD_1_933F0E4BCE605077_OFFSET UNITYSDK_OFFSET(0x179484C0)
#define CLASS_1_5A3FB8ABB36FB7D1_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x17948750)
#define CLASS_1_5A3FB8ABB36FB7D1_METHOD_1_B5564E458E796F84_OFFSET UNITYSDK_OFFSET(0x17947630)
#define CLASS_1_5A3FB8ABB36FB7D1_METHOD_1_C8AAFD33C151DEE2_OFFSET UNITYSDK_OFFSET(0x17948250)
#define CLASS_1_5A3FB8ABB36FB7D1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x179481B0)
#define CLASS_1_5A3FB8ABB36FB7D1_METHOD_1_E16846F6D6EF4D1B_OFFSET UNITYSDK_OFFSET(0x17947970)
#define CLASS_1_5A3FB8ABB36FB7D1_METHOD_1_EF01F533E14F85F2_OFFSET UNITYSDK_OFFSET(0x17948590)
#define CLASS_1_5A3FB8ABB36FB7D1_METHOD_1_F4721F570F07072B_OFFSET UNITYSDK_OFFSET(0x179481F0)
#define CLASS_1_5A3FB8ABB36FB7D1__CTOR_OFFSET UNITYSDK_OFFSET(0x17947850)

inline static constexpr unsigned int Class_1_5A3FB8ABB36FB7D1_TypeDefinitionIndex = 63961;

class Class_1_5A3FB8ABB36FB7D1 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_19A7374627019A7F*>* AOKHDNPGLBH; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_811C21B122C8082C*>* FBJPIMMIOIL; // 0x18
	::Class_0_16E4307DCC419505_836* DJEBMFEGCHN; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* BMPNHAJFKMH; // 0x28
	::System::UInt32 _LevelIndex_k__BackingField; // 0x30
	::System::Boolean LGCCKKDEONM; // 0x34
	::System::Int32 MDEJNNFFOEH; // 0x38
	::System::UInt32 HKAHFHHICEN; // 0x3C

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::Class_0_16E4307DCC419505_836* a3, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_811C21B122C8082C*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Class_0_16E4307DCC419505_836*, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_811C21B122C8082C*>*))((::PBYTE)hIl2Cpp + CLASS_1_5A3FB8ABB36FB7D1__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::ExpeditionBattleFlowStateType Method_1_4D38FB50FCAD9609()
	{
		return ((::RPG::GameCore::ExpeditionBattleFlowStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A3FB8ABB36FB7D1_METHOD_1_4D38FB50FCAD9609_OFFSET))(this);
	}

	::System::UInt32 get_LevelIndex()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A3FB8ABB36FB7D1_GET_LEVELINDEX_OFFSET))(this);
	}

	::System::Boolean Method_1_B5564E458E796F84()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A3FB8ABB36FB7D1_METHOD_1_B5564E458E796F84_OFFSET))(this);
	}

	::System::Void Method_1_E16846F6D6EF4D1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A3FB8ABB36FB7D1_METHOD_1_E16846F6D6EF4D1B_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A3FB8ABB36FB7D1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_F4721F570F07072B(::System::UInt32& a1, ::RPG::GameCore::BaseExpeditionBattleAction*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&, ::RPG::GameCore::BaseExpeditionBattleAction*&))((::PBYTE)hIl2Cpp + CLASS_1_5A3FB8ABB36FB7D1_METHOD_1_F4721F570F07072B_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_C8AAFD33C151DEE2(::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleActionDispatch*>*& a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleActionDispatch*>*&))((::PBYTE)hIl2Cpp + CLASS_1_5A3FB8ABB36FB7D1_METHOD_1_C8AAFD33C151DEE2_OFFSET))(this, a1);
	}

	::System::Void Method_1_933F0E4BCE605077(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5A3FB8ABB36FB7D1_METHOD_1_933F0E4BCE605077_OFFSET))(this, a1);
	}

	::System::Void Method_1_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A3FB8ABB36FB7D1_METHOD_1_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A3FB8ABB36FB7D1_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A3FB8ABB36FB7D1_METHOD_1_229CEF33F0AF9039_OFFSET))(this);
	}

	::System::Boolean Method_1_EF01F533E14F85F2(::RPG::GameCore::ExpeditionBattleFlowStateType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ExpeditionBattleFlowStateType))((::PBYTE)hIl2Cpp + CLASS_1_5A3FB8ABB36FB7D1_METHOD_1_EF01F533E14F85F2_OFFSET))(this, a1);
	}

	::System::Void Method_1_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A3FB8ABB36FB7D1_METHOD_1_51BBA01F511E6107_OFFSET))(this);
	}
};
