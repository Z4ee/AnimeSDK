#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define CLASS_2_98A8CFE934705E87_METHOD_2_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x13FDB080)
#define CLASS_2_98A8CFE934705E87__CTOR_OFFSET UNITYSDK_OFFSET(0x13FDB070)

inline static constexpr unsigned int Class_2_98A8CFE934705E87_TypeDefinitionIndex = 57093;

class Class_2_98A8CFE934705E87 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::Cinemachine::CinemachineVirtualCameraBase* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A8CFE934705E87__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A8CFE934705E87_METHOD_2_568AE7A1499723FD_OFFSET))(this);
	}
};
