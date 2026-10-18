#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RootMotion::FinalIK { class RotationLimit; }
namespace UnityEngine { class Transform; }

#define CLASS_1_D3FB33662F9D2AD5_CLASS_1_E293D61CB0F9F52B__CTOR_OFFSET UNITYSDK_OFFSET(0xB9D3AF0)

inline static constexpr unsigned int Class_1_D3FB33662F9D2AD5_Class_1_E293D61CB0F9F52B_TypeDefinitionIndex = 68446;

class Class_1_D3FB33662F9D2AD5_Class_1_E293D61CB0F9F52B : public ::System::Object
{
public:
	::RootMotion::FinalIK::RotationLimit* JMJOBHDKNBC; // 0x10
	::UnityEngine::Transform* EEHPALPMDPG; // 0x18
	::System::Single APAKCBFMCAB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3FB33662F9D2AD5_CLASS_1_E293D61CB0F9F52B__CTOR_OFFSET))(this);
	}
};
