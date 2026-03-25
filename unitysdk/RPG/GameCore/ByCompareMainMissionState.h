#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MainMissionState.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPAREMAINMISSIONSTATE_METHOD_4_3771C9D992A84AD1_OFFSET UNITYSDK_OFFSET(0x1700E280)
#define RPG_GAMECORE_BYCOMPAREMAINMISSIONSTATE_METHOD_4_95B5D7115B39CE49_OFFSET UNITYSDK_OFFSET(0x1700E1A0)
#define RPG_GAMECORE_BYCOMPAREMAINMISSIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1700E220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareMainMissionState_TypeDefinitionIndex = 18600;

	class ByCompareMainMissionState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 MainMissionID; // 0x20
		::RPG::GameCore::MainMissionState MainMissionState; // 0x24
		::System::Boolean AllStoryLine; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMAINMISSIONSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_95B5D7115B39CE49(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMainMissionState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMainMissionState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMAINMISSIONSTATE_METHOD_4_95B5D7115B39CE49_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3771C9D992A84AD1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMainMissionState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMainMissionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMAINMISSIONSTATE_METHOD_4_3771C9D992A84AD1_OFFSET))(a1, a2);
		}
	};
}
