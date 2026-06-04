#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NpcBodyEyeConfig_EyeTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_1_DBD884B6630BACC3_EYETRANSFORM_METHOD_1_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x13A531D0)
#define CLASS_1_DBD884B6630BACC3_EYETRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x13A531C0)

inline static constexpr unsigned int Class_1_DBD884B6630BACC3_EyeTransform_TypeDefinitionIndex = 56150;

class Class_1_DBD884B6630BACC3_EyeTransform : public ::System::Object
{
public:
	::UnityEngine::Transform* transform; // 0x10
	::RPG::Client::NpcBodyEyeConfig_EyeTransform* config; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBD884B6630BACC3_EYETRANSFORM__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_76CD9B9D1269FA90(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DBD884B6630BACC3_EYETRANSFORM_METHOD_1_76CD9B9D1269FA90_OFFSET))(this, a1);
	}
};
