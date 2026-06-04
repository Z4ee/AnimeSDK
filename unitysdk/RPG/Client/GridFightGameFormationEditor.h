#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameFormationEditor_EditorType.h"
#include "unitysdk/System/Object.h"

class Class_1_554535650EEC6F9F;
namespace RPG::Client { class GridFightEquipCraftMapInfo; }
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightFormationRole; }
namespace RPG::Client { class GridFightFormationTeam; }
namespace RPG::Client { class GridFightGameFormation; }
namespace RPG::Client { class GridFightGameFormationEditor_EditEvent; }
namespace RPG::Client { class GridFightGameFormationEditor_EquipDressRule; }
namespace RPG::Client { class GridFightGameFormationEditor_Filter; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightRoleConfig; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDBASICRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0xBB566B0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDCORE_OFFSET UNITYSDK_OFFSET(0xBB561B0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDEDITCALLBACK_OFFSET UNITYSDK_OFFSET(0xBB529D0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDEQUIP_OFFSET UNITYSDK_OFFSET(0xBB55400)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0xBB567F0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CANADDCORE_OFFSET UNITYSDK_OFFSET(0xBB56130)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CANDRESS_OFFSET UNITYSDK_OFFSET(0xBB50C00)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CANPUTROLE_OFFSET UNITYSDK_OFFSET(0xBB524E0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CANPUT_OFFSET UNITYSDK_OFFSET(0xBB53310)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_COMPOSITEEQUIP_OFFSET UNITYSDK_OFFSET(0xBB56520)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CONTAINSROLEID_OFFSET UNITYSDK_OFFSET(0xBB53CB0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_DELETE_OFFSET UNITYSDK_OFFSET(0xBB57CB0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_EDITDESC_OFFSET UNITYSDK_OFFSET(0xBB53BF0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_EDITTITLE_OFFSET UNITYSDK_OFFSET(0xBB53B30)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETALLEQUIPOPTIONS_OFFSET UNITYSDK_OFFSET(0xBB52040)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETALLROLEOPTIONS_OFFSET UNITYSDK_OFFSET(0xBB51A70)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETFILTER_OFFSET UNITYSDK_OFFSET(0xBB50D30)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETFIRSTEMPTYINDEX_1_OFFSET UNITYSDK_OFFSET(0xBB54420)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETFIRSTEMPTYINDEX_OFFSET UNITYSDK_OFFSET(0xBB542B0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETROLEPOS_OFFSET UNITYSDK_OFFSET(0xBB53E40)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_CURTEAM_OFFSET UNITYSDK_OFFSET(0xBB52A20)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_EARLYTEAM_OFFSET UNITYSDK_OFFSET(0xBB529B0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_FINALTEAM_OFFSET UNITYSDK_OFFSET(0xBB52970)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_MIDTEAM_OFFSET UNITYSDK_OFFSET(0xBB52990)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_RECOMMENDBASICEQUIPS_OFFSET UNITYSDK_OFFSET(0xBB53FD0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_RECOMMENDEQUIPS_OFFSET UNITYSDK_OFFSET(0xBB54140)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET__CUREDITFORMATION_OFFSET UNITYSDK_OFFSET(0xBB528D0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xBB53AE0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_PUTROLE_OFFSET UNITYSDK_OFFSET(0xBB52B40)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVEBASICRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0xBB56930)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVECORE_OFFSET UNITYSDK_OFFSET(0xBB563F0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVEEQUIP_OFFSET UNITYSDK_OFFSET(0xBB55AE0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVERECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0xBB56A80)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVEROLEBYROLEID_OFFSET UNITYSDK_OFFSET(0xBB536E0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVEROLE_OFFSET UNITYSDK_OFFSET(0xBB53530)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SAVE_OFFSET UNITYSDK_OFFSET(0xBB57050)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SETCORE_OFFSET UNITYSDK_OFFSET(0xBB53380)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SETROLESTAR_OFFSET UNITYSDK_OFFSET(0xBB52EC0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SET_EARLYTEAM_OFFSET UNITYSDK_OFFSET(0xBB529C0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SET_FINALTEAM_OFFSET UNITYSDK_OFFSET(0xBB52980)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SET_MIDTEAM_OFFSET UNITYSDK_OFFSET(0xBB529A0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_STARTEDITOR_OFFSET UNITYSDK_OFFSET(0xBB52AF0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SWAPBASICORDER_OFFSET UNITYSDK_OFFSET(0xBB56BD0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SWAPORDER_OFFSET UNITYSDK_OFFSET(0xBB56E10)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SWAPPOS_OFFSET UNITYSDK_OFFSET(0xBB52FE0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_TRYCOMPOSITEEQUIP_OFFSET UNITYSDK_OFFSET(0xBB547E0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xBB58350)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__CTOR_OFFSET UNITYSDK_OFFSET(0xBB4ED10)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__DISPATCHEDITEVENT_OFFSET UNITYSDK_OFFSET(0xBB52D90)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__FINDCRAFTTARGET_OFFSET UNITYSDK_OFFSET(0xBB54BD0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__GETEQUIPORDER_OFFSET UNITYSDK_OFFSET(0xBB582C0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__GETFIRSTEMPTYINDEX_B__61_0_OFFSET UNITYSDK_OFFSET(0xBB586B0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__GETROLEBYPOSINDEX_OFFSET UNITYSDK_OFFSET(0xBB52A90)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__ISPOSINDEXSUPPORT_OFFSET UNITYSDK_OFFSET(0xBB54670)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__REMOVEEQUIPREQUIEDBYEMBLEM_OFFSET UNITYSDK_OFFSET(0xBB55D10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor_TypeDefinitionIndex = 60414;

	class GridFightGameFormationEditor : public ::System::Object
	{
	public:
		static ::Il2CppArray<::RPG::Client::GridFightGameFormationEditor_EquipDressRule*>** StaticGet__DressRules()
		{
			return (::Il2CppArray<::RPG::Client::GridFightGameFormationEditor_EquipDressRule*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationEditor_TypeDefinitionIndex)->GetStaticField(0x4120);
		}
		static ::RPG::Client::GridFightGameFormationEditor_EditEvent** StaticGet__EditEvent()
		{
			return (::RPG::Client::GridFightGameFormationEditor_EditEvent**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameFormationEditor_TypeDefinitionIndex)->GetStaticField(0x4128);
		}
		::RPG::Client::GridFightFormationTeam* _MidTeam_k__BackingField; // 0x10
		::RPG::Client::GridFightFormationTeam* _EarlyTeam_k__BackingField; // 0x18
		::RPG::Client::GridFightFormationTeam* _FinalTeam_k__BackingField; // 0x20
		::System::Action_1<::RPG::Client::GridFightGameFormationEditor_EditEvent*>* OnEdit; // 0x28
		::RPG::Client::GridFightGameFormation* _Formation; // 0x30
		::RPG::Client::GridFightGameFormationEditor_EditorType CurEditorType; // 0x38

		::System::Void _ctor(::RPG::Client::GridFightGameFormation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__CCTOR_OFFSET))();
		}

		::RPG::Client::GridFightGameFormationEditor_EquipDressRule* CanDress(::RPG::Client::GridFightFormationRole* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightGameFormationEditor_EquipDressRule*(*)(::PVOID, ::RPG::Client::GridFightFormationRole*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CANDRESS_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightGameFormationEditor_Filter* GetFilter()
		{
			return ((::RPG::Client::GridFightGameFormationEditor_Filter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETFILTER_OFFSET))(this);
		}

		::System::Boolean CanPutRole(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CANPUTROLE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightFormationTeam* get_FinalTeam()
		{
			return ((::RPG::Client::GridFightFormationTeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_FINALTEAM_OFFSET))(this);
		}

		::System::Void set_FinalTeam(::RPG::Client::GridFightFormationTeam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFormationTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SET_FINALTEAM_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightFormationTeam* get_MidTeam()
		{
			return ((::RPG::Client::GridFightFormationTeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_MIDTEAM_OFFSET))(this);
		}

		::System::Void set_MidTeam(::RPG::Client::GridFightFormationTeam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFormationTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SET_MIDTEAM_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightFormationTeam* get_EarlyTeam()
		{
			return ((::RPG::Client::GridFightFormationTeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_EARLYTEAM_OFFSET))(this);
		}

		::System::Void set_EarlyTeam(::RPG::Client::GridFightFormationTeam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFormationTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SET_EARLYTEAM_OFFSET))(this, a1);
		}

		::System::Void AddEditCallback(::System::Action_1<::RPG::Client::GridFightGameFormationEditor_EditEvent*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::GridFightGameFormationEditor_EditEvent*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDEDITCALLBACK_OFFSET))(this, a1);
		}

		::Class_1_554535650EEC6F9F* get__CurEditFormation()
		{
			return ((::Class_1_554535650EEC6F9F*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET__CUREDITFORMATION_OFFSET))(this);
		}

		::RPG::Client::GridFightFormationTeam* get_CurTeam()
		{
			return ((::RPG::Client::GridFightFormationTeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_CURTEAM_OFFSET))(this);
		}

		::RPG::Client::GridFightFormationRole* _GetRoleByPosIndex(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightFormationRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__GETROLEBYPOSINDEX_OFFSET))(this, a1);
		}

		::System::Void StartEditor(::RPG::Client::GridFightGameFormationEditor_EditorType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameFormationEditor_EditorType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_STARTEDITOR_OFFSET))(this, a1);
		}

		::System::Void PutRole(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_PUTROLE_OFFSET))(this, a1, a2);
		}

		::System::Void SetRoleStar(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SETROLESTAR_OFFSET))(this, a1, a2);
		}

		::System::Void SwapPos(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SWAPPOS_OFFSET))(this, a1, a2);
		}

		::System::Boolean CanPut(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CANPUT_OFFSET))(this, a1, a2);
		}

		::System::Void SetCore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SETCORE_OFFSET))(this, a1);
		}

		::System::Void RemoveRole(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVEROLE_OFFSET))(this, a1);
		}

		::System::Void RemoveRoleByRoleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVEROLEBYROLEID_OFFSET))(this, a1);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ISEMPTY_OFFSET))(this);
		}

		::System::Void EditTitle(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_EDITTITLE_OFFSET))(this, a1);
		}

		::System::Void EditDesc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_EDITDESC_OFFSET))(this, a1);
		}

		::System::Boolean ContainsRoleID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CONTAINSROLEID_OFFSET))(this, a1);
		}

		::System::UInt32 GetRolePos(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETROLEPOS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* get_RecommendBasicEquips()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_RECOMMENDBASICEQUIPS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* get_RecommendEquips()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GET_RECOMMENDEQUIPS_OFFSET))(this);
		}

		::System::UInt32 GetFirstEmptyIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETFIRSTEMPTYINDEX_OFFSET))(this);
		}

		::System::UInt32 GetFirstEmptyIndex_1(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETFIRSTEMPTYINDEX_1_OFFSET))(this, a1);
		}

		::System::Boolean _IsPosIndexSupport(::RPG::Client::GridFightRoleConfig* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRoleConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__ISPOSINDEXSUPPORT_OFFSET))(this, a1, a2);
		}

		::System::UInt32 TryCompositeEquip(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_TRYCOMPOSITEEQUIP_OFFSET))(this, a1, a2);
		}

		::System::Void AddEquip(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDEQUIP_OFFSET))(this, a1, a2);
		}

		static ::System::UInt32 _FindCraftTarget(::RPG::Client::GridFightEquipCraftMapInfo* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::RPG::Client::GridFightEquipCraftMapInfo*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__FINDCRAFTTARGET_OFFSET))(a1, a2, a3);
		}

		::System::Void RemoveEquip(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVEEQUIP_OFFSET))(this, a1, a2);
		}

		::System::Void _RemoveEquipRequiedByEmblem(::RPG::Client::GridFightFormationRole* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFormationRole*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__REMOVEEQUIPREQUIEDBYEMBLEM_OFFSET))(this, a1, a2);
		}

		::System::Boolean CanAddCore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_CANADDCORE_OFFSET))(this);
		}

		::System::Void AddCore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDCORE_OFFSET))(this, a1);
		}

		::System::Void RemoveCore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVECORE_OFFSET))(this, a1);
		}

		::System::Void CompositeEquip(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_COMPOSITEEQUIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddBasicRecommendEquip(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDBASICRECOMMENDEQUIP_OFFSET))(this, a1, a2);
		}

		::System::Void AddRecommendEquip(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ADDRECOMMENDEQUIP_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveBasicRecommendEquip(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVEBASICRECOMMENDEQUIP_OFFSET))(this, a1);
		}

		::System::Void RemoveRecommendEquip(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_REMOVERECOMMENDEQUIP_OFFSET))(this, a1);
		}

		::System::Void SwapBasicOrder(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SWAPBASICORDER_OFFSET))(this, a1, a2);
		}

		::System::Void SwapOrder(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SWAPORDER_OFFSET))(this, a1, a2);
		}

		::System::Void Save()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_SAVE_OFFSET))(this);
		}

		::System::Void Delete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_DELETE_OFFSET))(this);
		}

		::System::Void _DispatchEditEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__DISPATCHEDITEVENT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* GetAllRoleOptions()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETALLROLEOPTIONS_OFFSET))(this);
		}

		::System::Int32 _GetEquipOrder(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__GETEQUIPORDER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>* GetAllEquipOptions()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GETALLEQUIPOPTIONS_OFFSET))(this);
		}

		::System::Boolean _GetFirstEmptyIndex_b__61_0(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR__GETFIRSTEMPTYINDEX_B__61_0_OFFSET))(this, a1);
		}
	};
}
