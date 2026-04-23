#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class VolumeCloudOptVolumeMonoPlugin; }
namespace RPG::CustomRP { class VolumetricCloudLayer; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4C05A0)
#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xB4C02B0)
#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xB4C0920)
#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_METHOD_3_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0xB4C00D0)
#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_METHOD_3_91217E1D36C5D86A_OFFSET UNITYSDK_OFFSET(0xB4C02F0)
#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB4C0600)
#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xB4C0690)
#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xB4C08E0)
#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4C0910)
#define RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xB4C0980)

namespace RPG::Client
{
	inline static constexpr unsigned int VolumeCloudOptVolumeBehavior_TypeDefinitionIndex = 65322;

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

		::System::Void Method_3_5A124CAF1E48B74F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_METHOD_3_5A124CAF1E48B74F_OFFSET))(this);
		}

		::System::Boolean Method_3_91217E1D36C5D86A(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR_METHOD_3_91217E1D36C5D86A_OFFSET))(this, a1);
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

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_VOLUMECLOUDOPTVOLUMEBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}
	};
}
