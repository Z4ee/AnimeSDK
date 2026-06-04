#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitCoreSelectBase.h"

class Class_1_8271AFF79E02658D;
namespace RPG::Client { class GridFightTrait; }
namespace RPG::GameCore { class GridFightTraitEffectIdConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GETCOREROLEUIDS_OFFSET UNITYSDK_OFFSET(0xBC28090)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GETSHOWICON_OFFSET UNITYSDK_OFFSET(0xBC28000)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GETSHOWMEMBERUIDS_OFFSET UNITYSDK_OFFSET(0xBC28050)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GET_COREMEMBERUIDS_OFFSET UNITYSDK_OFFSET(0xBC280D0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GET_LASTCOREMEMBERUIDS_OFFSET UNITYSDK_OFFSET(0xBC280E0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xBC27DA0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xBC27B10)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT___IFIXBASEPROXY_GETCOREROLEUIDS_OFFSET UNITYSDK_OFFSET(0xBC28140)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT___IFIXBASEPROXY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xBC280F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitCoreRoleByEquipEffect_TypeDefinitionIndex = 61124;

	class GridFightTraitCoreRoleByEquipEffect : public ::RPG::Client::GridFightTraitCoreSelectBase
	{
	public:
		::RPG::GameCore::GridFightTraitEffectIdConfigRow* _EffectRow; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _LastCoreMemberUIDs_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _CoreMemberUIDs_k__BackingField; // 0x40

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnUpdate(::Class_1_8271AFF79E02658D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8271AFF79E02658D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_ONUPDATE_OFFSET))(this, a1);
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

		::System::Void __iFixBaseProxy_OnUpdate(::Class_1_8271AFF79E02658D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8271AFF79E02658D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT___IFIXBASEPROXY_ONUPDATE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* __iFixBaseProxy_GetCoreRoleUIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT___IFIXBASEPROXY_GETCOREROLEUIDS_OFFSET))(this);
		}
	};
}
