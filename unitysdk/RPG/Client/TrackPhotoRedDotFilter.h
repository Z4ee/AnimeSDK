#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRACKPHOTOREDDOTFILTER_GETNEWSTAGEIDS_OFFSET UNITYSDK_OFFSET(0x178AD7C0)
#define RPG_CLIENT_TRACKPHOTOREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x178AD9D0)

namespace RPG::Client
{
	inline static constexpr unsigned int TrackPhotoRedDotFilter_TypeDefinitionIndex = 63860;

	class TrackPhotoRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _NewStageIDs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRACKPHOTOREDDOTFILTER__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNewStageIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRACKPHOTOREDDOTFILTER_GETNEWSTAGEIDS_OFFSET))(this);
		}
	};
}
