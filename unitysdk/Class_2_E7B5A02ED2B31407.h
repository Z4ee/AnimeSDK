#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_30F59ECD344F611F.h"

namespace UnityEngine { class AnimationCurve; }

#define CLASS_2_E7B5A02ED2B31407_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1357EA60)
#define CLASS_2_E7B5A02ED2B31407_METHOD_2_4DCA4871D90B0280_OFFSET UNITYSDK_OFFSET(0x1357EAC0)
#define CLASS_2_E7B5A02ED2B31407_METHOD_2_4FC1C8CE4FDCC705_OFFSET UNITYSDK_OFFSET(0x1357ECE0)
#define CLASS_2_E7B5A02ED2B31407_METHOD_2_8C97CA3BAB7FB2D7_OFFSET UNITYSDK_OFFSET(0x1357ED80)
#define CLASS_2_E7B5A02ED2B31407_METHOD_2_DE2A6013C197E496_OFFSET UNITYSDK_OFFSET(0x1357EC00)
#define CLASS_2_E7B5A02ED2B31407__CTOR_OFFSET UNITYSDK_OFFSET(0x1357EA00)

inline static constexpr unsigned int Class_2_E7B5A02ED2B31407_TypeDefinitionIndex = 64834;

class Class_2_E7B5A02ED2B31407 : public ::Class_1_30F59ECD344F611F
{
public:
	::System::Single Field_2_0; // 0x28
	::System::Single Field_2_2; // 0x2C
	::System::Single Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7B5A02ED2B31407__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E7B5A02ED2B31407_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Single Method_2_4DCA4871D90B0280(::System::Single a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E7B5A02ED2B31407_METHOD_2_4DCA4871D90B0280_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_DE2A6013C197E496(::System::Single a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::AnimationCurve* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_2_E7B5A02ED2B31407_METHOD_2_DE2A6013C197E496_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_4FC1C8CE4FDCC705(::System::Single a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::AnimationCurve* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_2_E7B5A02ED2B31407_METHOD_2_4FC1C8CE4FDCC705_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_2_8C97CA3BAB7FB2D7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E7B5A02ED2B31407_METHOD_2_8C97CA3BAB7FB2D7_OFFSET))(this, a1);
	}
};
