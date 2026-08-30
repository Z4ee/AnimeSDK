#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/InstanceArrayV2AnimationTimeMode.h"
#include "unitysdk/RPG/Client/PointsSourceMode.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace RPG::Client { class InstanceArrayV2Behavior; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class PointsAnimCustomDataModule; }
namespace RPG::Client { class PointsAnimRenderModule; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_INSTANCEARRAYV2MONOPLUGIN_GET_AUTOPLAY_OFFSET UNITYSDK_OFFSET(0x1984F2D0)
#define RPG_CLIENT_INSTANCEARRAYV2MONOPLUGIN_METHOD_7_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x1984F330)
#define RPG_CLIENT_INSTANCEARRAYV2MONOPLUGIN_METHOD_7_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1984F2E0)
#define RPG_CLIENT_INSTANCEARRAYV2MONOPLUGIN_METHOD_7_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1984F380)
#define RPG_CLIENT_INSTANCEARRAYV2MONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1984F400)

namespace RPG::Client
{
	inline static constexpr unsigned int InstanceArrayV2MonoPlugin_TypeDefinitionIndex = 70586;

	class InstanceArrayV2MonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::InstanceArrayV2Behavior*>
	{
	public:
		::RPG::Client::PointsSourceMode SourceMode; // 0x30
		::UnityEngine::Transform* Root; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* TransformRefs; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* StaticTransforms; // 0x48
		::System::Int32 RandomSeed; // 0x50
		::RPG::Client::InstanceArrayV2AnimationTimeMode AnimationTimeMode; // 0x54
		::System::Single AnimationTime; // 0x58
		::System::Single AutoPlayMaxLifeTime; // 0x5C
		::System::Boolean AutoPlayLoop; // 0x60
		::RPG::Client::MonoEffect* FollowMonoEffect; // 0x68
		::System::Collections::Generic::List_1<::System::Single>* TimeOffsets; // 0x70
		::RPG::Client::PointsAnimCustomDataModule* CustomData; // 0x78
		::RPG::Client::PointsAnimRenderModule* Renderer; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INSTANCEARRAYV2MONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Boolean get_AutoPlay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INSTANCEARRAYV2MONOPLUGIN_GET_AUTOPLAY_OFFSET))(this);
		}

		::System::Boolean Method_7_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INSTANCEARRAYV2MONOPLUGIN_METHOD_7_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Boolean Method_7_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INSTANCEARRAYV2MONOPLUGIN_METHOD_7_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::Void Method_7_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INSTANCEARRAYV2MONOPLUGIN_METHOD_7_9681042564541CD6_OFFSET))(this);
		}
	};
}
