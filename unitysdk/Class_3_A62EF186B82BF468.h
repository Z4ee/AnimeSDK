#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AD2DCA69807FE773.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class ConfigAnimationCurveGroup; }

#define CLASS_3_A62EF186B82BF468_METHOD_3_CB34CEEE3338453A_OFFSET UNITYSDK_OFFSET(0x119A3500)
#define CLASS_3_A62EF186B82BF468_METHOD_3_FE3660708E9F8969_OFFSET UNITYSDK_OFFSET(0x119A2BA0)
#define CLASS_3_A62EF186B82BF468__CTOR_OFFSET UNITYSDK_OFFSET(0x119A2B10)

inline static constexpr unsigned int Class_3_A62EF186B82BF468_TypeDefinitionIndex = 66345;

class Class_3_A62EF186B82BF468 : public ::Class_2_AD2DCA69807FE773
{
public:
	::UnityEngine::Vector3 Field_3_1; // 0x70
	::UnityEngine::Vector3 Field_3_0; // 0x7C

	::System::Void _ctor(::System::Boolean a1, ::System::Boolean a2, ::Foundation::Unreal::FTransform3D a3, ::MoleMole::ConfigAnimationCurveGroup* a4, ::System::Boolean a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::Foundation::Unreal::FTransform3D, ::MoleMole::ConfigAnimationCurveGroup*, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_A62EF186B82BF468__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::MoleMole::UICameraAtom Method_3_FE3660708E9F8969(::System::Single a1)
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A62EF186B82BF468_METHOD_3_FE3660708E9F8969_OFFSET))(this, a1);
	}

	::MoleMole::UICameraAtom Method_3_CB34CEEE3338453A(::System::Single a1)
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A62EF186B82BF468_METHOD_3_CB34CEEE3338453A_OFFSET))(this, a1);
	}
};
