#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesAvatarData; }
namespace RPG::Client { class PlanetFesAvatarLink; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESAVATARLINKDATA_GETAVATARLINK_OFFSET UNITYSDK_OFFSET(0x9F87800)
#define RPG_CLIENT_PLANETFESAVATARLINKDATA_GETSHOWLINKS_OFFSET UNITYSDK_OFFSET(0x9F875B0)
#define RPG_CLIENT_PLANETFESAVATARLINKDATA_INIT_OFFSET UNITYSDK_OFFSET(0x9F86CB0)
#define RPG_CLIENT_PLANETFESAVATARLINKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F879C0)
#define RPG_CLIENT_PLANETFESAVATARLINKDATA__FINDLINKS_OFFSET UNITYSDK_OFFSET(0x9F87070)
#define RPG_CLIENT_PLANETFESAVATARLINKDATA__SORTLINKS_OFFSET UNITYSDK_OFFSET(0x9F878E0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAvatarLinkData_TypeDefinitionIndex = 54120;

	class PlanetFesAvatarLinkData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesAvatarLink*>* _AllLinks; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesAvatarLink*>* _LinkByAvatarID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARLINKDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARLINKDATA_INIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesAvatarLink*>* GetShowLinks()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesAvatarLink*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARLINKDATA_GETSHOWLINKS_OFFSET))(this);
		}

		::RPG::Client::PlanetFesAvatarLink* GetAvatarLink(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::PlanetFesAvatarLink*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARLINKDATA_GETAVATARLINK_OFFSET))(this, avatarID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _FindLinks(::System::UInt32 avatarID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesAvatarData*>* avatarMap)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesAvatarData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARLINKDATA__FINDLINKS_OFFSET))(this, avatarID, avatarMap);
		}

		::System::Int32 _SortLinks(::RPG::Client::PlanetFesAvatarLink* lhs, ::RPG::Client::PlanetFesAvatarLink* rhs)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesAvatarLink*, ::RPG::Client::PlanetFesAvatarLink*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARLINKDATA__SORTLINKS_OFFSET))(this, lhs, rhs);
		}
	};
}
