#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PointsSourceMode.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace RPG::Client { class InstanceArrayV2Behavior; }
namespace RPG::Client { class PointsAnimCustomDataModule; }
namespace RPG::Client { class PointsAnimRenderModule; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_INSTANCEARRAYV2MONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xA63A1C0)

namespace RPG::Client
{
	inline static constexpr unsigned int InstanceArrayV2MonoPlugin_TypeDefinitionIndex = 65111;

	class InstanceArrayV2MonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::InstanceArrayV2Behavior*>
	{
	public:
		::RPG::Client::PointsSourceMode SourceMode; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* TransformRefs; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* StaticTransforms; // 0x40
		::System::Int32 RandomSeed; // 0x48
		::System::Single AnimationTime; // 0x4C
		::System::Single MaxLifeTime; // 0x50
		::System::Boolean AutoPlay; // 0x54
		::System::Boolean AutoPlayLoop; // 0x55
		::System::Collections::Generic::List_1<::System::Single>* TimeOffsets; // 0x58
		::RPG::Client::PointsAnimCustomDataModule* CustomData; // 0x60
		::RPG::Client::PointsAnimRenderModule* Renderer; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INSTANCEARRAYV2MONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
