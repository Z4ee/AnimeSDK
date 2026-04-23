#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE_METHOD_4_1ED1B0FE2A40338C_OFFSET UNITYSDK_OFFSET(0x1873DAE0)
#define RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE_METHOD_4_2942F15B5EBE8628_OFFSET UNITYSDK_OFFSET(0x1873DA10)
#define RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1873DA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSubMissionState_TypeDefinitionIndex = 19255;

	class ByCompareSubMissionState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 SubMissionID; // 0x20
		::RPG::GameCore::SubMissionState SubMissionState; // 0x24
		::System::Boolean AllStoryLine; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2942F15B5EBE8628(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSubMissionState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSubMissionState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE_METHOD_4_2942F15B5EBE8628_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1ED1B0FE2A40338C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSubMissionState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSubMissionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESUBMISSIONSTATE_METHOD_4_1ED1B0FE2A40338C_OFFSET))(a1, a2);
		}
	};
}
