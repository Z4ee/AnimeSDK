#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD893FD36F6A3A6D.h"

class Class_1_D33B7D6901AE39E9;
namespace UnityEngine { class AnimationCurve; }

#define CLASS_2_F1EE50D0FD15AD7D_METHOD_2_D437D090E63BE8A7_OFFSET UNITYSDK_OFFSET(0x13A1EA10)
#define CLASS_2_F1EE50D0FD15AD7D__CTOR_OFFSET UNITYSDK_OFFSET(0x13A1EA00)

inline static constexpr unsigned int Class_2_F1EE50D0FD15AD7D_TypeDefinitionIndex = 71190;

class Class_2_F1EE50D0FD15AD7D : public ::Class_1_FD893FD36F6A3A6D
{
public:
	::UnityEngine::AnimationCurve* Field_2_0; // 0x18

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::UnityEngine::AnimationCurve* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_2_F1EE50D0FD15AD7D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_D437D090E63BE8A7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F1EE50D0FD15AD7D_METHOD_2_D437D090E63BE8A7_OFFSET))(this, a1);
	}
};
