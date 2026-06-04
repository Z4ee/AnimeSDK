#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueGambleMode.h"
#include "unitysdk/RPG/GameCore/RogueGambleMachineType.h"
#include "unitysdk/System/Object.h"

class Class_1_2C8DDB37F88B4DBC_3;
class Class_1_AA7A9E067CD84C14;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RogueGambleGroupData; }
namespace RPG::Client { class RogueGambleUnitData; }
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_BINGOGROUPDATA_OFFSET UNITYSDK_OFFSET(0xC7880F0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_BINGOUNITDATA_OFFSET UNITYSDK_OFFSET(0xC788110)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_COSTITEMLIST_OFFSET UNITYSDK_OFFSET(0xC7880B0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_CURVEDURATION_OFFSET UNITYSDK_OFFSET(0xC788230)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_CURVE_OFFSET UNITYSDK_OFFSET(0xC788150)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_GAMBLEMODE_OFFSET UNITYSDK_OFFSET(0xC7882B0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xC788050)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_MACHINEID_OFFSET UNITYSDK_OFFSET(0xC788010)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_MACHINEPROPCOMPONENT_OFFSET UNITYSDK_OFFSET(0xC788130)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_MACHINETYPE_OFFSET UNITYSDK_OFFSET(0xC788030)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_MAXUSECOUNT_OFFSET UNITYSDK_OFFSET(0xC788070)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_ROGUEGAMBLEGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0xC7880D0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_USEDCOUNT_OFFSET UNITYSDK_OFFSET(0xC788090)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_WALKNUM_OFFSET UNITYSDK_OFFSET(0xC788290)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_INIT_OFFSET UNITYSDK_OFFSET(0xC7876C0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0xC787CD0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_REFRESH_OFFSET UNITYSDK_OFFSET(0xC7879B0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_RELEASESPRITE_OFFSET UNITYSDK_OFFSET(0xC787D70)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SETBINGODATA_OFFSET UNITYSDK_OFFSET(0xC76B440)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SETPROPCOMPONENT_OFFSET UNITYSDK_OFFSET(0xC787C30)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SETUPPROPTEXTURE_OFFSET UNITYSDK_OFFSET(0xC787D20)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SETWALKNUM_OFFSET UNITYSDK_OFFSET(0xC787C80)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_BINGOGROUPDATA_OFFSET UNITYSDK_OFFSET(0xC788100)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_BINGOUNITDATA_OFFSET UNITYSDK_OFFSET(0xC788120)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_COSTITEMLIST_OFFSET UNITYSDK_OFFSET(0xC7880C0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_GAMBLEMODE_OFFSET UNITYSDK_OFFSET(0xC7882C0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0xC788060)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_MACHINEID_OFFSET UNITYSDK_OFFSET(0xC788020)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_MACHINEPROPCOMPONENT_OFFSET UNITYSDK_OFFSET(0xC788140)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_MACHINETYPE_OFFSET UNITYSDK_OFFSET(0xC788040)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_MAXUSECOUNT_OFFSET UNITYSDK_OFFSET(0xC788080)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_ROGUEGAMBLEGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0xC7880E0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_USEDCOUNT_OFFSET UNITYSDK_OFFSET(0xC7880A0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_WALKNUM_OFFSET UNITYSDK_OFFSET(0xC7882A0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_TRIGGERPROPROLL_OFFSET UNITYSDK_OFFSET(0xC787DB0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0xC7882D0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC__SETMACHINETYPE_OFFSET UNITYSDK_OFFSET(0xC787DF0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC__SETUPGAMBLEGROUPDATALIST_1_OFFSET UNITYSDK_OFFSET(0xC787B10)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC__SETUPGAMBLEGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0xC787780)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC__SORTGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0xC787E70)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueGambleBaseFunc_TypeDefinitionIndex = 62867;

	class RogueGambleBaseFunc : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueGambleGroupData*>* _RogueGambleGroupDataList_k__BackingField; // 0x10
		::RPG::GameCore::PropComponent* _MachinePropComponent_k__BackingField; // 0x18
		::RPG::Client::RogueGambleGroupData* _BingoGroupData_k__BackingField; // 0x20
		::RPG::Client::RogueGambleUnitData* _BingoUnitData_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* _CostItemList_k__BackingField; // 0x30
		::System::UInt32 _UsedCount_k__BackingField; // 0x38
		::System::UInt32 _MachineID_k__BackingField; // 0x3C
		::RPG::GameCore::RogueGambleMachineType _MachineType_k__BackingField; // 0x40
		::RPG::Client::RogueGambleMode _GambleMode_k__BackingField; // 0x44
		::System::Boolean _IsValid_k__BackingField; // 0x48
		::System::Int32 _WalkNum_k__BackingField; // 0x4C
		::System::UInt32 _MaxUseCount_k__BackingField; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC__CTOR_OFFSET))(this);
		}

		::System::Void Init(::Class_1_AA7A9E067CD84C14* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_AA7A9E067CD84C14*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_INIT_OFFSET))(this, a1);
		}

		::System::Void SetBingoData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SETBINGODATA_OFFSET))(this, a1, a2);
		}

		::System::Void Refresh(::RPG::Client::RogueGambleBaseFunc* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueGambleBaseFunc*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_REFRESH_OFFSET))(this, a1);
		}

		::System::Void SetPropComponent(::RPG::GameCore::PropComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SETPROPCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void SetWalkNum(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SETWALKNUM_OFFSET))(this, a1);
		}

		::RPG::Client::LuaUIController* OpenFuncUIPage(::System::UInt32 a1)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_OPENFUNCUIPAGE_OFFSET))(this, a1);
		}

		::System::Void SetupPropTexture(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SETUPPROPTEXTURE_OFFSET))(this, a1);
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

		::System::Void _SetupGambleGroupDataList(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2C8DDB37F88B4DBC_3*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2C8DDB37F88B4DBC_3*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC__SETUPGAMBLEGROUPDATALIST_OFFSET))(this, a1);
		}

		::System::Void _SetupGambleGroupDataList_1(::System::Collections::Generic::List_1<::RPG::Client::RogueGambleGroupData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueGambleGroupData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC__SETUPGAMBLEGROUPDATALIST_1_OFFSET))(this, a1);
		}

		::System::Void _SortGroupDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC__SORTGROUPDATALIST_OFFSET))(this);
		}

		::System::UInt32 get_MachineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_MACHINEID_OFFSET))(this);
		}

		::System::Void set_MachineID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_MACHINEID_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueGambleMachineType get_MachineType()
		{
			return ((::RPG::GameCore::RogueGambleMachineType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_MACHINETYPE_OFFSET))(this);
		}

		::System::Void set_MachineType(::RPG::GameCore::RogueGambleMachineType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueGambleMachineType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_MACHINETYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_ISVALID_OFFSET))(this);
		}

		::System::Void set_IsValid(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_ISVALID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxUseCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_MAXUSECOUNT_OFFSET))(this);
		}

		::System::Void set_MaxUseCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_MAXUSECOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_UsedCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_USEDCOUNT_OFFSET))(this);
		}

		::System::Void set_UsedCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_USEDCOUNT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* get_CostItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_COSTITEMLIST_OFFSET))(this);
		}

		::System::Void set_CostItemList(::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_COSTITEMLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueGambleGroupData*>* get_RogueGambleGroupDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueGambleGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_ROGUEGAMBLEGROUPDATALIST_OFFSET))(this);
		}

		::System::Void set_RogueGambleGroupDataList(::System::Collections::Generic::List_1<::RPG::Client::RogueGambleGroupData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueGambleGroupData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_ROGUEGAMBLEGROUPDATALIST_OFFSET))(this, a1);
		}

		::RPG::Client::RogueGambleGroupData* get_BingoGroupData()
		{
			return ((::RPG::Client::RogueGambleGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_BINGOGROUPDATA_OFFSET))(this);
		}

		::System::Void set_BingoGroupData(::RPG::Client::RogueGambleGroupData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueGambleGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_BINGOGROUPDATA_OFFSET))(this, a1);
		}

		::RPG::Client::RogueGambleUnitData* get_BingoUnitData()
		{
			return ((::RPG::Client::RogueGambleUnitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_BINGOUNITDATA_OFFSET))(this);
		}

		::System::Void set_BingoUnitData(::RPG::Client::RogueGambleUnitData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueGambleUnitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_BINGOUNITDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::PropComponent* get_MachinePropComponent()
		{
			return ((::RPG::GameCore::PropComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_MACHINEPROPCOMPONENT_OFFSET))(this);
		}

		::System::Void set_MachinePropComponent(::RPG::GameCore::PropComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_MACHINEPROPCOMPONENT_OFFSET))(this, a1);
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

		::System::Void set_WalkNum(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_WALKNUM_OFFSET))(this, a1);
		}

		::RPG::Client::RogueGambleMode get_GambleMode()
		{
			return ((::RPG::Client::RogueGambleMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_GAMBLEMODE_OFFSET))(this);
		}

		::System::Void set_GambleMode(::RPG::Client::RogueGambleMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueGambleMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_GAMBLEMODE_OFFSET))(this, a1);
		}
	};
}
