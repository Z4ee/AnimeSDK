#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Cinemachine { class CinemachineTargetGroup; }

#define CINEMACHINE_GROUPWEIGHTMANIPULATOR_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1F6C7A30)
#define CINEMACHINE_GROUPWEIGHTMANIPULATOR_START_OFFSET UNITYSDK_OFFSET(0x1F6C79A0)
#define CINEMACHINE_GROUPWEIGHTMANIPULATOR_UPDATEWEIGHTS_OFFSET UNITYSDK_OFFSET(0x1F6C7B90)
#define CINEMACHINE_GROUPWEIGHTMANIPULATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F6C7A50)
#define CINEMACHINE_GROUPWEIGHTMANIPULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6C7C70)

namespace Cinemachine
{
	inline static constexpr unsigned int GroupWeightManipulator_TypeDefinitionIndex = 34807;

	class GroupWeightManipulator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single m_Weight0; // 0x18
		::System::Single m_Weight1; // 0x1C
		::System::Single m_Weight2; // 0x20
		::System::Single m_Weight3; // 0x24
		::System::Single m_Weight4; // 0x28
		::System::Single m_Weight5; // 0x2C
		::System::Single m_Weight6; // 0x30
		::System::Single m_Weight7; // 0x34
		::Cinemachine::CinemachineTargetGroup* m_group; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_GROUPWEIGHTMANIPULATOR__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_GROUPWEIGHTMANIPULATOR_START_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_GROUPWEIGHTMANIPULATOR_ONVALIDATE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_GROUPWEIGHTMANIPULATOR_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateWeights()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_GROUPWEIGHTMANIPULATOR_UPDATEWEIGHTS_OFFSET))(this);
		}
	};
}
