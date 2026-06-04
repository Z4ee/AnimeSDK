#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class CameraBlendCurve; }

#define CLASS_1_4194FD1D0EB8BE87__CTOR_OFFSET UNITYSDK_OFFSET(0xC96BE40)

inline static constexpr unsigned int Class_1_4194FD1D0EB8BE87_TypeDefinitionIndex = 65109;

class Class_1_4194FD1D0EB8BE87 : public ::System::Object
{
public:
	::RPG::Client::CameraBlendCurve* Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x24
	::UnityEngine::Vector3 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4194FD1D0EB8BE87__CTOR_OFFSET))(this);
	}
};
