#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELPEDESTRIANV2ROADENTRYCONNECTINFO_METHOD_2_04E038D21AD6C9AE_OFFSET UNITYSDK_OFFSET(0x1D1EA720)
#define RPG_GAMECORE_LEVELPEDESTRIANV2ROADENTRYCONNECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1EA7E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2RoadEntryConnectInfo_TypeDefinitionIndex = 17099;

	class LevelPedestrianV2RoadEntryConnectInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::MVector3>* ConnectPoints; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2ROADENTRYCONNECTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_04E038D21AD6C9AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2RoadEntryConnectInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2RoadEntryConnectInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2ROADENTRYCONNECTINFO_METHOD_2_04E038D21AD6C9AE_OFFSET))(a1, a2);
		}
	};
}
