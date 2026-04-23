#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_736;
class Class_0_16E4307DCC419505_737;
namespace RPG::Client { class GridFightEquipComponent; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitComponent; }
namespace RPG::Client { class GridFightValueComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CLEAR_OFFSET UNITYSDK_OFFSET(0xA56FDC0)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CREATEAVATARDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0xA570490)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CREATEEQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA570170)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CREATETRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA570050)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CREATEVALUECOMPONENT_OFFSET UNITYSDK_OFFSET(0xA5702F0)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CREATEVALUEMAP_OFFSET UNITYSDK_OFFSET(0xA56FFA0)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_FORCEUSETRIALAVATAR_OFFSET UNITYSDK_OFFSET(0xA56DCB0)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_FORCEUSEUPGRADEAVATAR_OFFSET UNITYSDK_OFFSET(0xA56FF50)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_GETROLE_OFFSET UNITYSDK_OFFSET(0xA56DD00)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_GET_ID_OFFSET UNITYSDK_OFFSET(0xA570530)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_GET_POSINDEX_OFFSET UNITYSDK_OFFSET(0xA570590)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_GET_STAR_OFFSET UNITYSDK_OFFSET(0xA570550)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_GET_UID_OFFSET UNITYSDK_OFFSET(0xA570570)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_SET_ID_OFFSET UNITYSDK_OFFSET(0xA570540)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_SET_POSINDEX_OFFSET UNITYSDK_OFFSET(0xA5705A0)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_SET_STAR_OFFSET UNITYSDK_OFFSET(0xA570560)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_SET_UID_OFFSET UNITYSDK_OFFSET(0xA570580)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_WITHID_OFFSET UNITYSDK_OFFSET(0xA56FE10)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_WITHPOSINDEX_OFFSET UNITYSDK_OFFSET(0xA56FF00)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_WITHSTAR_OFFSET UNITYSDK_OFFSET(0xA56FE60)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_WITHUID_OFFSET UNITYSDK_OFFSET(0xA56FEB0)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0xA5705B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRole_GridFightRoleBuilder_TypeDefinitionIndex = 59935;

	class GridFightRole_GridFightRoleBuilder : public ::System::Object
	{
	public:
		::System::UInt32 _UID_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x14
		::System::UInt32 _PosIndex_k__BackingField; // 0x18
		::System::UInt32 _Star_k__BackingField; // 0x1C
		::System::Boolean _ForceUseTrialAvatar; // 0x20
		::System::Boolean _ForceUseUpgradeAvatar; // 0x21

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

		::RPG::Client::GridFightRole_GridFightRoleBuilder* WithID(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightRole_GridFightRoleBuilder*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_WITHID_OFFSET))(this, id);
		}

		::RPG::Client::GridFightRole_GridFightRoleBuilder* WithStar(::System::UInt32 star)
		{
			return ((::RPG::Client::GridFightRole_GridFightRoleBuilder*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_WITHSTAR_OFFSET))(this, star);
		}

		::RPG::Client::GridFightRole_GridFightRoleBuilder* WithUID(::System::UInt32 uid)
		{
			return ((::RPG::Client::GridFightRole_GridFightRoleBuilder*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_WITHUID_OFFSET))(this, uid);
		}

		::RPG::Client::GridFightRole_GridFightRoleBuilder* WithPosIndex(::System::UInt32 posIndex)
		{
			return ((::RPG::Client::GridFightRole_GridFightRoleBuilder*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_WITHPOSINDEX_OFFSET))(this, posIndex);
		}

		::RPG::Client::GridFightRole_GridFightRoleBuilder* ForceUseTrialAvatar(::System::Boolean isTrialAvatar)
		{
			return ((::RPG::Client::GridFightRole_GridFightRoleBuilder*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_FORCEUSETRIALAVATAR_OFFSET))(this, isTrialAvatar);
		}

		::RPG::Client::GridFightRole_GridFightRoleBuilder* ForceUseUpgradeAvatar(::System::Boolean isUpgradeAvatar)
		{
			return ((::RPG::Client::GridFightRole_GridFightRoleBuilder*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_FORCEUSEUPGRADEAVATAR_OFFSET))(this, isUpgradeAvatar);
		}

		::System::Collections::Generic::IDictionary_2<::System::String*, ::System::UInt32>* CreateValueMap(::RPG::Client::GridFightRole* role)
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::UInt32>*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CREATEVALUEMAP_OFFSET))(this, role);
		}

		::RPG::Client::GridFightTraitComponent* CreateTraitComponent(::RPG::Client::GridFightRole* role)
		{
			return ((::RPG::Client::GridFightTraitComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CREATETRAITCOMPONENT_OFFSET))(this, role);
		}

		::RPG::Client::GridFightEquipComponent* CreateEquipComponent(::RPG::Client::GridFightRole* role)
		{
			return ((::RPG::Client::GridFightEquipComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CREATEEQUIPCOMPONENT_OFFSET))(this, role);
		}

		::RPG::Client::GridFightValueComponent* CreateValueComponent(::RPG::Client::GridFightRole* role)
		{
			return ((::RPG::Client::GridFightValueComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CREATEVALUECOMPONENT_OFFSET))(this, role);
		}

		::Class_0_16E4307DCC419505_736* CreateAvatarDataProvider(::RPG::Client::GridFightRole* role)
		{
			return ((::Class_0_16E4307DCC419505_736*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CREATEAVATARDATAPROVIDER_OFFSET))(this, role);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_Star()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_GET_STAR_OFFSET))(this);
		}

		::System::Void set_Star(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_SET_STAR_OFFSET))(this, value);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_SET_UID_OFFSET))(this, value);
		}

		::System::UInt32 get_PosIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_GET_POSINDEX_OFFSET))(this);
		}

		::System::Void set_PosIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_SET_POSINDEX_OFFSET))(this, value);
		}
	};
}
