#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ServerPrefsType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ServerPrefsData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SERVERPREFSCONFIG_METHOD_2_51BB0A34274766EF_OFFSET UNITYSDK_OFFSET(0x176A3C50)
#define RPG_GAMECORE_SERVERPREFSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x176A3D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServerPrefsConfig_TypeDefinitionIndex = 22471;

	class ServerPrefsConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ServerPrefsType, ::RPG::GameCore::ServerPrefsData*>* ServerPrefsMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERPREFSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_51BB0A34274766EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ServerPrefsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ServerPrefsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERPREFSCONFIG_METHOD_2_51BB0A34274766EF_OFFSET))(a1, a2);
		}
	};
}
