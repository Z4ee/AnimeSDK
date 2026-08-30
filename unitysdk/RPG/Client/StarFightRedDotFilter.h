#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_STARFIGHTREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x1A4FCED0)
#define RPG_CLIENT_STARFIGHTREDDOTFILTER_GETNEWGROUPS_OFFSET UNITYSDK_OFFSET(0x1A4F8BC0)
#define RPG_CLIENT_STARFIGHTREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x1A4FCE80)
#define RPG_CLIENT_STARFIGHTREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4FCF10)

namespace RPG::Client
{
	inline static constexpr unsigned int StarFightRedDotFilter_TypeDefinitionIndex = 66850;

	class StarFightRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _NewGroups; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTREDDOTFILTER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTREDDOTFILTER_INIT_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTREDDOTFILTER_ADDHANDLERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNewGroups()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTREDDOTFILTER_GETNEWGROUPS_OFFSET))(this);
		}
	};
}
