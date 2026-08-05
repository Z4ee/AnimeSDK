#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_30F59ECD344F611F.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define CLASS_2_D722AF0488E0946F_METHOD_2_3EA6838F27BFE8C5_OFFSET UNITYSDK_OFFSET(0x141DCA50)
#define CLASS_2_D722AF0488E0946F_METHOD_2_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x141DCC00)
#define CLASS_2_D722AF0488E0946F_METHOD_2_953E5349B3BD8FFD_OFFSET UNITYSDK_OFFSET(0x141DC830)
#define CLASS_2_D722AF0488E0946F_METHOD_2_E5340AA01F92592A_OFFSET UNITYSDK_OFFSET(0x141DC900)
#define CLASS_2_D722AF0488E0946F__CTOR_OFFSET UNITYSDK_OFFSET(0x141DC7D0)

inline static constexpr unsigned int Class_2_D722AF0488E0946F_TypeDefinitionIndex = 46338;

class Class_2_D722AF0488E0946F : public ::Class_1_30F59ECD344F611F
{
public:
	::UnityEngine::Vector3 Field_2_0; // 0x28
	::UnityEngine::Vector3 Field_2_2; // 0x34
	::UnityEngine::Vector3 Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D722AF0488E0946F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_953E5349B3BD8FFD(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::AnimationCurve* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_2_D722AF0488E0946F_METHOD_2_953E5349B3BD8FFD_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_2_E5340AA01F92592A(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D722AF0488E0946F_METHOD_2_E5340AA01F92592A_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_3EA6838F27BFE8C5(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::AnimationCurve* a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D722AF0488E0946F_METHOD_2_3EA6838F27BFE8C5_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_D722AF0488E0946F_METHOD_2_40E490E2772D5D75_OFFSET))(this, a1);
	}
};
