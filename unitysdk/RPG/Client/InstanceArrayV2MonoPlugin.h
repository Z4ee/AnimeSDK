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

#define RPG_CLIENT_INSTANCEARRAYV2MONOPLUGIN_GET_AUTOPLAY_OFFSET UNITYSDK_OFFSET(0xBD3F360)
#define RPG_CLIENT_INSTANCEARRAYV2MONOPLUGIN_METHOD_7_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xBD3F3C0)
#define RPG_CLIENT_INSTANCEARRAYV2MONOPLUGIN_METHOD_7_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xBD3F370)
#define RPG_CLIENT_INSTANCEARRAYV2MONOPLUGIN_METHOD_7_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xBD3F410)
#define RPG_CLIENT_INSTANCEARRAYV2MONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xBD3F490)

namespace RPG::Client
{
	inline static constexpr unsigned int InstanceArrayV2MonoPlugin_TypeDefinitionIndex = 66038;

	class InstanceArrayV2MonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::InstanceArrayV2Behavior*>
	{
	public:
		::RPG::Client::PointsSourceMode SourceMode; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* TransformRefs; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* StaticTransforms; // 0x40
		::System::Int32 RandomSeed; // 0x48
		::RPG::Client::InstanceArrayV2AnimationTimeMode AnimationTimeMode; // 0x4C
		::System::Single AnimationTime; // 0x50
		::System::Single AutoPlayMaxLifeTime; // 0x54
		::System::Boolean AutoPlayLoop; // 0x58
		::RPG::Client::MonoEffect* FollowMonoEffect; // 0x60
		::System::Collections::Generic::List_1<::System::Single>* TimeOffsets; // 0x68
		::RPG::Client::PointsAnimCustomDataModule* CustomData; // 0x70
		::RPG::Client::PointsAnimRenderModule* Renderer; // 0x78

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
