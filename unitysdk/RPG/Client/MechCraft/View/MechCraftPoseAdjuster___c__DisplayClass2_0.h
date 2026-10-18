#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftPoseAdjuster_PosePointInfo.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPOSEADJUSTER___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD655710)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPOSEADJUSTER___C__DISPLAYCLASS2_0__GETPOSEPOINT_B__0_OFFSET UNITYSDK_OFFSET(0xD655730)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftPoseAdjuster___c__DisplayClass2_0_TypeDefinitionIndex = 79974;

	class MechCraftPoseAdjuster___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::UInt32 poseID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPOSEADJUSTER___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetPosePoint_b__0(::RPG::Client::MechCraft::View::MechCraftPoseAdjuster_PosePointInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MechCraft::View::MechCraftPoseAdjuster_PosePointInfo))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPOSEADJUSTER___C__DISPLAYCLASS2_0__GETPOSEPOINT_B__0_OFFSET))(this, a1);
		}
	};
}
