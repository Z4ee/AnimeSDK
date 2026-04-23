#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueSelectSourceType.h"
#include "unitysdk/System/Object.h"

class Class_1_3AD2528CD53B1639_14;
class Class_1_9BA36423EA524C40_14;
class Class_1_C74059A83466814F;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Proto { class ItemCost; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEFORMULASELECTACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xB0399B0)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION_GET_CANROLL_OFFSET UNITYSDK_OFFSET(0xB038E30)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION_GET_HINTID_OFFSET UNITYSDK_OFFSET(0xB038E10)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION_GET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xB038DD0)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION_GET_ROLLFORMULACOSTS_OFFSET UNITYSDK_OFFSET(0xB038E90)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION_GET_ROLLFORMULAMAXTIMES_OFFSET UNITYSDK_OFFSET(0xB038E70)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION_GET_ROLLFORMULATIMES_OFFSET UNITYSDK_OFFSET(0xB038E50)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION_GET_SELECTFORMULAIDS_OFFSET UNITYSDK_OFFSET(0xB038DF0)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION_REFRESHONROLLRSP_OFFSET UNITYSDK_OFFSET(0xB039050)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION_SENDSELECTREQUEST_OFFSET UNITYSDK_OFFSET(0xB0394E0)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION_SET_CANROLL_OFFSET UNITYSDK_OFFSET(0xB038E40)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION_SET_HINTID_OFFSET UNITYSDK_OFFSET(0xB038E20)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION_SET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xB038DE0)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION_SET_ROLLFORMULACOSTS_OFFSET UNITYSDK_OFFSET(0xB038EA0)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION_SET_ROLLFORMULAMAXTIMES_OFFSET UNITYSDK_OFFSET(0xB038E80)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION_SET_ROLLFORMULATIMES_OFFSET UNITYSDK_OFFSET(0xB038E60)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION_SET_SELECTFORMULAIDS_OFFSET UNITYSDK_OFFSET(0xB038E00)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xB0399F0)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION__CONSTRUCT_OFFSET UNITYSDK_OFFSET(0xB038F40)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB038FC0)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xB038EB0)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION__REFRESHFORMULADATA_OFFSET UNITYSDK_OFFSET(0xB0390E0)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION__REFRESHROLLINFO_OFFSET UNITYSDK_OFFSET(0xB0393F0)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION__REPORTSELECTFORMULA_OFFSET UNITYSDK_OFFSET(0xB039620)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueFormulaSelectAction_TypeDefinitionIndex = 61707;

	class RogueFormulaSelectAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _SelectFormulaIDs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::Proto::ItemCost*>* _RollFormulaCosts_k__BackingField; // 0x18
		::System::UInt32 _RollFormulaTimes_k__BackingField; // 0x20
		::System::UInt32 _RogueActionID_k__BackingField; // 0x24
		::RPG::Client::RogueSelectSourceType _SourceType; // 0x28
		::System::UInt32 _RollFormulaMaxTimes_k__BackingField; // 0x2C
		::System::UInt32 _HintID_k__BackingField; // 0x30
		::System::Boolean _CanRoll_k__BackingField; // 0x34

		::System::Void _ctor(::System::UInt32 actionID, ::Class_1_3AD2528CD53B1639_14* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_3AD2528CD53B1639_14*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION__CTOR_OFFSET))(this, actionID, proto);
		}

		::System::Void _ctor_1(::System::UInt32 actionID, ::Class_1_9BA36423EA524C40_14* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_9BA36423EA524C40_14*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION__CTOR_1_OFFSET))(this, actionID, proto);
		}

		::System::UInt32 get_RogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_GET_ROGUEACTIONID_OFFSET))(this);
		}

		::System::Void set_RogueActionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_SET_ROGUEACTIONID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SelectFormulaIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_GET_SELECTFORMULAIDS_OFFSET))(this);
		}

		::System::Void set_SelectFormulaIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_SET_SELECTFORMULAIDS_OFFSET))(this, value);
		}

		::System::UInt32 get_HintID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_GET_HINTID_OFFSET))(this);
		}

		::System::Void set_HintID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_SET_HINTID_OFFSET))(this, value);
		}

		::System::Boolean get_CanRoll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_GET_CANROLL_OFFSET))(this);
		}

		::System::Void set_CanRoll(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_SET_CANROLL_OFFSET))(this, value);
		}

		::System::UInt32 get_RollFormulaTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_GET_ROLLFORMULATIMES_OFFSET))(this);
		}

		::System::Void set_RollFormulaTimes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_SET_ROLLFORMULATIMES_OFFSET))(this, value);
		}

		::System::UInt32 get_RollFormulaMaxTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_GET_ROLLFORMULAMAXTIMES_OFFSET))(this);
		}

		::System::Void set_RollFormulaMaxTimes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_SET_ROLLFORMULAMAXTIMES_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::Proto::ItemCost*>* get_RollFormulaCosts()
		{
			return ((::System::Collections::Generic::List_1<::Proto::ItemCost*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_GET_ROLLFORMULACOSTS_OFFSET))(this);
		}

		::System::Void set_RollFormulaCosts(::System::Collections::Generic::List_1<::Proto::ItemCost*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Proto::ItemCost*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_SET_ROLLFORMULACOSTS_OFFSET))(this, value);
		}

		::System::Void RefreshOnRollRsp(::Class_1_3AD2528CD53B1639_14* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_14*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_REFRESHONROLLRSP_OFFSET))(this, proto);
		}

		::System::Void SendSelectRequest(::System::UInt32 selectFormulaID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_SENDSELECTREQUEST_OFFSET))(this, selectFormulaID);
		}

		::System::UInt32 GetRogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_GETROGUEACTIONID_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_TRIGGERACTION_OFFSET))(this);
		}

		::System::Void _Construct(::Class_1_3AD2528CD53B1639_14* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_14*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION__CONSTRUCT_OFFSET))(this, proto);
		}

		::System::Void _RefreshFormulaData(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* formulaIDs)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION__REFRESHFORMULADATA_OFFSET))(this, formulaIDs);
		}

		::System::Void _RefreshRollInfo(::System::Boolean canRoll, ::System::UInt32 leftTimes, ::System::UInt32 totalTimes, ::Class_1_C74059A83466814F* cost)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::Class_1_C74059A83466814F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION__REFRESHROLLINFO_OFFSET))(this, canRoll, leftTimes, totalTimes, cost);
		}

		::System::Void _ReportSelectFormula(::System::UInt32 selectedFormulaID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION__REPORTSELECTFORMULA_OFFSET))(this, selectedFormulaID);
		}
	};
}
