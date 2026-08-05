#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_30F59ECD344F611F.h"

namespace UnityEngine { class AnimationCurve; }

#define CLASS_2_BD3A169A9EB59D93_METHOD_2_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x120EEE40)
#define CLASS_2_BD3A169A9EB59D93_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x120EEDE0)
#define CLASS_2_BD3A169A9EB59D93_METHOD_2_4FC1C8CE4FDCC705_OFFSET UNITYSDK_OFFSET(0x120EEEA0)
#define CLASS_2_BD3A169A9EB59D93_METHOD_2_8C97CA3BAB7FB2D7_OFFSET UNITYSDK_OFFSET(0x120EEF40)
#define CLASS_2_BD3A169A9EB59D93__CTOR_OFFSET UNITYSDK_OFFSET(0x120EED80)

inline static constexpr unsigned int Class_2_BD3A169A9EB59D93_TypeDefinitionIndex = 41521;

class Class_2_BD3A169A9EB59D93 : public ::Class_1_30F59ECD344F611F
{
public:
	::System::Single Field_2_2; // 0x28
	::System::Single Field_2_0; // 0x2C
	::System::Single Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD3A169A9EB59D93__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BD3A169A9EB59D93_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BD3A169A9EB59D93_METHOD_2_2685B6183E614529_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_4FC1C8CE4FDCC705(::System::Single a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::AnimationCurve* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_2_BD3A169A9EB59D93_METHOD_2_4FC1C8CE4FDCC705_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_2_8C97CA3BAB7FB2D7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BD3A169A9EB59D93_METHOD_2_8C97CA3BAB7FB2D7_OFFSET))(this, a1);
	}
};
