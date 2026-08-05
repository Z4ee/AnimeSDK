#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class OverShoulderCameraConfig; }
namespace MoleMole::Cameras { class ScopedOverShoulderCamera; }

#define CLASS_1_45E02118116C45A5_METHOD_1_74553A55D7E3105E_OFFSET UNITYSDK_OFFSET(0x1390A920)

inline static constexpr unsigned int Class_1_45E02118116C45A5_TypeDefinitionIndex = 64804;

class Class_1_45E02118116C45A5 : public ::System::Object
{
public:
	static ::System::Void Method_1_74553A55D7E3105E(::MoleMole::EntityHandle a1, ::MoleMole::Cameras::OverShoulderCameraConfig* a2, ::UnityEngine::Vector3 a3, ::MoleMole::Cameras::ScopedOverShoulderCamera*& a4)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::UnityEngine::Vector3, ::MoleMole::Cameras::ScopedOverShoulderCamera*&))((::PBYTE)hIl2Cpp + CLASS_1_45E02118116C45A5_METHOD_1_74553A55D7E3105E_OFFSET))(a1, a2, a3, a4);
	}
};
