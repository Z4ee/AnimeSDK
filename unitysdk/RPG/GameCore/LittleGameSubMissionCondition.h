#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMESUBMISSIONCONDITION_METHOD_2_39E5B3B4125B9E69_OFFSET UNITYSDK_OFFSET(0x1D7B9300)
#define RPG_GAMECORE_LITTLEGAMESUBMISSIONCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B9440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameSubMissionCondition_TypeDefinitionIndex = 18866;

	class LittleGameSubMissionCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SubMissionID; // 0x10
		::RPG::GameCore::SubMissionState SubMissionState; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESUBMISSIONCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_39E5B3B4125B9E69(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameSubMissionCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameSubMissionCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESUBMISSIONCONDITION_METHOD_2_39E5B3B4125B9E69_OFFSET))(a1, a2);
		}
	};
}
