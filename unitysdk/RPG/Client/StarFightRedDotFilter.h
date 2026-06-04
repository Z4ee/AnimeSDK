#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_STARFIGHTREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xC920C50)
#define RPG_CLIENT_STARFIGHTREDDOTFILTER_GETNEWGROUPS_OFFSET UNITYSDK_OFFSET(0xC91CC90)
#define RPG_CLIENT_STARFIGHTREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0xC920BE0)
#define RPG_CLIENT_STARFIGHTREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xC920C90)
#define RPG_CLIENT_STARFIGHTREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xC920D60)
#define RPG_CLIENT_STARFIGHTREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xC920CF0)

namespace RPG::Client
{
	inline static constexpr unsigned int StarFightRedDotFilter_TypeDefinitionIndex = 62493;

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

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET))(this);
		}
	};
}
