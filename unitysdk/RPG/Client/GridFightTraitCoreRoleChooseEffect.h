#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_4A27993D27FC5C67;
namespace RPG::Client { class GridFightEquipComponent; }
namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class GridFightNPC; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitCoreRoleChooseAction; }
namespace RPG::Client { class GridFightTraitSubTraitConfig; }
namespace RPG::GameCore { class GridFightTraitEffectIdConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GETCHOOSEDMEMBER_OFFSET UNITYSDK_OFFSET(0x98D0AA0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GETCURRENTMEMBERLIST_OFFSET UNITYSDK_OFFSET(0x98D0A50)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GETSHOWICON_OFFSET UNITYSDK_OFFSET(0x98D0730)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GETSHOWMEMBERUIDS_OFFSET UNITYSDK_OFFSET(0x98D0A10)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GETSUBTRAITCONFIGBYUID_OFFSET UNITYSDK_OFFSET(0x98D0E30)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GETSUBTRAITDESCBYROLEID_OFFSET UNITYSDK_OFFSET(0x98D1120)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x98D1760)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GET_CHOOSEDUID_OFFSET UNITYSDK_OFFSET(0x98D1720)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GET_CURRENTSUBTRAITCONFIG_OFFSET UNITYSDK_OFFSET(0x98D17F0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GET_EMBLEMEQUIPIDS_OFFSET UNITYSDK_OFFSET(0x98D1740)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GET_ISCHOOSED_OFFSET UNITYSDK_OFFSET(0x98D1700)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GET_ISSUBTRAITACTIVE_OFFSET UNITYSDK_OFFSET(0x98D1780)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GET_LASTCHOOSEDUID_OFFSET UNITYSDK_OFFSET(0x98D1730)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_ONTRAITCHANGE_OFFSET UNITYSDK_OFFSET(0x98D0410)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x98CFDB0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_REGISTERACTION_OFFSET UNITYSDK_OFFSET(0x98D0DE0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_SELECTMEMBER_OFFSET UNITYSDK_OFFSET(0x98D0B90)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_SET_ACTION_OFFSET UNITYSDK_OFFSET(0x98D1770)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_SET_CHOOSEDUID_OFFSET UNITYSDK_OFFSET(0x98D0160)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_SET_EMBLEMEQUIPIDS_OFFSET UNITYSDK_OFFSET(0x98D1750)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_SET_LASTCHOOSEDUID_OFFSET UNITYSDK_OFFSET(0x98D00D0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_STARTEDIT_OFFSET UNITYSDK_OFFSET(0x98D0780)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__CREATESUBTRAITCONFIG_OFFSET UNITYSDK_OFFSET(0x98D1560)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x98CF950)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__GETCHOOSEDMEMBER_B__7_0_OFFSET UNITYSDK_OFFSET(0x98D1840)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__GETSUBTRAITCONFIGBYEQUIPMENT_OFFSET UNITYSDK_OFFSET(0x98D1360)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__GETSUBTRAITCONFIGBYNPC_OFFSET UNITYSDK_OFFSET(0x98D10C0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__GETSUBTRAITCONFIGBYROLETYPE_OFFSET UNITYSDK_OFFSET(0x98D1220)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__GETSUBTRAITCONFIGBYROLE_OFFSET UNITYSDK_OFFSET(0x98D1040)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__HANDLEEVENT_OFFSET UNITYSDK_OFFSET(0x98D01F0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__HANDLEINACTIVE_OFFSET UNITYSDK_OFFSET(0x98D04B0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__INITEMBLEMEQUIPIDS_OFFSET UNITYSDK_OFFSET(0x98CFB90)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT___IFIXBASEPROXY_ONTRAITCHANGE_OFFSET UNITYSDK_OFFSET(0x98D18B0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT___IFIXBASEPROXY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x98D1860)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitCoreRoleChooseEffect_TypeDefinitionIndex = 53086;

	class GridFightTraitCoreRoleChooseEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _CoreMemberUIDs; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _EmblemEquipIDs_k__BackingField; // 0x38
		::RPG::GameCore::GridFightTraitEffectIdConfigRow* _EffectRow; // 0x40
		::RPG::Client::GridFightTraitCoreRoleChooseAction* _Action_k__BackingField; // 0x48
		::System::UInt32 _LastChoosedUID; // 0x50
		::System::UInt32 _GainFrontAvatarID; // 0x54
		::System::UInt32 _ChoosedUID; // 0x58

		::System::Void _ctor(::System::UInt32 id, ::RPG::Client::GridFightTrait* trait)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__CTOR_OFFSET))(this, id, trait);
		}

		::System::Void OnUpdate(::Class_1_4A27993D27FC5C67* effect)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4A27993D27FC5C67*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_ONUPDATE_OFFSET))(this, effect);
		}

		::System::Void OnTraitChange(::System::UInt32 layer, ::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_ONTRAITCHANGE_OFFSET))(this, layer, isActive);
		}

		::System::String* GetShowIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GETSHOWICON_OFFSET))(this);
		}

		::System::Void StartEdit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_STARTEDIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetShowMemberUIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GETSHOWMEMBERUIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGridMember*>* GetCurrentMemberList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGridMember*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GETCURRENTMEMBERLIST_OFFSET))(this);
		}

		::RPG::Client::GridFightGridMember* GetChoosedMember()
		{
			return ((::RPG::Client::GridFightGridMember*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GETCHOOSEDMEMBER_OFFSET))(this);
		}

		::System::Void SelectMember(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_SELECTMEMBER_OFFSET))(this, uid);
		}

		::System::Void RegisterAction(::RPG::Client::GridFightTraitCoreRoleChooseAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitCoreRoleChooseAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_REGISTERACTION_OFFSET))(this, action);
		}

		::RPG::Client::GridFightTraitSubTraitConfig* GetSubTraitConfigByUID(::System::UInt32 uid)
		{
			return ((::RPG::Client::GridFightTraitSubTraitConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GETSUBTRAITCONFIGBYUID_OFFSET))(this, uid);
		}

		::RPG::Client::TextID GetSubTraitDescByRoleID(::System::UInt32 roleID)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GETSUBTRAITDESCBYROLEID_OFFSET))(this, roleID);
		}

		::System::Void _HandleEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__HANDLEEVENT_OFFSET))(this);
		}

		::System::Void _InitEmblemEquipIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__INITEMBLEMEQUIPIDS_OFFSET))(this);
		}

		::System::Void _HandleInActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__HANDLEINACTIVE_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitSubTraitConfig* _GetSubTraitConfigByRole(::RPG::Client::GridFightRole* role)
		{
			return ((::RPG::Client::GridFightTraitSubTraitConfig*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__GETSUBTRAITCONFIGBYROLE_OFFSET))(this, role);
		}

		::RPG::Client::GridFightTraitSubTraitConfig* _GetSubTraitConfigByNpc(::RPG::Client::GridFightNPC* npc)
		{
			return ((::RPG::Client::GridFightTraitSubTraitConfig*(*)(::PVOID, ::RPG::Client::GridFightNPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__GETSUBTRAITCONFIGBYNPC_OFFSET))(this, npc);
		}

		::RPG::Client::GridFightTraitSubTraitConfig* _GetSubTraitConfigByRoleType(::RPG::Client::GridFightRole* role)
		{
			return ((::RPG::Client::GridFightTraitSubTraitConfig*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__GETSUBTRAITCONFIGBYROLETYPE_OFFSET))(this, role);
		}

		::RPG::Client::GridFightTraitSubTraitConfig* _GetSubTraitConfigByEquipment(::RPG::Client::GridFightEquipComponent* equipComponent)
		{
			return ((::RPG::Client::GridFightTraitSubTraitConfig*(*)(::PVOID, ::RPG::Client::GridFightEquipComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__GETSUBTRAITCONFIGBYEQUIPMENT_OFFSET))(this, equipComponent);
		}

		::RPG::Client::GridFightTraitSubTraitConfig* _CreateSubTraitConfig(::System::UInt32 subTraitID)
		{
			return ((::RPG::Client::GridFightTraitSubTraitConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__CREATESUBTRAITCONFIG_OFFSET))(this, subTraitID);
		}

		::System::Boolean get_IsChoosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GET_ISCHOOSED_OFFSET))(this);
		}

		::System::UInt32 get_ChoosedUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GET_CHOOSEDUID_OFFSET))(this);
		}

		::System::Void set_ChoosedUID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_SET_CHOOSEDUID_OFFSET))(this, value);
		}

		::System::UInt32 get_LastChoosedUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GET_LASTCHOOSEDUID_OFFSET))(this);
		}

		::System::Void set_LastChoosedUID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_SET_LASTCHOOSEDUID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_EmblemEquipIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GET_EMBLEMEQUIPIDS_OFFSET))(this);
		}

		::System::Void set_EmblemEquipIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_SET_EMBLEMEQUIPIDS_OFFSET))(this, value);
		}

		::RPG::Client::GridFightTraitCoreRoleChooseAction* get_Action()
		{
			return ((::RPG::Client::GridFightTraitCoreRoleChooseAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GET_ACTION_OFFSET))(this);
		}

		::System::Void set_Action(::RPG::Client::GridFightTraitCoreRoleChooseAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitCoreRoleChooseAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_SET_ACTION_OFFSET))(this, value);
		}

		::System::Boolean get_IsSubTraitActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GET_ISSUBTRAITACTIVE_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitSubTraitConfig* get_CurrentSubTraitConfig()
		{
			return ((::RPG::Client::GridFightTraitSubTraitConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GET_CURRENTSUBTRAITCONFIG_OFFSET))(this);
		}

		::System::Boolean _GetChoosedMember_b__7_0(::RPG::Client::GridFightGridMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__GETCHOOSEDMEMBER_B__7_0_OFFSET))(this, x);
		}

		::System::Void __iFixBaseProxy_OnUpdate(::Class_1_4A27993D27FC5C67* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4A27993D27FC5C67*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT___IFIXBASEPROXY_ONUPDATE_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnTraitChange(::System::UInt32 P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT___IFIXBASEPROXY_ONTRAITCHANGE_OFFSET))(this, P0, P1);
		}
	};
}
