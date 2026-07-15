#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x1A4685B0)
#define RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A468510)
#define RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x1A468420)
#define RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A469210)
#define RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER__ONCMDREFRESHREWARDMIRACLE_OFFSET UNITYSDK_OFFSET(0x1A4691B0)
#define RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER__ONNOTIFYREFRESHREWARDBUFFTYPE_OFFSET UNITYSDK_OFFSET(0x1A468850)
#define RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER__ONNOTIFYREFRESHREWARDMIRACLE_OFFSET UNITYSDK_OFFSET(0x1A468B30)
#define RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER__UPDATEREDDOT_OFFSET UNITYSDK_OFFSET(0x1A4684B0)
#define RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER__UPDATEREWARDROGUEBUFFTYPE_OFFSET UNITYSDK_OFFSET(0x1A4688A0)
#define RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER__UPDATEREWARDROGUEMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0x1A468B90)
#define RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER__UPDATEREWARDROGUEMIRACLETYPE_OFFSET UNITYSDK_OFFSET(0x1A468DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueHandbookRedDotFilter_TypeDefinitionIndex = 63857;

	class RogueHandbookRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* RewardRogueBuffTypes; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* RewardRogueMiracleTypes; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* RewardRogueMiracleIDs; // 0x20

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

		::System::Void _OnNotifyRefreshRewardBuffType(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER__ONNOTIFYREFRESHREWARDBUFFTYPE_OFFSET))(this, a1);
		}

		::System::Void _OnNotifyRefreshRewardMiracle(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER__ONNOTIFYREFRESHREWARDMIRACLE_OFFSET))(this, a1);
		}

		::System::Void _OnCmdRefreshRewardMiracle(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKREDDOTFILTER__ONCMDREFRESHREWARDMIRACLE_OFFSET))(this, a1, a2);
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
	};
}
