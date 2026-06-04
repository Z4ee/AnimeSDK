#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CarFlowIntersectionRuleGroup;

#define CARFLOWINTERSECTION_INIT_OFFSET UNITYSDK_OFFSET(0xC7381B0)
#define CARFLOWINTERSECTION_START_OFFSET UNITYSDK_OFFSET(0xC7386F0)
#define CARFLOWINTERSECTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xC738730)
#define CARFLOWINTERSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xC738770)

inline static constexpr unsigned int CarFlowIntersection_TypeDefinitionIndex = 44420;

class CarFlowIntersection : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Vector3 Origin; // 0x18
	::Il2CppArray<::CarFlowIntersectionRuleGroup*>* Rules; // 0x28
	::System::Int32 ActiveGroupIndex; // 0x30
	::System::Single RuleTimeCount; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWINTERSECTION__CTOR_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWINTERSECTION_INIT_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWINTERSECTION_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWINTERSECTION_UPDATE_OFFSET))(this);
	}
};
