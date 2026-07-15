#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Space.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINROTATE_ROTATENODE_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x19137B90)
#define RPG_CLIENT_MONOEFFECTPLUGINROTATE_ROTATENODE_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x19137980)
#define RPG_CLIENT_MONOEFFECTPLUGINROTATE_ROTATENODE_METHOD_1_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x19137A20)
#define RPG_CLIENT_MONOEFFECTPLUGINROTATE_ROTATENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19137C40)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginRotate_RotateNode_TypeDefinitionIndex = 66966;

	class MonoEffectPluginRotate_RotateNode : public ::System::Object
	{
	public:
		::UnityEngine::Transform* Node; // 0x10
		::UnityEngine::Space Space; // 0x18
		::System::Boolean FollowTimeScale; // 0x1C
		::UnityEngine::Vector3 Speed; // 0x20
		::System::Boolean IsRandomSpeed; // 0x2C
		::UnityEngine::Vector3 RandomSpeedRangeMin; // 0x30
		::UnityEngine::Vector3 RandomSpeedRangeMax; // 0x3C
		::UnityEngine::Vector3 RuntimeSpeed; // 0x48
		::System::Boolean IsRandomOrigin; // 0x54
		::UnityEngine::Vector3 RandomOriginRangeMin; // 0x58
		::UnityEngine::Vector3 RandomOriginRangeMax; // 0x64
		::UnityEngine::Quaternion OriginRotation; // 0x70
		::UnityEngine::Vector3 EulerAngle; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINROTATE_ROTATENODE__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINROTATE_ROTATENODE_METHOD_1_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_1_F4ADC37B63F4E9EF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINROTATE_ROTATENODE_METHOD_1_F4ADC37B63F4E9EF_OFFSET))(this);
		}

		::System::Void Method_1_479759059E440327(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINROTATE_ROTATENODE_METHOD_1_479759059E440327_OFFSET))(this, a1);
		}
	};
}
