#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueSelectSourceType.h"
#include "unitysdk/System/Object.h"

class Class_1_9BA36423EA524C40_14;
class Class_1_BD3679861BD0C676_1;
class Class_1_C74059A83466814F;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Proto { class ItemCost; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEFORMULASELECTACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xC7861D0)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION_GET_CANROLL_OFFSET UNITYSDK_OFFSET(0xC7855F0)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION_GET_HINTID_OFFSET UNITYSDK_OFFSET(0xC7855D0)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION_GET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xC785590)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION_GET_ROLLFORMULACOSTS_OFFSET UNITYSDK_OFFSET(0xC785650)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION_GET_ROLLFORMULAMAXTIMES_OFFSET UNITYSDK_OFFSET(0xC785630)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION_GET_ROLLFORMULATIMES_OFFSET UNITYSDK_OFFSET(0xC785610)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION_GET_SELECTFORMULAIDS_OFFSET UNITYSDK_OFFSET(0xC7855B0)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION_REFRESHONROLLRSP_OFFSET UNITYSDK_OFFSET(0xC785830)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION_SENDSELECTREQUEST_OFFSET UNITYSDK_OFFSET(0xC785CE0)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION_SET_CANROLL_OFFSET UNITYSDK_OFFSET(0xC785600)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION_SET_HINTID_OFFSET UNITYSDK_OFFSET(0xC7855E0)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION_SET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xC7855A0)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION_SET_ROLLFORMULACOSTS_OFFSET UNITYSDK_OFFSET(0xC785660)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION_SET_ROLLFORMULAMAXTIMES_OFFSET UNITYSDK_OFFSET(0xC785640)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION_SET_ROLLFORMULATIMES_OFFSET UNITYSDK_OFFSET(0xC785620)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION_SET_SELECTFORMULAIDS_OFFSET UNITYSDK_OFFSET(0xC7855C0)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xC786210)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION__CONSTRUCT_OFFSET UNITYSDK_OFFSET(0xC785720)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0xC7857A0)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xC785670)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION__REFRESHFORMULADATA_OFFSET UNITYSDK_OFFSET(0xC7858C0)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION__REFRESHROLLINFO_OFFSET UNITYSDK_OFFSET(0xC785BF0)
#define RPG_CLIENT_ROGUEFORMULASELECTACTION__REPORTSELECTFORMULA_OFFSET UNITYSDK_OFFSET(0xC785E30)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueFormulaSelectAction_TypeDefinitionIndex = 62640;

	class RogueFormulaSelectAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _SelectFormulaIDs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::Proto::ItemCost*>* _RollFormulaCosts_k__BackingField; // 0x18
		::System::UInt32 _HintID_k__BackingField; // 0x20
		::System::UInt32 _RollFormulaTimes_k__BackingField; // 0x24
		::RPG::Client::RogueSelectSourceType _SourceType; // 0x28
		::System::UInt32 _RogueActionID_k__BackingField; // 0x2C
		::System::UInt32 _RollFormulaMaxTimes_k__BackingField; // 0x30
		::System::Boolean _CanRoll_k__BackingField; // 0x34

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_BD3679861BD0C676_1* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_BD3679861BD0C676_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::UInt32 a1, ::Class_1_9BA36423EA524C40_14* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_9BA36423EA524C40_14*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_RogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_GET_ROGUEACTIONID_OFFSET))(this);
		}

		::System::Void set_RogueActionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_SET_ROGUEACTIONID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SelectFormulaIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_GET_SELECTFORMULAIDS_OFFSET))(this);
		}

		::System::Void set_SelectFormulaIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_SET_SELECTFORMULAIDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_HintID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_GET_HINTID_OFFSET))(this);
		}

		::System::Void set_HintID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_SET_HINTID_OFFSET))(this, a1);
		}

		::System::Boolean get_CanRoll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_GET_CANROLL_OFFSET))(this);
		}

		::System::Void set_CanRoll(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_SET_CANROLL_OFFSET))(this, a1);
		}

		::System::UInt32 get_RollFormulaTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_GET_ROLLFORMULATIMES_OFFSET))(this);
		}

		::System::Void set_RollFormulaTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_SET_ROLLFORMULATIMES_OFFSET))(this, a1);
		}

		::System::UInt32 get_RollFormulaMaxTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_GET_ROLLFORMULAMAXTIMES_OFFSET))(this);
		}

		::System::Void set_RollFormulaMaxTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_SET_ROLLFORMULAMAXTIMES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Proto::ItemCost*>* get_RollFormulaCosts()
		{
			return ((::System::Collections::Generic::List_1<::Proto::ItemCost*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_GET_ROLLFORMULACOSTS_OFFSET))(this);
		}

		::System::Void set_RollFormulaCosts(::System::Collections::Generic::List_1<::Proto::ItemCost*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Proto::ItemCost*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_SET_ROLLFORMULACOSTS_OFFSET))(this, a1);
		}

		::System::Void RefreshOnRollRsp(::Class_1_BD3679861BD0C676_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BD3679861BD0C676_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_REFRESHONROLLRSP_OFFSET))(this, a1);
		}

		::System::Void SendSelectRequest(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_SENDSELECTREQUEST_OFFSET))(this, a1);
		}

		::System::UInt32 GetRogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_GETROGUEACTIONID_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION_TRIGGERACTION_OFFSET))(this);
		}

		::System::Void _Construct(::Class_1_BD3679861BD0C676_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BD3679861BD0C676_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION__CONSTRUCT_OFFSET))(this, a1);
		}

		::System::Void _RefreshFormulaData(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION__REFRESHFORMULADATA_OFFSET))(this, a1);
		}

		::System::Void _RefreshRollInfo(::System::Boolean a1, ::System::UInt32 a2, ::System::UInt32 a3, ::Class_1_C74059A83466814F* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::Class_1_C74059A83466814F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION__REFRESHROLLINFO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ReportSelectFormula(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASELECTACTION__REPORTSELECTFORMULA_OFFSET))(this, a1);
		}
	};
}
