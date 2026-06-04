#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_0_16E4307DCC419505_768;
class Class_0_16E4307DCC419505_769;
class Class_0_16E4307DCC419505_771;
class Class_0_16E4307DCC419505_773;
class Class_2_FD0167EB507B9435_7;
namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class GridFightNPC; }
namespace RPG::Client { class GridFightProjection; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTraitConfigBase; }
namespace RPG::Client { class GridFightTraitLayerConfig; }
namespace RPG::Client { class GridFightTraitRemarkParser; }
namespace RPG::Client { class GridFightTraitSubTraitConfig; }
namespace RPG::Client { class IGridFightTraitEffect; }
namespace RPG::Client { class IGridFightTraitShowEffect; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTTRAIT_COMPARETO_OFFSET UNITYSDK_OFFSET(0xBC20D50)
#define RPG_CLIENT_GRIDFIGHTTRAIT_CREATEDUMMY_OFFSET UNITYSDK_OFFSET(0xBC1E090)
#define RPG_CLIENT_GRIDFIGHTTRAIT_CREATE_OFFSET UNITYSDK_OFFSET(0xBC1E000)
#define RPG_CLIENT_GRIDFIGHTTRAIT_EDIT_OFFSET UNITYSDK_OFFSET(0xBC1F080)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GETCURRENTSUBTRAITCONFIG_OFFSET UNITYSDK_OFFSET(0xBC1EF80)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GETEDITICON_OFFSET UNITYSDK_OFFSET(0xBC211D0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GETEFFECT_1_OFFSET UNITYSDK_OFFSET(0xBC1E9E0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GETEFFECT_OFFSET UNITYSDK_OFFSET(0xBC1E8E0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GETMEMBERSONBOARD_OFFSET UNITYSDK_OFFSET(0xBC1EAF0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GETSHOWNEFFECTLIST_OFFSET UNITYSDK_OFFSET(0xBC1EE20)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_ACTIVATEDLAYERCONFIG_OFFSET UNITYSDK_OFFSET(0xBC20D10)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_ACTIVATEDLAYER_OFFSET UNITYSDK_OFFSET(0xBC20BE0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_ALLMEMBERS_OFFSET UNITYSDK_OFFSET(0xBC1EC60)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_CANEDIT_OFFSET UNITYSDK_OFFSET(0xBC20160)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_CANEFFECTSLOT_OFFSET UNITYSDK_OFFSET(0xBC205F0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_CANSHOW_OFFSET UNITYSDK_OFFSET(0xBC205B0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_CANSUMMON_OFFSET UNITYSDK_OFFSET(0xBC202D0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xBC20D00)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_DATACONTEXT_OFFSET UNITYSDK_OFFSET(0xBC21430)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_EFFECTS_OFFSET UNITYSDK_OFFSET(0xBC213F0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_ID_OFFSET UNITYSDK_OFFSET(0xBC1F4F0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0xBC20C80)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_ISSUBTRAITACTIVE_OFFSET UNITYSDK_OFFSET(0xBC20630)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_ISTRACKED_OFFSET UNITYSDK_OFFSET(0xBC20690)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_LAYER_OFFSET UNITYSDK_OFFSET(0xBC207B0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_REMARKPARSER_OFFSET UNITYSDK_OFFSET(0xBC21410)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_SUBTRAITACTIVATEDLAYERCONFIG_OFFSET UNITYSDK_OFFSET(0xBC20D30)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_TEAMREPOSITORY_OFFSET UNITYSDK_OFFSET(0xBC1E2B0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_TRAITPROJECTION_OFFSET UNITYSDK_OFFSET(0xBC202E0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_GET_TRAITREPOSITORY_OFFSET UNITYSDK_OFFSET(0xBC1E1A0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xBC1E3B0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_SETTRAITLAYERMODIFIER_OFFSET UNITYSDK_OFFSET(0xBC21180)
#define RPG_CLIENT_GRIDFIGHTTRAIT_SET_ACTIVATEDLAYERCONFIG_OFFSET UNITYSDK_OFFSET(0xBC20D20)
#define RPG_CLIENT_GRIDFIGHTTRAIT_SET_ACTIVATEDLAYER_OFFSET UNITYSDK_OFFSET(0xBC20BF0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_SET_EFFECTS_OFFSET UNITYSDK_OFFSET(0xBC21400)
#define RPG_CLIENT_GRIDFIGHTTRAIT_SET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0xBC20C90)
#define RPG_CLIENT_GRIDFIGHTTRAIT_SET_LAYER_OFFSET UNITYSDK_OFFSET(0xBC207C0)
#define RPG_CLIENT_GRIDFIGHTTRAIT_SET_REMARKPARSER_OFFSET UNITYSDK_OFFSET(0xBC21420)
#define RPG_CLIENT_GRIDFIGHTTRAIT_SET_SUBTRAITACTIVATEDLAYERCONFIG_OFFSET UNITYSDK_OFFSET(0xBC20D40)
#define RPG_CLIENT_GRIDFIGHTTRAIT_TRACK_OFFSET UNITYSDK_OFFSET(0xBC1FF20)
#define RPG_CLIENT_GRIDFIGHTTRAIT_UNTRACK_OFFSET UNITYSDK_OFFSET(0xBC20040)
#define RPG_CLIENT_GRIDFIGHTTRAIT_UPDATELAYER_OFFSET UNITYSDK_OFFSET(0xBC1E890)
#define RPG_CLIENT_GRIDFIGHTTRAIT__CANEDIT_OFFSET UNITYSDK_OFFSET(0xBC20170)
#define RPG_CLIENT_GRIDFIGHTTRAIT__CHECKPROJECTIONCONDITION_OFFSET UNITYSDK_OFFSET(0xBC1F520)
#define RPG_CLIENT_GRIDFIGHTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xBC1D600)
#define RPG_CLIENT_GRIDFIGHTTRAIT__INITREMARK_OFFSET UNITYSDK_OFFSET(0xBC1D9E0)
#define RPG_CLIENT_GRIDFIGHTTRAIT__INITTRAIT_OFFSET UNITYSDK_OFFSET(0xBC1D780)
#define RPG_CLIENT_GRIDFIGHTTRAIT__ISSUBTRAITACTIVE_OFFSET UNITYSDK_OFFSET(0xBC1FA60)
#define RPG_CLIENT_GRIDFIGHTTRAIT__ONCOREROLECHOOSEPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0xBC21070)
#define RPG_CLIENT_GRIDFIGHTTRAIT__REFRESHACTIVATEDLAYER_OFFSET UNITYSDK_OFFSET(0xBC20840)
#define RPG_CLIENT_GRIDFIGHTTRAIT__REFRESHSUBTRAITACTIVATEDLAYER_OFFSET UNITYSDK_OFFSET(0xBC21010)
#define RPG_CLIENT_GRIDFIGHTTRAIT__UPDATELAYER_OFFSET UNITYSDK_OFFSET(0xBC1DA30)
#define RPG_CLIENT_GRIDFIGHTTRAIT___UPDATELAYER_B__63_0_OFFSET UNITYSDK_OFFSET(0xBC21440)
#define RPG_CLIENT_GRIDFIGHTTRAIT___UPDATELAYER_B__63_1_OFFSET UNITYSDK_OFFSET(0xBC21930)
#define RPG_CLIENT_GRIDFIGHTTRAIT___UPDATELAYER_B__63_2_OFFSET UNITYSDK_OFFSET(0xBC21990)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTrait_TypeDefinitionIndex = 61165;

	class GridFightTrait : public ::Sofa::Core::ObservableObject
	{
	public:
		::RPG::Client::GridFightTraitRemarkParser* _RemarkParser_k__BackingField; // 0x18
		::Class_2_FD0167EB507B9435_7* _TraitLayerModifier; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitEffect*>* _Effects_k__BackingField; // 0x28
		::Class_0_16E4307DCC419505_773* _DataContext; // 0x30
		::RPG::Client::GridFightTraitLayerConfig* _ActivatedLayerConfig_k__BackingField; // 0x38
		::RPG::Client::GridFightTraitConfigBase* _Config_k__BackingField; // 0x40
		::RPG::Client::GridFightTraitLayerConfig* _SubTraitActivatedLayerConfig_k__BackingField; // 0x48
		::System::UInt32 _Layer; // 0x50
		::System::UInt32 _ActivatedLayer; // 0x54
		::System::Boolean _IsActivated; // 0x58

		::System::Void _ctor(::System::UInt32 a1, ::Class_0_16E4307DCC419505_773* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_0_16E4307DCC419505_773*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT__CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::GridFightTrait* Create(::System::UInt32 a1, ::Class_0_16E4307DCC419505_773* a2)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::System::UInt32, ::Class_0_16E4307DCC419505_773*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::GridFightTrait* CreateDummy(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_CREATEDUMMY_OFFSET))(a1);
		}

		::Class_0_16E4307DCC419505_771* get_TraitRepository()
		{
			return ((::Class_0_16E4307DCC419505_771*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_TRAITREPOSITORY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_769* get_teamRepository()
		{
			return ((::Class_0_16E4307DCC419505_769*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_TEAMREPOSITORY_OFFSET))(this);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_768* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_768*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_SETCOLLECTOR_OFFSET))(this, a1);
		}

		::System::Void UpdateLayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_UPDATELAYER_OFFSET))(this);
		}

		::RPG::Client::IGridFightTraitEffect* GetEffect(::System::UInt32 a1)
		{
			return ((::RPG::Client::IGridFightTraitEffect*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GETEFFECT_OFFSET))(this, a1);
		}

		::RPG::Client::IGridFightTraitEffect* GetEffect_1(::RPG::GameCore::GridFightTraitEffectType a1)
		{
			return ((::RPG::Client::IGridFightTraitEffect*(*)(::PVOID, ::RPG::GameCore::GridFightTraitEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GETEFFECT_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGridMember*>* GetMembersOnBoard()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGridMember*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GETMEMBERSONBOARD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>* GetShownEffectList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GETSHOWNEFFECTLIST_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitSubTraitConfig* GetCurrentSubTraitConfig()
		{
			return ((::RPG::Client::GridFightTraitSubTraitConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GETCURRENTSUBTRAITCONFIG_OFFSET))(this);
		}

		::System::Void Edit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_EDIT_OFFSET))(this);
		}

		::System::Void _InitTrait()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT__INITTRAIT_OFFSET))(this);
		}

		::System::Boolean _CheckProjectionCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT__CHECKPROJECTIONCONDITION_OFFSET))(this);
		}

		::System::Boolean _IsSubTraitActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT__ISSUBTRAITACTIVE_OFFSET))(this);
		}

		::System::Void _InitRemark()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT__INITREMARK_OFFSET))(this);
		}

		::System::Void Track()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_TRACK_OFFSET))(this);
		}

		::System::Void Untrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_UNTRACK_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>* get_AllMembers()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_ALLMEMBERS_OFFSET))(this);
		}

		::System::Boolean get_CanEdit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_CANEDIT_OFFSET))(this);
		}

		::System::Boolean get_CanSummon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_CANSUMMON_OFFSET))(this);
		}

		::RPG::Client::GridFightProjection* get_TraitProjection()
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_TRAITPROJECTION_OFFSET))(this);
		}

		::System::Boolean get_CanShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_CANSHOW_OFFSET))(this);
		}

		::System::Boolean get_CanEffectSlot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_CANEFFECTSLOT_OFFSET))(this);
		}

		::System::Boolean get_IsSubTraitActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_ISSUBTRAITACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsTracked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_ISTRACKED_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_Layer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_LAYER_OFFSET))(this);
		}

		::System::Void set_Layer(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_SET_LAYER_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActivatedLayer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_ACTIVATEDLAYER_OFFSET))(this);
		}

		::System::Void set_ActivatedLayer(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_SET_ACTIVATEDLAYER_OFFSET))(this, a1);
		}

		::System::Boolean get_IsActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_ISACTIVATED_OFFSET))(this);
		}

		::System::Void set_IsActivated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_SET_ISACTIVATED_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitConfigBase* get_Config()
		{
			return ((::RPG::Client::GridFightTraitConfigBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_CONFIG_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitLayerConfig* get_ActivatedLayerConfig()
		{
			return ((::RPG::Client::GridFightTraitLayerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_ACTIVATEDLAYERCONFIG_OFFSET))(this);
		}

		::System::Void set_ActivatedLayerConfig(::RPG::Client::GridFightTraitLayerConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitLayerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_SET_ACTIVATEDLAYERCONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitLayerConfig* get_SubTraitActivatedLayerConfig()
		{
			return ((::RPG::Client::GridFightTraitLayerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_SUBTRAITACTIVATEDLAYERCONFIG_OFFSET))(this);
		}

		::System::Void set_SubTraitActivatedLayerConfig(::RPG::Client::GridFightTraitLayerConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitLayerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_SET_SUBTRAITACTIVATEDLAYERCONFIG_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_COMPARETO_OFFSET))(this, a1);
		}

		::System::Void _UpdateLayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT__UPDATELAYER_OFFSET))(this);
		}

		::System::Void _RefreshActivatedLayer(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT__REFRESHACTIVATEDLAYER_OFFSET))(this, a1);
		}

		::System::Void _OnCoreRoleChoosePropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT__ONCOREROLECHOOSEPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshSubTraitActivatedLayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT__REFRESHSUBTRAITACTIVATEDLAYER_OFFSET))(this);
		}

		::System::Void SetTraitLayerModifier(::Class_2_FD0167EB507B9435_7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_FD0167EB507B9435_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_SETTRAITLAYERMODIFIER_OFFSET))(this, a1);
		}

		::System::Boolean _CanEdit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT__CANEDIT_OFFSET))(this);
		}

		::System::String* GetEditIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GETEDITICON_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitEffect*>* get_Effects()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_EFFECTS_OFFSET))(this);
		}

		::System::Void set_Effects(::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitEffect*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitEffect*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_SET_EFFECTS_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitRemarkParser* get_RemarkParser()
		{
			return ((::RPG::Client::GridFightTraitRemarkParser*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_REMARKPARSER_OFFSET))(this);
		}

		::System::Void set_RemarkParser(::RPG::Client::GridFightTraitRemarkParser* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitRemarkParser*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_SET_REMARKPARSER_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_773* get_DataContext()
		{
			return ((::Class_0_16E4307DCC419505_773*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT_GET_DATACONTEXT_OFFSET))(this);
		}

		::System::Int32 __UpdateLayer_b__63_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___UPDATELAYER_B__63_0_OFFSET))(this, a1);
		}

		::System::Boolean __UpdateLayer_b__63_1(::RPG::Client::GridFightNPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightNPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___UPDATELAYER_B__63_1_OFFSET))(this, a1);
		}

		::System::Boolean __UpdateLayer_b__63_2(::RPG::Client::GridFightProjection* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightProjection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___UPDATELAYER_B__63_2_OFFSET))(this, a1);
		}
	};
}
