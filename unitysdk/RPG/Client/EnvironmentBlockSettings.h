#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EnvironmentProbeSettings.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ENVIRONMENTBLOCKSETTINGS_METHOD_3_BBD36158AE50EC8B_OFFSET UNITYSDK_OFFSET(0x960B740)
#define RPG_CLIENT_ENVIRONMENTBLOCKSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x960B7B0)

namespace RPG::Client
{
	inline static constexpr unsigned int EnvironmentBlockSettings_TypeDefinitionIndex = 57061;

	class EnvironmentBlockSettings : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::EnvironmentProbeSettings>* ProbeSettingsList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTBLOCKSETTINGS__CTOR_OFFSET))(this);
		}

		static ::System::String* Method_3_BBD36158AE50EC8B(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTBLOCKSETTINGS_METHOD_3_BBD36158AE50EC8B_OFFSET))(a1);
		}
	};
}
