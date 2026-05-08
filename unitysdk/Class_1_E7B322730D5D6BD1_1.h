#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E7B322730D5D6BD1_1_Struct_2_7A22DE6AE4203040.h"
#include "unitysdk/Struct_2_BE235142CB1602BA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_E7B322730D5D6BD1_1_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x15333FD0)
#define CLASS_1_E7B322730D5D6BD1_1_METHOD_1_46D5C4F0EA172C6A_OFFSET UNITYSDK_OFFSET(0x15334390)
#define CLASS_1_E7B322730D5D6BD1_1_METHOD_1_7F1FD6E06C5ABCA7_OFFSET UNITYSDK_OFFSET(0x15334300)
#define CLASS_1_E7B322730D5D6BD1_1_METHOD_1_88A3DE0778A447A1_OFFSET UNITYSDK_OFFSET(0x15334040)
#define CLASS_1_E7B322730D5D6BD1_1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x153342A0)
#define CLASS_1_E7B322730D5D6BD1_1_METHOD_1_E809E37129EF4650_OFFSET UNITYSDK_OFFSET(0x15334160)
#define CLASS_1_E7B322730D5D6BD1_1__CTOR_OFFSET UNITYSDK_OFFSET(0x153342F0)

inline static constexpr unsigned int Class_1_E7B322730D5D6BD1_1_TypeDefinitionIndex = 42294;

class Class_1_E7B322730D5D6BD1_1 : public ::System::Object
{
public:
	::Struct_2_BE235142CB1602BA Field_1_2; // 0x10
	::Struct_2_BE235142CB1602BA Field_1_3; // 0x18
	::Class_1_E7B322730D5D6BD1_1_Struct_2_7A22DE6AE4203040 Field_1_6; // 0x20
	::System::Single Field_1_1; // 0x28
	::System::Single Field_1_5; // 0x2C
	::System::Single Field_1_4; // 0x30
	::System::Single Field_1_0; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7B322730D5D6BD1_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E7B322730D5D6BD1_1_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_88A3DE0778A447A1(::UnityEngine::Vector4& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + CLASS_1_E7B322730D5D6BD1_1_METHOD_1_88A3DE0778A447A1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7B322730D5D6BD1_1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_7F1FD6E06C5ABCA7(::System::Single a1, ::UnityEngine::AnimationCurve* a2, ::System::Single a3, ::UnityEngine::AnimationCurve* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_E7B322730D5D6BD1_1_METHOD_1_7F1FD6E06C5ABCA7_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector4 Method_1_E809E37129EF4650(::System::Single a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E7B322730D5D6BD1_1_METHOD_1_E809E37129EF4650_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_46D5C4F0EA172C6A(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_E7B322730D5D6BD1_1_METHOD_1_46D5C4F0EA172C6A_OFFSET))(this, a1);
	}
};
