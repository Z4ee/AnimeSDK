#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftPoseAdjuster_PosePointInfo.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPOSEADJUSTER_GETPOSEPOINT_OFFSET UNITYSDK_OFFSET(0xD655620)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPOSEADJUSTER__CTOR_OFFSET UNITYSDK_OFFSET(0xD655720)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftPoseAdjuster_TypeDefinitionIndex = 79972;

	class MechCraftPoseAdjuster : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MechCraft::View::MechCraftPoseAdjuster_PosePointInfo>* _PosePoints; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPOSEADJUSTER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* GetPosePoint(::System::UInt32 a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTPOSEADJUSTER_GETPOSEPOINT_OFFSET))(this, a1);
		}
	};
}
