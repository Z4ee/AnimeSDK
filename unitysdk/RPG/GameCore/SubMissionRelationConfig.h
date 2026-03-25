#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SUBMISSIONRELATIONCONFIG_METHOD_2_9ECCD2A67933344F_OFFSET UNITYSDK_OFFSET(0x1778A300)
#define RPG_GAMECORE_SUBMISSIONRELATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1778A420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubMissionRelationConfig_TypeDefinitionIndex = 17436;

	class SubMissionRelationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MonitorSubMissionID; // 0x10
		::Il2CppArray<::System::UInt32>* MonitoredSubMissionIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONRELATIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9ECCD2A67933344F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SubMissionRelationConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SubMissionRelationConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONRELATIONCONFIG_METHOD_2_9ECCD2A67933344F_OFFSET))(a1, a2);
		}
	};
}
