#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ConstellationEffectGroup_ConstellationAnchor;
namespace UnityEngine { class GameObject; }

#define CONSTELLATIONEFFECTGROUP_CLASS_1_77B6A5C3CCA4BBDC_METHOD_1_248C354FAAB50CEE_OFFSET UNITYSDK_OFFSET(0x16B482F0)
#define CONSTELLATIONEFFECTGROUP_CLASS_1_77B6A5C3CCA4BBDC_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x16B47E40)
#define CONSTELLATIONEFFECTGROUP_CLASS_1_77B6A5C3CCA4BBDC__CTOR_OFFSET UNITYSDK_OFFSET(0x16B482E0)

inline static constexpr unsigned int ConstellationEffectGroup_Class_1_77B6A5C3CCA4BBDC_TypeDefinitionIndex = 45541;

class ConstellationEffectGroup_Class_1_77B6A5C3CCA4BBDC : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::ConstellationEffectGroup_ConstellationAnchor* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20
	::UnityEngine::Vector3 Field_1_3; // 0x24
	::UnityEngine::Vector3 Field_1_4; // 0x30
	::UnityEngine::Vector3 Field_1_5; // 0x3C
	::System::Single Field_1_6; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTELLATIONEFFECTGROUP_CLASS_1_77B6A5C3CCA4BBDC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_248C354FAAB50CEE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTELLATIONEFFECTGROUP_CLASS_1_77B6A5C3CCA4BBDC_METHOD_1_248C354FAAB50CEE_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTELLATIONEFFECTGROUP_CLASS_1_77B6A5C3CCA4BBDC_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}
};
