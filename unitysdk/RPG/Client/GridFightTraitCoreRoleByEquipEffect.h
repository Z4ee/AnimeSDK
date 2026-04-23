#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitCoreSelectBase.h"

class Class_1_8271AFF79E02658D;
namespace RPG::Client { class GridFightTrait; }
namespace RPG::GameCore { class GridFightTraitEffectIdConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GETCOREROLEUIDS_OFFSET UNITYSDK_OFFSET(0xA5B5C90)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GETSHOWICON_OFFSET UNITYSDK_OFFSET(0xA5B5C00)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GETSHOWMEMBERUIDS_OFFSET UNITYSDK_OFFSET(0xA5B5C50)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GET_COREMEMBERUIDS_OFFSET UNITYSDK_OFFSET(0xA5B5CD0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GET_LASTCOREMEMBERUIDS_OFFSET UNITYSDK_OFFSET(0xA5B5CE0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xA5B59B0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xA5B58D0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT___IFIXBASEPROXY_GETCOREROLEUIDS_OFFSET UNITYSDK_OFFSET(0xA5B5D60)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT___IFIXBASEPROXY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xA5B5CF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitCoreRoleByEquipEffect_TypeDefinitionIndex = 60189;

	class GridFightTraitCoreRoleByEquipEffect : public ::RPG::Client::GridFightTraitCoreSelectBase
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _CoreMemberUIDs_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _LastCoreMemberUIDs_k__BackingField; // 0x38
		::RPG::GameCore::GridFightTraitEffectIdConfigRow* _EffectRow; // 0x40

		::System::Void _ctor(::System::UInt32 id, ::RPG::Client::GridFightTrait* trait)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT__CTOR_OFFSET))(this, id, trait);
		}

		::System::Void OnUpdate(::Class_1_8271AFF79E02658D* effect)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8271AFF79E02658D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_ONUPDATE_OFFSET))(this, effect);
		}

		::System::String* GetShowIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GETSHOWICON_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetShowMemberUIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GETSHOWMEMBERUIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetCoreRoleUIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GETCOREROLEUIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CoreMemberUIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GET_COREMEMBERUIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_LastCoreMemberUIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GET_LASTCOREMEMBERUIDS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnUpdate(::Class_1_8271AFF79E02658D* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8271AFF79E02658D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT___IFIXBASEPROXY_ONUPDATE_OFFSET))(this, P0);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* __iFixBaseProxy_GetCoreRoleUIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT___IFIXBASEPROXY_GETCOREROLEUIDS_OFFSET))(this);
		}
	};
}
