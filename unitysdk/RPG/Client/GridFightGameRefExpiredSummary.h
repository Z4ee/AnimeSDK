#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightAugment; }
namespace RPG::Client { class GridFightGameFormation; }
namespace RPG::Client { class GridFightGameRefData; }
namespace RPG::Client { class GridFightGameRefTrait; }
namespace RPG::Client { class GridFightPortalData; }
namespace RPG::Client { class GridFightSeasonRole; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY_GET_DELETEDEXPIREDROLES_OFFSET UNITYSDK_OFFSET(0x1BA22610)
#define RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY_GET_DELETEDSECONDARYEXPIREDROLES_OFFSET UNITYSDK_OFFSET(0x1BA228D0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY_GET_HASEXPIRED_OFFSET UNITYSDK_OFFSET(0x1BA22A50)
#define RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY_GET_HASMAINCHANGE_OFFSET UNITYSDK_OFFSET(0x1BA22B00)
#define RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY_GET_HASOTHERCHANGE_OFFSET UNITYSDK_OFFSET(0x1BA22B70)
#define RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY_GET_ISTOTALEXPIRED_OFFSET UNITYSDK_OFFSET(0x1BA22A30)
#define RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY_GET_POSEXPIREDROLES_OFFSET UNITYSDK_OFFSET(0x1BA224B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY_GET_RARITYEXPIREDROLES_OFFSET UNITYSDK_OFFSET(0x1BA22350)
#define RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY_GET_RARITYSECONDARYEXPIREDROLES_OFFSET UNITYSDK_OFFSET(0x1BA22770)
#define RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY_SET_ISTOTALEXPIRED_OFFSET UNITYSDK_OFFSET(0x1BA22A40)
#define RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BA22C20)
#define RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA17C30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefExpiredSummary_TypeDefinitionIndex = 64809;

	class GridFightGameRefExpiredSummary : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* ExpiredSecondaryRoles; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefTrait*>* ExpiredTraits; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightAugment*>* ExpiredAugments; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* ExpiredRoles; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::GridFightPortalData*>* ExpiredPortals; // 0x30
		::System::Boolean _IsTotalExpired_k__BackingField; // 0x38

		::System::Void _ctor(::RPG::Client::GridFightGameRefData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::RPG::Client::GridFightGameFormation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY__CTOR_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* get_RarityExpiredRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY_GET_RARITYEXPIREDROLES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* get_PosExpiredRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY_GET_POSEXPIREDROLES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* get_DeletedExpiredRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY_GET_DELETEDEXPIREDROLES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* get_RaritySecondaryExpiredRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY_GET_RARITYSECONDARYEXPIREDROLES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* get_DeletedSecondaryExpiredRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY_GET_DELETEDSECONDARYEXPIREDROLES_OFFSET))(this);
		}

		::System::Boolean get_IsTotalExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY_GET_ISTOTALEXPIRED_OFFSET))(this);
		}

		::System::Void set_IsTotalExpired(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY_SET_ISTOTALEXPIRED_OFFSET))(this, a1);
		}

		::System::Boolean get_HasExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY_GET_HASEXPIRED_OFFSET))(this);
		}

		::System::Boolean get_HasMainChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY_GET_HASMAINCHANGE_OFFSET))(this);
		}

		::System::Boolean get_HasOtherChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFEXPIREDSUMMARY_GET_HASOTHERCHANGE_OFFSET))(this);
		}
	};
}
