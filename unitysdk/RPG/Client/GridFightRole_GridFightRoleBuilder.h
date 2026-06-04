#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_787;
class Class_0_16E4307DCC419505_788;
namespace RPG::Client { class GridFightEquipComponent; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitComponent; }
namespace RPG::Client { class GridFightValueComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CLEAR_OFFSET UNITYSDK_OFFSET(0xBBDD010)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CREATEAVATARDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0xBBDD730)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CREATEEQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0xBBDD410)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CREATETRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xBBDD2F0)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CREATEVALUECOMPONENT_OFFSET UNITYSDK_OFFSET(0xBBDD590)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CREATEVALUEMAP_OFFSET UNITYSDK_OFFSET(0xBBDD240)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_FORCEUSETRIALAVATAR_OFFSET UNITYSDK_OFFSET(0xBBDD1A0)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_FORCEUSEUPGRADEAVATAR_OFFSET UNITYSDK_OFFSET(0xBBDD1F0)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_GETROLE_OFFSET UNITYSDK_OFFSET(0xBBDAFC0)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_GET_ID_OFFSET UNITYSDK_OFFSET(0xBBDD7D0)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_GET_POSINDEX_OFFSET UNITYSDK_OFFSET(0xBBDD830)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_GET_STAR_OFFSET UNITYSDK_OFFSET(0xBBDD7F0)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_GET_UID_OFFSET UNITYSDK_OFFSET(0xBBDD810)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_SET_ID_OFFSET UNITYSDK_OFFSET(0xBBDD7E0)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_SET_POSINDEX_OFFSET UNITYSDK_OFFSET(0xBBDD840)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_SET_STAR_OFFSET UNITYSDK_OFFSET(0xBBDD800)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_SET_UID_OFFSET UNITYSDK_OFFSET(0xBBDD820)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_WITHID_OFFSET UNITYSDK_OFFSET(0xBBDD060)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_WITHPOSINDEX_OFFSET UNITYSDK_OFFSET(0xBBDD150)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_WITHSTAR_OFFSET UNITYSDK_OFFSET(0xBBDD0B0)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_WITHUID_OFFSET UNITYSDK_OFFSET(0xBBDD100)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0xBBDD850)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRole_GridFightRoleBuilder_TypeDefinitionIndex = 60870;

	class GridFightRole_GridFightRoleBuilder : public ::System::Object
	{
	public:
		::System::Boolean _ForceUseTrialAvatar; // 0x10
		::System::Boolean _ForceUseUpgradeAvatar; // 0x11
		::System::UInt32 _PosIndex_k__BackingField; // 0x14
		::System::UInt32 _ID_k__BackingField; // 0x18
		::System::UInt32 _Star_k__BackingField; // 0x1C
		::System::UInt32 _UID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* GetRole()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_GETROLE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CLEAR_OFFSET))(this);
		}

		::RPG::Client::GridFightRole_GridFightRoleBuilder* WithID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRole_GridFightRoleBuilder*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_WITHID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole_GridFightRoleBuilder* WithStar(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRole_GridFightRoleBuilder*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_WITHSTAR_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole_GridFightRoleBuilder* WithUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRole_GridFightRoleBuilder*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_WITHUID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole_GridFightRoleBuilder* WithPosIndex(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRole_GridFightRoleBuilder*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_WITHPOSINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole_GridFightRoleBuilder* ForceUseTrialAvatar(::System::Boolean a1)
		{
			return ((::RPG::Client::GridFightRole_GridFightRoleBuilder*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_FORCEUSETRIALAVATAR_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole_GridFightRoleBuilder* ForceUseUpgradeAvatar(::System::Boolean a1)
		{
			return ((::RPG::Client::GridFightRole_GridFightRoleBuilder*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_FORCEUSEUPGRADEAVATAR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IDictionary_2<::System::String*, ::System::UInt32>* CreateValueMap(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::UInt32>*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CREATEVALUEMAP_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitComponent* CreateTraitComponent(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::Client::GridFightTraitComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CREATETRAITCOMPONENT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipComponent* CreateEquipComponent(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::Client::GridFightEquipComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CREATEEQUIPCOMPONENT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightValueComponent* CreateValueComponent(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::Client::GridFightValueComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CREATEVALUECOMPONENT_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_787* CreateAvatarDataProvider(::RPG::Client::GridFightRole* a1)
		{
			return ((::Class_0_16E4307DCC419505_787*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CREATEAVATARDATAPROVIDER_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Star()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_GET_STAR_OFFSET))(this);
		}

		::System::Void set_Star(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_SET_STAR_OFFSET))(this, a1);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_SET_UID_OFFSET))(this, a1);
		}

		::System::UInt32 get_PosIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_GET_POSINDEX_OFFSET))(this);
		}

		::System::Void set_PosIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_SET_POSINDEX_OFFSET))(this, a1);
		}
	};
}
