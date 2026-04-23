#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightModifierEffectType.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"
#include "unitysdk/System/Object.h"

class Class_1_D40936EF3BF54118_36;
class Class_1_EBD9A77671154634;
namespace RPG::Client { class GridFightGameModifier; }
namespace RPG::Client { class GridFightMonsterHPSetRatioModifier; }
namespace RPG::Client { class IGridFightStageNode; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_ADDMODIFIERADD_OFFSET UNITYSDK_OFFSET(0xA4F4E40)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_ADD_ONMODIFIERADD_OFFSET UNITYSDK_OFFSET(0xA4F4450)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_ADD_ONMODIFIERREMOVE_OFFSET UNITYSDK_OFFSET(0xA4F45D0)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_ADD_ONMODIFIERUPDATE_OFFSET UNITYSDK_OFFSET(0xA4F4510)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_APPLYMODIFIERS_OFFSET UNITYSDK_OFFSET(0xA4F4B20)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_GETMODIFIEDNODETYPE_OFFSET UNITYSDK_OFFSET(0xA4F53D0)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_GETMODIFIERBYEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0xA4F5080)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_GETMODIFIERBYUID_OFFSET UNITYSDK_OFFSET(0xA4F5150)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_GETMODIFIERHPEFFECT_OFFSET UNITYSDK_OFFSET(0xA4F59C0)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_GETMODIFIER_1_OFFSET UNITYSDK_OFFSET(0xA4F4FB0)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_GETMODIFIER_OFFSET UNITYSDK_OFFSET(0xA4F4ED0)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_GET_CURMODIFIER_OFFSET UNITYSDK_OFFSET(0xA4F4320)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_GET_MONSTERHPMODIFIER_OFFSET UNITYSDK_OFFSET(0xA4F5980)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_HASMODIFIER_1_OFFSET UNITYSDK_OFFSET(0xA4F52B0)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_HASMODIFIER_OFFSET UNITYSDK_OFFSET(0xA4F5230)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_ISIGNOREPOPULATION_OFFSET UNITYSDK_OFFSET(0xA4F5890)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_REMOVE_ONMODIFIERADD_OFFSET UNITYSDK_OFFSET(0xA4F44B0)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_REMOVE_ONMODIFIERREMOVE_OFFSET UNITYSDK_OFFSET(0xA4F4630)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_REMOVE_ONMODIFIERUPDATE_OFFSET UNITYSDK_OFFSET(0xA4F4570)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xA4F4690)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_TRYGETTRAITLIMITLAYER_OFFSET UNITYSDK_OFFSET(0xA4F5770)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_UPDATEADD_OFFSET UNITYSDK_OFFSET(0xA4F4950)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO_UPDATEREMOVE_OFFSET UNITYSDK_OFFSET(0xA4F4D00)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO__APPLYMODIFIERS_B__18_0_OFFSET UNITYSDK_OFFSET(0xA4F5CF0)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO__APPLYMODIFIERS_B__18_1_OFFSET UNITYSDK_OFFSET(0xA4F5D10)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO__APPLYMODIFIERS_B__18_2_OFFSET UNITYSDK_OFFSET(0xA4F5D30)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA4F5C30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModifierInfo_TypeDefinitionIndex = 59881;

	class GridFightModifierInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameModifier*>* _UpdatedModifiers; // 0x10
		::System::Action_1<::RPG::Client::GridFightGameModifier*>* OnModifierUpdate; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameModifier*>* _Modifiers; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameModifier*>* _AddedModifiers; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameModifier*>* _RemovedModifiers; // 0x30
		::System::Action_1<::RPG::Client::GridFightGameModifier*>* OnModifierAdd; // 0x38
		::System::Action_1<::RPG::Client::GridFightGameModifier*>* OnModifierRemove; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightModifierInfo* get_CurModifier()
		{
			return ((::RPG::Client::GridFightModifierInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_GET_CURMODIFIER_OFFSET))();
		}

		::System::Void add_OnModifierAdd(::System::Action_1<::RPG::Client::GridFightGameModifier*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::GridFightGameModifier*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_ADD_ONMODIFIERADD_OFFSET))(this, value);
		}

		::System::Void remove_OnModifierAdd(::System::Action_1<::RPG::Client::GridFightGameModifier*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::GridFightGameModifier*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_REMOVE_ONMODIFIERADD_OFFSET))(this, value);
		}

		::System::Void add_OnModifierUpdate(::System::Action_1<::RPG::Client::GridFightGameModifier*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::GridFightGameModifier*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_ADD_ONMODIFIERUPDATE_OFFSET))(this, value);
		}

		::System::Void remove_OnModifierUpdate(::System::Action_1<::RPG::Client::GridFightGameModifier*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::GridFightGameModifier*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_REMOVE_ONMODIFIERUPDATE_OFFSET))(this, value);
		}

		::System::Void add_OnModifierRemove(::System::Action_1<::RPG::Client::GridFightGameModifier*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::GridFightGameModifier*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_ADD_ONMODIFIERREMOVE_OFFSET))(this, value);
		}

		::System::Void remove_OnModifierRemove(::System::Action_1<::RPG::Client::GridFightGameModifier*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::GridFightGameModifier*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_REMOVE_ONMODIFIERREMOVE_OFFSET))(this, value);
		}

		::System::Void Sync(::Class_1_D40936EF3BF54118_36* modifierMgrInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_36*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_SYNC_OFFSET))(this, modifierMgrInfo);
		}

		::System::Void UpdateAdd(::Class_1_EBD9A77671154634* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_UPDATEADD_OFFSET))(this, info);
		}

		::System::Void UpdateRemove(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_UPDATEREMOVE_OFFSET))(this, uid);
		}

		::System::Void ApplyModifiers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_APPLYMODIFIERS_OFFSET))(this);
		}

		::System::Void AddModifierAdd(::System::Action_1<::RPG::Client::GridFightGameModifier*>* onModifierAddHander)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::GridFightGameModifier*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_ADDMODIFIERADD_OFFSET))(this, onModifierAddHander);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameModifier*>* GetModifier(::System::Func_2<::RPG::Client::GridFightGameModifier*, ::System::Boolean>* pred)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameModifier*>*(*)(::PVOID, ::System::Func_2<::RPG::Client::GridFightGameModifier*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_GETMODIFIER_OFFSET))(this, pred);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameModifier*>* GetModifier_1(::System::Type* type)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameModifier*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_GETMODIFIER_1_OFFSET))(this, type);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameModifier*>* GetModifierByEffectType(::RPG::Client::GridFightModifierEffectType effectType)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameModifier*>*(*)(::PVOID, ::RPG::Client::GridFightModifierEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_GETMODIFIERBYEFFECTTYPE_OFFSET))(this, effectType);
		}

		::RPG::Client::GridFightGameModifier* GetModifierByUID(::System::UInt32 uid)
		{
			return ((::RPG::Client::GridFightGameModifier*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_GETMODIFIERBYUID_OFFSET))(this, uid);
		}

		::System::Boolean HasModifier(::System::Func_2<::RPG::Client::GridFightGameModifier*, ::System::Boolean>* pred)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Func_2<::RPG::Client::GridFightGameModifier*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_HASMODIFIER_OFFSET))(this, pred);
		}

		::System::Boolean HasModifier_1(::System::Type* type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_HASMODIFIER_1_OFFSET))(this, type);
		}

		::RPG::GameCore::GridFightNodeType GetModifiedNodeType(::RPG::Client::IGridFightStageNode* node)
		{
			return ((::RPG::GameCore::GridFightNodeType(*)(::PVOID, ::RPG::Client::IGridFightStageNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_GETMODIFIEDNODETYPE_OFFSET))(this, node);
		}

		::System::Boolean TryGetTraitLimitLayer(::System::UInt32 traitID, ::System::UInt32& limitLayer)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_TRYGETTRAITLIMITLAYER_OFFSET))(this, traitID, limitLayer);
		}

		::System::Boolean IsIgnorePopulation(::System::UInt32 roleID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_ISIGNOREPOPULATION_OFFSET))(this, roleID);
		}

		::RPG::Client::GridFightMonsterHPSetRatioModifier* get_MonsterHPModifier()
		{
			return ((::RPG::Client::GridFightMonsterHPSetRatioModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_GET_MONSTERHPMODIFIER_OFFSET))(this);
		}

		::RPG::Client::GridFightMonsterHPSetRatioModifier* GetModifierHpEffect(::System::UInt32 traitID)
		{
			return ((::RPG::Client::GridFightMonsterHPSetRatioModifier*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO_GETMODIFIERHPEFFECT_OFFSET))(this, traitID);
		}

		::System::Void _ApplyModifiers_b__18_0(::RPG::Client::GridFightGameModifier* mod)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO__APPLYMODIFIERS_B__18_0_OFFSET))(this, mod);
		}

		::System::Void _ApplyModifiers_b__18_1(::RPG::Client::GridFightGameModifier* mod)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO__APPLYMODIFIERS_B__18_1_OFFSET))(this, mod);
		}

		::System::Void _ApplyModifiers_b__18_2(::RPG::Client::GridFightGameModifier* mod)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO__APPLYMODIFIERS_B__18_2_OFFSET))(this, mod);
		}
	};
}
