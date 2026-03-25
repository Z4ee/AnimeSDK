#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xA310FB0)
#define RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA310EB0)
#define RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0xA310D90)
#define RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xA311A80)
#define RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER__ONCMDREFRESHREWARDMIRACLE_OFFSET UNITYSDK_OFFSET(0xA311A20)
#define RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER__ONNOTIFYREFRESHREWARDBUFFTYPE_OFFSET UNITYSDK_OFFSET(0xA311140)
#define RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER__ONNOTIFYREFRESHREWARDMIRACLE_OFFSET UNITYSDK_OFFSET(0xA3113B0)
#define RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER__UPDATEREDDOT_OFFSET UNITYSDK_OFFSET(0xA310E50)
#define RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER__UPDATEREWARDROGUEBUFFTYPE_OFFSET UNITYSDK_OFFSET(0xA311190)
#define RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER__UPDATEREWARDROGUEMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0xA311410)
#define RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER__UPDATEREWARDROGUEMIRACLETYPE_OFFSET UNITYSDK_OFFSET(0xA311620)
#define RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xA311B90)
#define RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA311B10)
#define RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA311A90)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueHandbookRedDotFilter_TypeDefinitionIndex = 54395;

	class RogueHandbookRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* RewardRogueMiracleTypes; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* RewardRogueMiracleIDs; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* RewardRogueBuffTypes; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER_ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _OnNotifyRefreshRewardBuffType(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER__ONNOTIFYREFRESHREWARDBUFFTYPE_OFFSET))(this, arg);
		}

		::System::Void _OnNotifyRefreshRewardMiracle(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER__ONNOTIFYREFRESHREWARDMIRACLE_OFFSET))(this, arg);
		}

		::System::Void _OnCmdRefreshRewardMiracle(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER__ONCMDREFRESHREWARDMIRACLE_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _UpdateRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER__UPDATEREDDOT_OFFSET))(this);
		}

		::System::Void _UpdateRewardRogueBuffType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER__UPDATEREWARDROGUEBUFFTYPE_OFFSET))(this);
		}

		::System::Void _UpdateRewardRogueMiracleIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER__UPDATEREWARDROGUEMIRACLEIDS_OFFSET))(this);
		}

		::System::Void _UpdateRewardRogueMiracleType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER__UPDATEREWARDROGUEMIRACLETYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET))(this);
		}
	};
}
