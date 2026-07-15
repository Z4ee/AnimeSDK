#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesAvatarData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESAVATARLINK_GETSORTAVATAR_OFFSET UNITYSDK_OFFSET(0x1A95B5C0)
#define RPG_CLIENT_PLANETFESAVATARLINK_GETWORKINGLINKAVATARIDS_OFFSET UNITYSDK_OFFSET(0x1A95B080)
#define RPG_CLIENT_PLANETFESAVATARLINK_HASAVATARWORKING_OFFSET UNITYSDK_OFFSET(0x1A95AFD0)
#define RPG_CLIENT_PLANETFESAVATARLINK_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1A95B980)
#define RPG_CLIENT_PLANETFESAVATARLINK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A95BB10)
#define RPG_CLIENT_PLANETFESAVATARLINK__ISWORKING_OFFSET UNITYSDK_OFFSET(0x1A95B430)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAvatarLink_TypeDefinitionIndex = 63574;

	class PlanetFesAvatarLink : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* AvatarIDs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARLINK__CTOR_OFFSET))(this);
		}

		::System::Boolean HasAvatarWorking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARLINK_HASAVATARWORKING_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetWorkingLinkAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARLINK_GETWORKINGLINKAVATARIDS_OFFSET))(this);
		}

		::RPG::Client::PlanetFesAvatarData* GetSortAvatar()
		{
			return ((::RPG::Client::PlanetFesAvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARLINK_GETSORTAVATAR_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARLINK_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean _IsWorking(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARLINK__ISWORKING_OFFSET))(this, a1);
		}
	};
}
