#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AirshipEngineBehaviorMode;

#define COMMONSHIPENGINECONTROLLER_STRUCT_2_68FF0E51C9359E7C_METHOD_2_793DE740E0E3D284_OFFSET UNITYSDK_OFFSET(0x157C90)

inline static constexpr unsigned int CommonShipEngineController_Struct_2_68FF0E51C9359E7C_TypeDefinitionIndex = 47546;

struct alignas(4) CommonShipEngineController_Struct_2_68FF0E51C9359E7C
{
	::System::Single GCJMFBKLGHI; // 0x10
	::System::Single LFMEKFKILBC; // 0x14
	::UnityEngine::Vector3 BPFIJKPNADD; // 0x18
	::UnityEngine::Quaternion NMELCPIOKNO; // 0x24

	::System::Void Method_2_793DE740E0E3D284(::AirshipEngineBehaviorMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AirshipEngineBehaviorMode*))((::PBYTE)hIl2Cpp + COMMONSHIPENGINECONTROLLER_STRUCT_2_68FF0E51C9359E7C_METHOD_2_793DE740E0E3D284_OFFSET))(this, a1);
	}
};
