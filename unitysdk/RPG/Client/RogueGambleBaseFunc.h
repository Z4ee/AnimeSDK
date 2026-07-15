#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueGambleMode.h"
#include "unitysdk/RPG/GameCore/RogueGambleMachineType.h"
#include "unitysdk/System/Object.h"

class Class_1_7BFB07C3AB2D97E4_2;
class Class_1_E577B5580A99D425_4;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RogueGambleGroupData; }
namespace RPG::Client { class RogueGambleUnitData; }
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_BINGOGROUPDATA_OFFSET UNITYSDK_OFFSET(0x1A45AE60)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_BINGOUNITDATA_OFFSET UNITYSDK_OFFSET(0x1A45AE80)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_COSTITEMLIST_OFFSET UNITYSDK_OFFSET(0x1A45AE20)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_CURVEDURATION_OFFSET UNITYSDK_OFFSET(0x1A45AFA0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x1A45AEC0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_GAMBLEMODE_OFFSET UNITYSDK_OFFSET(0x1A45B020)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1A45ADC0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_MACHINEID_OFFSET UNITYSDK_OFFSET(0x1A45AD80)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_MACHINEPROPCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A45AEA0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_MACHINETYPE_OFFSET UNITYSDK_OFFSET(0x1A45ADA0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_MAXUSECOUNT_OFFSET UNITYSDK_OFFSET(0x1A45ADE0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_ROGUEGAMBLEGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0x1A45AE40)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_USEDCOUNT_OFFSET UNITYSDK_OFFSET(0x1A45AE00)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_GET_WALKNUM_OFFSET UNITYSDK_OFFSET(0x1A45B000)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_INIT_OFFSET UNITYSDK_OFFSET(0x1A45A260)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0x1A45AA40)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_REFRESH_OFFSET UNITYSDK_OFFSET(0x1A45A710)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_RELEASESPRITE_OFFSET UNITYSDK_OFFSET(0x1A45AAE0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SETBINGODATA_OFFSET UNITYSDK_OFFSET(0x1A45A5A0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SETPROPCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A45A9A0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SETUPPROPTEXTURE_OFFSET UNITYSDK_OFFSET(0x1A45AA90)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SETWALKNUM_OFFSET UNITYSDK_OFFSET(0x1A45A9F0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_BINGOGROUPDATA_OFFSET UNITYSDK_OFFSET(0x1A45AE70)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_BINGOUNITDATA_OFFSET UNITYSDK_OFFSET(0x1A45AE90)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_COSTITEMLIST_OFFSET UNITYSDK_OFFSET(0x1A45AE30)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_GAMBLEMODE_OFFSET UNITYSDK_OFFSET(0x1A45B030)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1A45ADD0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_MACHINEID_OFFSET UNITYSDK_OFFSET(0x1A45AD90)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_MACHINEPROPCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A45AEB0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_MACHINETYPE_OFFSET UNITYSDK_OFFSET(0x1A45ADB0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_MAXUSECOUNT_OFFSET UNITYSDK_OFFSET(0x1A45ADF0)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_ROGUEGAMBLEGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0x1A45AE50)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_USEDCOUNT_OFFSET UNITYSDK_OFFSET(0x1A45AE10)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_SET_WALKNUM_OFFSET UNITYSDK_OFFSET(0x1A45B010)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC_TRIGGERPROPROLL_OFFSET UNITYSDK_OFFSET(0x1A45AB20)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A45B040)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC__SETMACHINETYPE_OFFSET UNITYSDK_OFFSET(0x1A45AB60)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC__SETUPGAMBLEGROUPDATALIST_1_OFFSET UNITYSDK_OFFSET(0x1A45A880)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC__SETUPGAMBLEGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0x1A45A380)
#define RPG_CLIENT_ROGUEGAMBLEBASEFUNC__SORTGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0x1A45ABE0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueGambleBaseFunc_TypeDefinitionIndex = 64234;

	class RogueGambleBaseFunc : public ::System::Object
	{
	public:
		::RPG::Client::RogueGambleGroupData* _BingoGroupData_k__BackingField; // 0x10
		::RPG::GameCore::PropComponent* _MachinePropComponent_k__BackingField; // 0x18
		::RPG::Client::RogueGambleUnitData* _BingoUnitData_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* _CostItemList_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::RogueGambleGroupData*>* _RogueGambleGroupDataList_k__BackingField; // 0x30
		::System::UInt32 _UsedCount_k__BackingField; // 0x38
		::RPG::GameCore::RogueGambleMachineType _MachineType_k__BackingField; // 0x3C
		::System::Int32 _WalkNum_k__BackingField; // 0x40
		::RPG::Client::RogueGambleMode _GambleMode_k__BackingField; // 0x44
		::System::UInt32 _MachineID_k__BackingField; // 0x48
		::System::UInt32 _MaxUseCount_k__BackingField; // 0x4C
		::System::Boolean _IsValid_k__BackingField; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC__CTOR_OFFSET))(this);
		}

		::System::Void Init(::Class_1_E577B5580A99D425_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E577B5580A99D425_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC_INIT_OFFSET))(this, a1);
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

		::System::Void _SetupGambleGroupDataList(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7BFB07C3AB2D97E4_2*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7BFB07C3AB2D97E4_2*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEGAMBLEBASEFUNC__SETUPGAMBLEGROUPDATALIST_OFFSET))(this, a1);
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
