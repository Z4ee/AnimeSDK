#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class CameraBlendCurve; }

#define CLASS_1_4194FD1D0EB8BE87__CTOR_OFFSET UNITYSDK_OFFSET(0x184E10F0)

inline static constexpr unsigned int Class_1_4194FD1D0EB8BE87_TypeDefinitionIndex = 69607;

class Class_1_4194FD1D0EB8BE87 : public ::System::Object
{
public:
	::RPG::Client::CameraBlendCurve* NLIFDJHPHLP; // 0x10
	::System::Single FLFLMEHJFPI; // 0x18
	::UnityEngine::Vector3 OKEIJHOGFFC; // 0x1C
	::UnityEngine::Vector3 KMNMAFDBCEK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4194FD1D0EB8BE87__CTOR_OFFSET))(this);
	}
};
