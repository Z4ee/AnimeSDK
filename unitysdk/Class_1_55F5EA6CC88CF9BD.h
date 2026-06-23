#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class OverShoulderCameraConfig; }
namespace MoleMole::Cameras { class ScopedOverShoulderCamera; }

#define CLASS_1_55F5EA6CC88CF9BD_METHOD_1_4E4680B4D272F6D7_OFFSET UNITYSDK_OFFSET(0x1335AED0)

inline static constexpr unsigned int Class_1_55F5EA6CC88CF9BD_TypeDefinitionIndex = 82133;

class Class_1_55F5EA6CC88CF9BD : public ::System::Object
{
public:
	static ::System::Void Method_1_4E4680B4D272F6D7(::MoleMole::EntityHandle a1, ::MoleMole::Cameras::OverShoulderCameraConfig* a2, ::UnityEngine::Vector3 a3, ::MoleMole::Cameras::ScopedOverShoulderCamera*& a4)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::UnityEngine::Vector3, ::MoleMole::Cameras::ScopedOverShoulderCamera*&))((::PBYTE)hIl2Cpp + CLASS_1_55F5EA6CC88CF9BD_METHOD_1_4E4680B4D272F6D7_OFFSET))(a1, a2, a3, a4);
	}
};
