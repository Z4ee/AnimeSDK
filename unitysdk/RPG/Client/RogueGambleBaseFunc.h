#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueGambleMode.h"
#include "unitysdk/RPG/GameCore/RogueGambleMachineType.h"
#include "unitysdk/System/Object.h"

class Class_1_7CA0EA4EB9C00A0E_1;
class Class_1_A16A135FC5A0DDB9_3;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RogueGambleGroupData; }
namespace RPG::Client { class RogueGambleUnitData; }
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_BINGOGROUPDATA_OFFSET UNITYSDK_OFFSET(0xA304AB0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_BINGOUNITDATA_OFFSET UNITYSDK_OFFSET(0xA304AD0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_COSTITEMLIST_OFFSET UNITYSDK_OFFSET(0xA304A70)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_CURVEDURATION_OFFSET UNITYSDK_OFFSET(0xA304B80)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_CURVE_OFFSET UNITYSDK_OFFSET(0xA304B10)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_GAMBLEMODE_OFFSET UNITYSDK_OFFSET(0xA304C00)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xA304A10)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_MACHINEID_OFFSET UNITYSDK_OFFSET(0xA3049D0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_MACHINEPROPCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA304AF0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_MACHINETYPE_OFFSET UNITYSDK_OFFSET(0xA3049F0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_MAXUSECOUNT_OFFSET UNITYSDK_OFFSET(0xA304A30)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_ROGUEGAMBLEGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0xA304A90)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_USEDCOUNT_OFFSET UNITYSDK_OFFSET(0xA304A50)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_WALKNUM_OFFSET UNITYSDK_OFFSET(0xA304BE0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_INIT_OFFSET UNITYSDK_OFFSET(0xA304000)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0xA3046C0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_REFRESH_OFFSET UNITYSDK_OFFSET(0xA304380)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_RELEASESPRITE_OFFSET UNITYSDK_OFFSET(0xA304760)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SETBINGODATA_OFFSET UNITYSDK_OFFSET(0xA304240)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SETPROPCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA304620)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SETUPPROPTEXTURE_OFFSET UNITYSDK_OFFSET(0xA304710)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SETWALKNUM_OFFSET UNITYSDK_OFFSET(0xA304670)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_BINGOGROUPDATA_OFFSET UNITYSDK_OFFSET(0xA304AC0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_BINGOUNITDATA_OFFSET UNITYSDK_OFFSET(0xA304AE0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_COSTITEMLIST_OFFSET UNITYSDK_OFFSET(0xA304A80)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_GAMBLEMODE_OFFSET UNITYSDK_OFFSET(0xA304C10)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0xA304A20)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_MACHINEID_OFFSET UNITYSDK_OFFSET(0xA3049E0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_MACHINEPROPCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA304B00)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_MACHINETYPE_OFFSET UNITYSDK_OFFSET(0xA304A00)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_MAXUSECOUNT_OFFSET UNITYSDK_OFFSET(0xA304A40)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_ROGUEGAMBLEGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0xA304AA0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_USEDCOUNT_OFFSET UNITYSDK_OFFSET(0xA304A60)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_WALKNUM_OFFSET UNITYSDK_OFFSET(0xA304BF0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_TRIGGERPROPROLL_OFFSET UNITYSDK_OFFSET(0xA3047A0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0xA304C20)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC__SETMACHINETYPE_OFFSET UNITYSDK_OFFSET(0xA3047E0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC__SETUPGAMBLEGROUPDATALIST_1_OFFSET UNITYSDK_OFFSET(0xA3044F0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC__SETUPGAMBLEGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0xA3040C0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC__SORTGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0xA304860)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueGambleBaseFunc_TypeDefinitionIndex = 54746;

	class RogueGambleBaseFunc : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueGambleGroupData*>* _RogueGambleGroupDataList_k__BackingField; // 0x10
		::RPG::Client::RogueGambleGroupData* _BingoGroupData_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* _CostItemList_k__BackingField; // 0x20
		::RPG::Client::RogueGambleUnitData* _BingoUnitData_k__BackingField; // 0x28
		::RPG::GameCore::PropComponent* _MachinePropComponent_k__BackingField; // 0x30
		::RPG::Client::RogueGambleMode _GambleMode_k__BackingField; // 0x38
		::System::Int32 _WalkNum_k__BackingField; // 0x3C
		::System::Boolean _IsValid_k__BackingField; // 0x40
		::RPG::GameCore::RogueGambleMachineType _MachineType_k__BackingField; // 0x44
		::System::UInt32 _MaxUseCount_k__BackingField; // 0x48
		::System::UInt32 _UsedCount_k__BackingField; // 0x4C
		::System::UInt32 _MachineID_k__BackingField; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC__CTOR_OFFSET))(this);
		}

		::System::Void Init(::Class_1_A16A135FC5A0DDB9_3* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A16A135FC5A0DDB9_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_INIT_OFFSET))(this, proto);
		}

		::System::Void SetBingoData(::System::UInt32 groupId, ::System::UInt32 unitIdx)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SETBINGODATA_OFFSET))(this, groupId, unitIdx);
		}

		::System::Void Refresh(::RPG::Client::RogueGambleBaseFunc* func)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueGambleBaseFunc*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_REFRESH_OFFSET))(this, func);
		}

		::System::Void SetPropComponent(::RPG::GameCore::PropComponent* prop)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SETPROPCOMPONENT_OFFSET))(this, prop);
		}

		::System::Void SetWalkNum(::System::Int32 walkNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SETWALKNUM_OFFSET))(this, walkNum);
		}

		::RPG::Client::LuaUIController* OpenFuncUIPage(::System::UInt32 propEntityID)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_OPENFUNCUIPAGE_OFFSET))(this, propEntityID);
		}

		::System::Void SetupPropTexture(::System::Action* failCallBack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SETUPPROPTEXTURE_OFFSET))(this, failCallBack);
		}

		::System::Void ReleaseSprite()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_RELEASESPRITE_OFFSET))(this);
		}

		::System::Void TriggerPropRoll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_TRIGGERPROPROLL_OFFSET))(this);
		}

		::System::Void _SetMachineType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC__SETMACHINETYPE_OFFSET))(this);
		}

		::System::Void _SetupGambleGroupDataList(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7CA0EA4EB9C00A0E_1*>* protoGroupDataList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7CA0EA4EB9C00A0E_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC__SETUPGAMBLEGROUPDATALIST_OFFSET))(this, protoGroupDataList);
		}

		::System::Void _SetupGambleGroupDataList_1(::System::Collections::Generic::List_1<::RPG::Client::RogueGambleGroupData*>* dataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueGambleGroupData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC__SETUPGAMBLEGROUPDATALIST_1_OFFSET))(this, dataList);
		}

		::System::Void _SortGroupDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC__SORTGROUPDATALIST_OFFSET))(this);
		}

		::System::UInt32 get_MachineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_MACHINEID_OFFSET))(this);
		}

		::System::Void set_MachineID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_MACHINEID_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueGambleMachineType get_MachineType()
		{
			return ((::RPG::GameCore::RogueGambleMachineType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_MACHINETYPE_OFFSET))(this);
		}

		::System::Void set_MachineType(::RPG::GameCore::RogueGambleMachineType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueGambleMachineType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_MACHINETYPE_OFFSET))(this, value);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_ISVALID_OFFSET))(this);
		}

		::System::Void set_IsValid(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_ISVALID_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxUseCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_MAXUSECOUNT_OFFSET))(this);
		}

		::System::Void set_MaxUseCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_MAXUSECOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_UsedCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_USEDCOUNT_OFFSET))(this);
		}

		::System::Void set_UsedCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_USEDCOUNT_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* get_CostItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_COSTITEMLIST_OFFSET))(this);
		}

		::System::Void set_CostItemList(::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_COSTITEMLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueGambleGroupData*>* get_RogueGambleGroupDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueGambleGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_ROGUEGAMBLEGROUPDATALIST_OFFSET))(this);
		}

		::System::Void set_RogueGambleGroupDataList(::System::Collections::Generic::List_1<::RPG::Client::RogueGambleGroupData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueGambleGroupData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_ROGUEGAMBLEGROUPDATALIST_OFFSET))(this, value);
		}

		::RPG::Client::RogueGambleGroupData* get_BingoGroupData()
		{
			return ((::RPG::Client::RogueGambleGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_BINGOGROUPDATA_OFFSET))(this);
		}

		::System::Void set_BingoGroupData(::RPG::Client::RogueGambleGroupData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueGambleGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_BINGOGROUPDATA_OFFSET))(this, value);
		}

		::RPG::Client::RogueGambleUnitData* get_BingoUnitData()
		{
			return ((::RPG::Client::RogueGambleUnitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_BINGOUNITDATA_OFFSET))(this);
		}

		::System::Void set_BingoUnitData(::RPG::Client::RogueGambleUnitData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueGambleUnitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_BINGOUNITDATA_OFFSET))(this, value);
		}

		::RPG::GameCore::PropComponent* get_MachinePropComponent()
		{
			return ((::RPG::GameCore::PropComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_MACHINEPROPCOMPONENT_OFFSET))(this);
		}

		::System::Void set_MachinePropComponent(::RPG::GameCore::PropComponent* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_MACHINEPROPCOMPONENT_OFFSET))(this, value);
		}

		::UnityEngine::AnimationCurve* get_Curve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_CURVE_OFFSET))(this);
		}

		::System::Single get_CurveDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_CURVEDURATION_OFFSET))(this);
		}

		::System::Int32 get_WalkNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_WALKNUM_OFFSET))(this);
		}

		::System::Void set_WalkNum(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_WALKNUM_OFFSET))(this, value);
		}

		::RPG::Client::RogueGambleMode get_GambleMode()
		{
			return ((::RPG::Client::RogueGambleMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_GAMBLEMODE_OFFSET))(this);
		}

		::System::Void set_GambleMode(::RPG::Client::RogueGambleMode value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueGambleMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_GAMBLEMODE_OFFSET))(this, value);
		}
	};
}
