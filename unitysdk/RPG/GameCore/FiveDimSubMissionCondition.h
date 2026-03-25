#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSUBMISSIONCONDITION_METHOD_2_2CA39FE4B3B9F556_OFFSET UNITYSDK_OFFSET(0x1720EA50)
#define RPG_GAMECORE_FIVEDIMSUBMISSIONCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1720EB70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSubMissionCondition_TypeDefinitionIndex = 17075;

	class FiveDimSubMissionCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SubMissionID; // 0x10
		::RPG::GameCore::SubMissionState SubMissionState; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSUBMISSIONCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2CA39FE4B3B9F556(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSubMissionCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSubMissionCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSUBMISSIONCONDITION_METHOD_2_2CA39FE4B3B9F556_OFFSET))(a1, a2);
		}
	};
}
