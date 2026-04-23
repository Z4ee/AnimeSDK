#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AETHERSKILLCOREITEMREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x9CDE540)
#define RPG_CLIENT_AETHERSKILLCOREITEMREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9CDE4A0)
#define RPG_CLIENT_AETHERSKILLCOREITEMREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x9CDE430)
#define RPG_CLIENT_AETHERSKILLCOREITEMREDDOTFILTER_UPDATEISNEWREDDOT_OFFSET UNITYSDK_OFFSET(0x9CDE1B0)
#define RPG_CLIENT_AETHERSKILLCOREITEMREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x9CDE780)
#define RPG_CLIENT_AETHERSKILLCOREITEMREDDOTFILTER__ONUPDATEALLREDDOT_OFFSET UNITYSDK_OFFSET(0x9CDE6E0)
#define RPG_CLIENT_AETHERSKILLCOREITEMREDDOTFILTER__ONUPDATEISNEWREDDOT_OFFSET UNITYSDK_OFFSET(0x9CDE730)
#define RPG_CLIENT_AETHERSKILLCOREITEMREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x9CDE8E0)
#define RPG_CLIENT_AETHERSKILLCOREITEMREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9CDE860)
#define RPG_CLIENT_AETHERSKILLCOREITEMREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9CDE7E0)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherSkillCoreItemRedDotFilter_TypeDefinitionIndex = 61533;

	class AetherSkillCoreItemRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* IsNewSkillCoreIdList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMREDDOTFILTER__CTOR_OFFSET))(this);
		}

		::System::Void UpdateIsNewRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMREDDOTFILTER_UPDATEISNEWREDDOT_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMREDDOTFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMREDDOTFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMREDDOTFILTER_ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _OnUpdateAllRedDot(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMREDDOTFILTER__ONUPDATEALLREDDOT_OFFSET))(this, arg);
		}

		::System::Void _OnUpdateIsNewRedDot(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMREDDOTFILTER__ONUPDATEISNEWREDDOT_OFFSET))(this, arg);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET))(this);
		}
	};
}
