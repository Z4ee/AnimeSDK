#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class VolumeCloudOptVolumeMonoPlugin; }
namespace RPG::CustomRP { class VolumetricCloudLayer; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC264D0)
#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xCC26130)
#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_METHOD_3_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0xCC25F50)
#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xCC26860)
#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xCC26530)
#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_METHOD_3_CA445FA4930F7C4B_OFFSET UNITYSDK_OFFSET(0xCC26170)
#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xCC265C0)
#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xCC26820)
#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC26850)
#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xCC268C0)

namespace RPG::Client
{
	inline static constexpr unsigned int VolumeCloudOptVolumeBehavior_TypeDefinitionIndex = 66249;

	class VolumeCloudOptVolumeBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::RPG::CustomRP::VolumetricCloudLayer* _CloudLayer; // 0x38
		::UnityEngine::Material* _CloudMat; // 0x40
		::System::Single _OriginDensity; // 0x48
		::UnityEngine::Camera* _MainCamera; // 0x50
		::System::Single _FadeDuration; // 0x58
		::System::Int32 _DensityMultiplyID; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_3CCA0B8A31B650A8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_METHOD_3_3CCA0B8A31B650A8_OFFSET))(this);
		}

		::System::Boolean Method_3_CA445FA4930F7C4B(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_METHOD_3_CA445FA4930F7C4B_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_DISPOSE_OFFSET))(this);
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::RPG::Client::VolumeCloudOptVolumeMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::VolumeCloudOptVolumeMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
		}
	};
}
