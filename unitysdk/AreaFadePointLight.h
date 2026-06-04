#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }

#define AREAFADEPOINTLIGHT_METHOD_5_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x13BFE580)
#define AREAFADEPOINTLIGHT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x13BFEB30)
#define AREAFADEPOINTLIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x13BFEBD0)

inline static constexpr unsigned int AreaFadePointLight_TypeDefinitionIndex = 44668;

class AreaFadePointLight : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single Range; // 0x18
	::UnityEngine::Color Color; // 0x1C
	::System::Single Intensity; // 0x2C
	::UnityEngine::Vector2 RoughnessAdjustment; // 0x30
	::System::Boolean EnableLegencyFalloff; // 0x38
	::System::Single LegencyFalloffExp; // 0x3C
	::UnityEngine::MaterialPropertyBlock* Field_5_6; // 0x40
	::UnityEngine::MeshRenderer* Field_5_7; // 0x48
	::System::Int32 Field_5_8; // 0x50
	::System::Int32 Field_5_9; // 0x54
	::System::Int32 Field_5_10; // 0x58
	::System::Int32 Field_5_11; // 0x5C
	::System::Int32 Field_5_12; // 0x60
	::System::Int32 Field_5_13; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AREAFADEPOINTLIGHT__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AREAFADEPOINTLIGHT_METHOD_5_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AREAFADEPOINTLIGHT_ONENABLE_OFFSET))(this);
	}
};
