#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_8271AFF79E02658D;
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

#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GETCHOOSEDMEMBER_OFFSET UNITYSDK_OFFSET(0xBC29250)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GETCURRENTMEMBERLIST_OFFSET UNITYSDK_OFFSET(0xBC29200)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GETSHOWICON_OFFSET UNITYSDK_OFFSET(0xBC29170)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GETSHOWMEMBERUIDS_OFFSET UNITYSDK_OFFSET(0xBC291C0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GETSUBTRAITCONFIGBYUID_OFFSET UNITYSDK_OFFSET(0xBC29630)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GETSUBTRAITDESCBYROLEID_OFFSET UNITYSDK_OFFSET(0xBC29940)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GET_ACTION_OFFSET UNITYSDK_OFFSET(0xBC29F00)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GET_CHOOSEDUID_OFFSET UNITYSDK_OFFSET(0xBC29EC0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GET_CURRENTSUBTRAITCONFIG_OFFSET UNITYSDK_OFFSET(0xBC1F030)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GET_EMBLEMEQUIPIDS_OFFSET UNITYSDK_OFFSET(0xBC29EE0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GET_ISCHOOSED_OFFSET UNITYSDK_OFFSET(0xBC29EA0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GET_ISSUBTRAITACTIVE_OFFSET UNITYSDK_OFFSET(0xBC1FB20)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GET_LASTCHOOSEDUID_OFFSET UNITYSDK_OFFSET(0xBC29ED0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_ONTRAITCHANGE_OFFSET UNITYSDK_OFFSET(0xBC28E80)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xBC287F0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_REGISTERACTION_OFFSET UNITYSDK_OFFSET(0xBC295E0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_SELECTMEMBER_OFFSET UNITYSDK_OFFSET(0xBC29380)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_SET_ACTION_OFFSET UNITYSDK_OFFSET(0xBC29F10)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_SET_CHOOSEDUID_OFFSET UNITYSDK_OFFSET(0xBC28BC0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_SET_EMBLEMEQUIPIDS_OFFSET UNITYSDK_OFFSET(0xBC29EF0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_SET_LASTCHOOSEDUID_OFFSET UNITYSDK_OFFSET(0xBC28B30)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_STARTEDIT_OFFSET UNITYSDK_OFFSET(0xBC1F2C0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__CREATESUBTRAITCONFIG_OFFSET UNITYSDK_OFFSET(0xBC29D80)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xBC28380)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__GETCHOOSEDMEMBER_B__7_0_OFFSET UNITYSDK_OFFSET(0xBC29F20)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__GETSUBTRAITCONFIGBYEQUIPMENT_OFFSET UNITYSDK_OFFSET(0xBC29BB0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__GETSUBTRAITCONFIGBYNPC_OFFSET UNITYSDK_OFFSET(0xBC298E0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__GETSUBTRAITCONFIGBYROLETYPE_OFFSET UNITYSDK_OFFSET(0xBC29A70)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__GETSUBTRAITCONFIGBYROLE_OFFSET UNITYSDK_OFFSET(0xBC29860)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__HANDLEEVENT_OFFSET UNITYSDK_OFFSET(0xBC28C50)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__HANDLEINACTIVE_OFFSET UNITYSDK_OFFSET(0xBC28F20)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__INITEMBLEMEQUIPIDS_OFFSET UNITYSDK_OFFSET(0xBC28540)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT___IFIXBASEPROXY_ONTRAITCHANGE_OFFSET UNITYSDK_OFFSET(0xBC29F90)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT___IFIXBASEPROXY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xBC29F40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitCoreRoleChooseEffect_TypeDefinitionIndex = 61125;

	class GridFightTraitCoreRoleChooseEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _EmblemEquipIDs_k__BackingField; // 0x30
		::RPG::Client::GridFightTraitCoreRoleChooseAction* _Action_k__BackingField; // 0x38
		::RPG::GameCore::GridFightTraitEffectIdConfigRow* _EffectRow; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _CoreMemberUIDs; // 0x48
		::System::UInt32 _LastChoosedUID; // 0x50
		::System::UInt32 _ChoosedUID; // 0x54
		::System::UInt32 _GainFrontAvatarID; // 0x58

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnUpdate(::Class_1_8271AFF79E02658D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8271AFF79E02658D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_ONUPDATE_OFFSET))(this, a1);
		}

		::System::Void OnTraitChange(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_ONTRAITCHANGE_OFFSET))(this, a1, a2);
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

		::System::Void SelectMember(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_SELECTMEMBER_OFFSET))(this, a1);
		}

		::System::Void RegisterAction(::RPG::Client::GridFightTraitCoreRoleChooseAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitCoreRoleChooseAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_REGISTERACTION_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitSubTraitConfig* GetSubTraitConfigByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightTraitSubTraitConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GETSUBTRAITCONFIGBYUID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetSubTraitDescByRoleID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GETSUBTRAITDESCBYROLEID_OFFSET))(this, a1);
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

		::RPG::Client::GridFightTraitSubTraitConfig* _GetSubTraitConfigByRole(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::Client::GridFightTraitSubTraitConfig*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__GETSUBTRAITCONFIGBYROLE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitSubTraitConfig* _GetSubTraitConfigByNpc(::RPG::Client::GridFightNPC* a1)
		{
			return ((::RPG::Client::GridFightTraitSubTraitConfig*(*)(::PVOID, ::RPG::Client::GridFightNPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__GETSUBTRAITCONFIGBYNPC_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitSubTraitConfig* _GetSubTraitConfigByRoleType(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::Client::GridFightTraitSubTraitConfig*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__GETSUBTRAITCONFIGBYROLETYPE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitSubTraitConfig* _GetSubTraitConfigByEquipment(::RPG::Client::GridFightEquipComponent* a1)
		{
			return ((::RPG::Client::GridFightTraitSubTraitConfig*(*)(::PVOID, ::RPG::Client::GridFightEquipComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__GETSUBTRAITCONFIGBYEQUIPMENT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitSubTraitConfig* _CreateSubTraitConfig(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightTraitSubTraitConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__CREATESUBTRAITCONFIG_OFFSET))(this, a1);
		}

		::System::Boolean get_IsChoosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GET_ISCHOOSED_OFFSET))(this);
		}

		::System::UInt32 get_ChoosedUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GET_CHOOSEDUID_OFFSET))(this);
		}

		::System::Void set_ChoosedUID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_SET_CHOOSEDUID_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastChoosedUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GET_LASTCHOOSEDUID_OFFSET))(this);
		}

		::System::Void set_LastChoosedUID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_SET_LASTCHOOSEDUID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_EmblemEquipIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GET_EMBLEMEQUIPIDS_OFFSET))(this);
		}

		::System::Void set_EmblemEquipIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_SET_EMBLEMEQUIPIDS_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitCoreRoleChooseAction* get_Action()
		{
			return ((::RPG::Client::GridFightTraitCoreRoleChooseAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GET_ACTION_OFFSET))(this);
		}

		::System::Void set_Action(::RPG::Client::GridFightTraitCoreRoleChooseAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitCoreRoleChooseAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_SET_ACTION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSubTraitActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GET_ISSUBTRAITACTIVE_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitSubTraitConfig* get_CurrentSubTraitConfig()
		{
			return ((::RPG::Client::GridFightTraitSubTraitConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT_GET_CURRENTSUBTRAITCONFIG_OFFSET))(this);
		}

		::System::Boolean _GetChoosedMember_b__7_0(::RPG::Client::GridFightGridMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT__GETCHOOSEDMEMBER_B__7_0_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnUpdate(::Class_1_8271AFF79E02658D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8271AFF79E02658D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT___IFIXBASEPROXY_ONUPDATE_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnTraitChange(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLECHOOSEEFFECT___IFIXBASEPROXY_ONTRAITCHANGE_OFFSET))(this, a1, a2);
		}
	};
}
