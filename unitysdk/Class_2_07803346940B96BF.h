#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_19.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineVirtualCamera; }

#define CLASS_2_07803346940B96BF__CTOR_OFFSET UNITYSDK_OFFSET(0x14DF29D0)

inline static constexpr unsigned int Class_2_07803346940B96BF_TypeDefinitionIndex = 44408;

class Class_2_07803346940B96BF : public ::Class_1_43BD383C98B4C0C5_19
{
public:
	::Cinemachine::CinemachineVirtualCamera* Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x18
	::UnityEngine::Vector3 Field_2_2; // 0x24

	::System::Void _ctor(::Cinemachine::CinemachineVirtualCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CLASS_2_07803346940B96BF__CTOR_OFFSET))(this, a1);
	}
};
