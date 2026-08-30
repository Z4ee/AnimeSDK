#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DefaultForceKillMarkData; }
namespace RPG::Client { class StageInvasionForceKillMarkData; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_FORCEKILLMARKDATAPROVIDER_CREATE_OFFSET UNITYSDK_OFFSET(0x190E5E90)
#define RPG_CLIENT_FORCEKILLMARKDATAPROVIDER_GET_DEFAULTMARKDATA_OFFSET UNITYSDK_OFFSET(0x190E5E50)
#define RPG_CLIENT_FORCEKILLMARKDATAPROVIDER_GET_STAGEINVASIONMARKDATA_OFFSET UNITYSDK_OFFSET(0x190E5E70)
#define RPG_CLIENT_FORCEKILLMARKDATAPROVIDER_REFRESH_OFFSET UNITYSDK_OFFSET(0x190E5F60)
#define RPG_CLIENT_FORCEKILLMARKDATAPROVIDER_SET_DEFAULTMARKDATA_OFFSET UNITYSDK_OFFSET(0x190E5E60)
#define RPG_CLIENT_FORCEKILLMARKDATAPROVIDER_SET_STAGEINVASIONMARKDATA_OFFSET UNITYSDK_OFFSET(0x190E5E80)
#define RPG_CLIENT_FORCEKILLMARKDATAPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x190E5F30)

namespace RPG::Client
{
	inline static constexpr unsigned int ForceKillMarkDataProvider_TypeDefinitionIndex = 71622;

	class ForceKillMarkDataProvider : public ::System::Object
	{
	public:
		::RPG::Client::DefaultForceKillMarkData* _DefaultMarkData_k__BackingField; // 0x10
		::RPG::Client::StageInvasionForceKillMarkData* _StageInvasionMarkData_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FORCEKILLMARKDATAPROVIDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::DefaultForceKillMarkData* get_DefaultMarkData()
		{
			return ((::RPG::Client::DefaultForceKillMarkData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FORCEKILLMARKDATAPROVIDER_GET_DEFAULTMARKDATA_OFFSET))(this);
		}

		::System::Void set_DefaultMarkData(::RPG::Client::DefaultForceKillMarkData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DefaultForceKillMarkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FORCEKILLMARKDATAPROVIDER_SET_DEFAULTMARKDATA_OFFSET))(this, a1);
		}

		::RPG::Client::StageInvasionForceKillMarkData* get_StageInvasionMarkData()
		{
			return ((::RPG::Client::StageInvasionForceKillMarkData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FORCEKILLMARKDATAPROVIDER_GET_STAGEINVASIONMARKDATA_OFFSET))(this);
		}

		::System::Void set_StageInvasionMarkData(::RPG::Client::StageInvasionForceKillMarkData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StageInvasionForceKillMarkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FORCEKILLMARKDATAPROVIDER_SET_STAGEINVASIONMARKDATA_OFFSET))(this, a1);
		}

		static ::RPG::Client::ForceKillMarkDataProvider* Create(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::Client::ForceKillMarkDataProvider*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FORCEKILLMARKDATAPROVIDER_CREATE_OFFSET))(a1);
		}

		::System::Void Refresh(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FORCEKILLMARKDATAPROVIDER_REFRESH_OFFSET))(this, a1);
		}
	};
}
