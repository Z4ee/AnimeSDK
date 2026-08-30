#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightModifierEffectType.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_872;
class Class_1_B8E6D5AD8534D123;
class Class_1_D40936EF3BF54118_39;
namespace RPG::Client { class GridFightGameModifier; }
namespace RPG::Client { class GridFightMonsterHPSetRatioModifier; }
namespace RPG::Client { class IGridFightStageNode; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_ADDMODIFIERADD_OFFSET UNITYSDK_OFFSET(0x1BC2F6F0)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_ADD_ONMODIFIERADD_OFFSET UNITYSDK_OFFSET(0x1BC2E890)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_ADD_ONMODIFIERREMOVE_OFFSET UNITYSDK_OFFSET(0x1BC2EA10)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_ADD_ONMODIFIERUPDATE_OFFSET UNITYSDK_OFFSET(0x1BC2E950)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_APPLYMODIFIERS_OFFSET UNITYSDK_OFFSET(0x1BC2F200)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_GETMODIFIEDNODETYPE_OFFSET UNITYSDK_OFFSET(0x1BC2FDE0)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_GETMODIFIERBYEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x1BC2FA40)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_GETMODIFIERBYUID_OFFSET UNITYSDK_OFFSET(0x1BC2FB20)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_GETMODIFIERHPEFFECT_OFFSET UNITYSDK_OFFSET(0x1BC30680)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_GETMODIFIER_1_OFFSET UNITYSDK_OFFSET(0x1BC2F960)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_GETMODIFIER_OFFSET UNITYSDK_OFFSET(0x1BC2F780)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_GETRICHTEXTMODIFIERS_OFFSET UNITYSDK_OFFSET(0x1BC2F880)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_GET_CURMODIFIER_OFFSET UNITYSDK_OFFSET(0x1BC2E720)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_GET_MONSTERHPMODIFIER_OFFSET UNITYSDK_OFFSET(0x1BC30610)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_HASMODIFIER_1_OFFSET UNITYSDK_OFFSET(0x1BC2FCA0)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_HASMODIFIER_OFFSET UNITYSDK_OFFSET(0x1BC2FC20)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_ISIGNOREPOPULATION_OFFSET UNITYSDK_OFFSET(0x1BC30510)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_ISPRAYQUESTACTIVITED_OFFSET UNITYSDK_OFFSET(0x1BC309C0)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_REMOVE_ONMODIFIERADD_OFFSET UNITYSDK_OFFSET(0x1BC2E8F0)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_REMOVE_ONMODIFIERREMOVE_OFFSET UNITYSDK_OFFSET(0x1BC2EA70)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_REMOVE_ONMODIFIERUPDATE_OFFSET UNITYSDK_OFFSET(0x1BC2E9B0)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x1BC2EAD0)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_TRYGETTRAITLIMITLAYER_OFFSET UNITYSDK_OFFSET(0x1BC303E0)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_UPDATEADD_OFFSET UNITYSDK_OFFSET(0x1BC2EEE0)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_UPDATEREMOVE_OFFSET UNITYSDK_OFFSET(0x1BC2F540)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO__APPLYMODIFIERS_B__18_0_OFFSET UNITYSDK_OFFSET(0x1BC30BA0)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO__APPLYMODIFIERS_B__18_1_OFFSET UNITYSDK_OFFSET(0x1BC30BC0)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO__APPLYMODIFIERS_B__18_2_OFFSET UNITYSDK_OFFSET(0x1BC30BE0)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC30AE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModifierInfo_TypeDefinitionIndex = 65099;

	class GridFightModifierInfo : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::Client::GridFightGameModifier*>* OnModifierAdd; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameModifier*>* _Modifiers; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameModifier*>* _RemovedModifiers; // 0x20
		::System::Action_1<::RPG::Client::GridFightGameModifier*>* OnModifierRemove; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameModifier*>* _UpdatedModifiers; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameModifier*>* _AddedModifiers; // 0x38
		::System::Action_1<::RPG::Client::GridFightGameModifier*>* OnModifierUpdate; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightModifierInfo* get_CurModifier()
		{
			return ((::RPG::Client::GridFightModifierInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_GET_CURMODIFIER_OFFSET))();
		}

		::System::Void add_OnModifierAdd(::System::Action_1<::RPG::Client::GridFightGameModifier*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::GridFightGameModifier*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_ADD_ONMODIFIERADD_OFFSET))(this, a1);
		}

		::System::Void remove_OnModifierAdd(::System::Action_1<::RPG::Client::GridFightGameModifier*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::GridFightGameModifier*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_REMOVE_ONMODIFIERADD_OFFSET))(this, a1);
		}

		::System::Void add_OnModifierUpdate(::System::Action_1<::RPG::Client::GridFightGameModifier*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::GridFightGameModifier*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_ADD_ONMODIFIERUPDATE_OFFSET))(this, a1);
		}

		::System::Void remove_OnModifierUpdate(::System::Action_1<::RPG::Client::GridFightGameModifier*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::GridFightGameModifier*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_REMOVE_ONMODIFIERUPDATE_OFFSET))(this, a1);
		}

		::System::Void add_OnModifierRemove(::System::Action_1<::RPG::Client::GridFightGameModifier*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::GridFightGameModifier*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_ADD_ONMODIFIERREMOVE_OFFSET))(this, a1);
		}

		::System::Void remove_OnModifierRemove(::System::Action_1<::RPG::Client::GridFightGameModifier*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::GridFightGameModifier*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_REMOVE_ONMODIFIERREMOVE_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_D40936EF3BF54118_39* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_39*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void UpdateAdd(::Class_1_B8E6D5AD8534D123* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_UPDATEADD_OFFSET))(this, a1);
		}

		::System::Void UpdateRemove(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_UPDATEREMOVE_OFFSET))(this, a1);
		}

		::System::Void ApplyModifiers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_APPLYMODIFIERS_OFFSET))(this);
		}

		::System::Void AddModifierAdd(::System::Action_1<::RPG::Client::GridFightGameModifier*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::GridFightGameModifier*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_ADDMODIFIERADD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameModifier*>* GetModifier(::System::Func_2<::RPG::Client::GridFightGameModifier*, ::System::Boolean>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameModifier*>*(*)(::PVOID, ::System::Func_2<::RPG::Client::GridFightGameModifier*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_GETMODIFIER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_872*>* GetRichTextModifiers()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_872*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_GETRICHTEXTMODIFIERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameModifier*>* GetModifier_1(::System::Type* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameModifier*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_GETMODIFIER_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameModifier*>* GetModifierByEffectType(::RPG::Client::GridFightModifierEffectType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameModifier*>*(*)(::PVOID, ::RPG::Client::GridFightModifierEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_GETMODIFIERBYEFFECTTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGameModifier* GetModifierByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightGameModifier*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_GETMODIFIERBYUID_OFFSET))(this, a1);
		}

		::System::Boolean HasModifier(::System::Func_2<::RPG::Client::GridFightGameModifier*, ::System::Boolean>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Func_2<::RPG::Client::GridFightGameModifier*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_HASMODIFIER_OFFSET))(this, a1);
		}

		::System::Boolean HasModifier_1(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_HASMODIFIER_1_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightNodeType GetModifiedNodeType(::RPG::Client::IGridFightStageNode* a1)
		{
			return ((::RPG::GameCore::GridFightNodeType(*)(::PVOID, ::RPG::Client::IGridFightStageNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_GETMODIFIEDNODETYPE_OFFSET))(this, a1);
		}

		::System::Boolean TryGetTraitLimitLayer(::System::UInt32 a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_TRYGETTRAITLIMITLAYER_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsIgnorePopulation(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_ISIGNOREPOPULATION_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightMonsterHPSetRatioModifier* get_MonsterHPModifier()
		{
			return ((::RPG::Client::GridFightMonsterHPSetRatioModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_GET_MONSTERHPMODIFIER_OFFSET))(this);
		}

		::RPG::Client::GridFightMonsterHPSetRatioModifier* GetModifierHpEffect(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightMonsterHPSetRatioModifier*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_GETMODIFIERHPEFFECT_OFFSET))(this, a1);
		}

		::System::Boolean IsPrayQuestActivited(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_ISPRAYQUESTACTIVITED_OFFSET))(this, a1);
		}

		::System::Void _ApplyModifiers_b__18_0(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO__APPLYMODIFIERS_B__18_0_OFFSET))(this, a1);
		}

		::System::Void _ApplyModifiers_b__18_1(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO__APPLYMODIFIERS_B__18_1_OFFSET))(this, a1);
		}

		::System::Void _ApplyModifiers_b__18_2(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO__APPLYMODIFIERS_B__18_2_OFFSET))(this, a1);
		}
	};
}
