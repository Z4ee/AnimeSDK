#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_100.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MorphBallPhysicsMiddleware; }

#define CLASS_2_3268D7C9E4CF1D39_METHOD_2_2DA5E14835AEFAD5_OFFSET UNITYSDK_OFFSET(0x15EDFE60)
#define CLASS_2_3268D7C9E4CF1D39_METHOD_2_DE973A2760D546FC_OFFSET UNITYSDK_OFFSET(0x15EDFCC0)
#define CLASS_2_3268D7C9E4CF1D39_METHOD_2_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0x15EDFDE0)
#define CLASS_2_3268D7C9E4CF1D39__CTOR_OFFSET UNITYSDK_OFFSET(0x15EDFEE0)

inline static constexpr unsigned int Class_2_3268D7C9E4CF1D39_TypeDefinitionIndex = 55171;

class Class_2_3268D7C9E4CF1D39 : public ::Class_1_43BD383C98B4C0C5_100
{
public:
	::MoleMole::MorphBallPhysicsMiddleware* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3268D7C9E4CF1D39__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_DE973A2760D546FC()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3268D7C9E4CF1D39_METHOD_2_DE973A2760D546FC_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_FA662896843C137A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3268D7C9E4CF1D39_METHOD_2_FA662896843C137A_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_2DA5E14835AEFAD5()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3268D7C9E4CF1D39_METHOD_2_2DA5E14835AEFAD5_OFFSET))(this);
	}
};
