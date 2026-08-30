#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUENOUSDICEHANDBOOKREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDF0A390)
#define RPG_CLIENT_ROGUENOUSDICEHANDBOOKREDDOTFILTER_GET_NEWSURFACEIDS_OFFSET UNITYSDK_OFFSET(0xDF0A720)
#define RPG_CLIENT_ROGUENOUSDICEHANDBOOKREDDOTFILTER_SET_NEWSURFACEIDS_OFFSET UNITYSDK_OFFSET(0xDF0A730)
#define RPG_CLIENT_ROGUENOUSDICEHANDBOOKREDDOTFILTER_UPDATEREDDOTS_OFFSET UNITYSDK_OFFSET(0xDF0A3F0)
#define RPG_CLIENT_ROGUENOUSDICEHANDBOOKREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xDF0A740)
#define RPG_CLIENT_ROGUENOUSDICEHANDBOOKREDDOTFILTER__UPDATENEWSURFACE_OFFSET UNITYSDK_OFFSET(0xDF0A440)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueNousDiceHandbookRedDotFilter_TypeDefinitionIndex = 66849;

	class RogueNousDiceHandbookRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _NewSurfaceIDs_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEHANDBOOKREDDOTFILTER__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEHANDBOOKREDDOTFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void UpdateRedDots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEHANDBOOKREDDOTFILTER_UPDATEREDDOTS_OFFSET))(this);
		}

		::System::Void _UpdateNewSurface()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEHANDBOOKREDDOTFILTER__UPDATENEWSURFACE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewSurfaceIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEHANDBOOKREDDOTFILTER_GET_NEWSURFACEIDS_OFFSET))(this);
		}

		::System::Void set_NewSurfaceIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEHANDBOOKREDDOTFILTER_SET_NEWSURFACEIDS_OFFSET))(this, a1);
		}
	};
}
