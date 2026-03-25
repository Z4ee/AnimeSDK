#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELPEDESTRIANV2ROADENTRYCONNECTINFO_METHOD_2_F65715759ED90F2B_OFFSET UNITYSDK_OFFSET(0x173491C0)
#define RPG_GAMECORE_LEVELPEDESTRIANV2ROADENTRYCONNECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17349280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2RoadEntryConnectInfo_TypeDefinitionIndex = 15885;

	class LevelPedestrianV2RoadEntryConnectInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::MVector3>* ConnectPoints; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2ROADENTRYCONNECTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F65715759ED90F2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2RoadEntryConnectInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2RoadEntryConnectInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2ROADENTRYCONNECTINFO_METHOD_2_F65715759ED90F2B_OFFSET))(a1, a2);
		}
	};
}
