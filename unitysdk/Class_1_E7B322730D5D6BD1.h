#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BE235142CB1602BA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_E7B322730D5D6BD1_Class_1_FDBF110010D35C28;
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_E7B322730D5D6BD1_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x17F2D660)
#define CLASS_1_E7B322730D5D6BD1_METHOD_1_7560F6826FC6E763_OFFSET UNITYSDK_OFFSET(0x17F2D7F0)
#define CLASS_1_E7B322730D5D6BD1_METHOD_1_7C7377C794E8973C_OFFSET UNITYSDK_OFFSET(0x17F2D980)
#define CLASS_1_E7B322730D5D6BD1_METHOD_1_7F1FD6E06C5ABCA7_OFFSET UNITYSDK_OFFSET(0x17F2DA10)
#define CLASS_1_E7B322730D5D6BD1_METHOD_1_88A3DE0778A447A1_OFFSET UNITYSDK_OFFSET(0x17F2D6D0)
#define CLASS_1_E7B322730D5D6BD1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17F2D920)
#define CLASS_1_E7B322730D5D6BD1__CTOR_OFFSET UNITYSDK_OFFSET(0x17F2D970)

inline static constexpr unsigned int Class_1_E7B322730D5D6BD1_TypeDefinitionIndex = 38741;

class Class_1_E7B322730D5D6BD1 : public ::System::Object
{
public:
	::Struct_2_BE235142CB1602BA Field_1_3; // 0x10
	::Struct_2_BE235142CB1602BA Field_1_2; // 0x18
	::Class_1_E7B322730D5D6BD1_Class_1_FDBF110010D35C28* Field_1_6; // 0x20
	::System::Single Field_1_0; // 0x28
	::System::Single Field_1_1; // 0x2C
	::System::Single Field_1_5; // 0x30
	::System::Single Field_1_4; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7B322730D5D6BD1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E7B322730D5D6BD1_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_88A3DE0778A447A1(::UnityEngine::Vector4& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + CLASS_1_E7B322730D5D6BD1_METHOD_1_88A3DE0778A447A1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7B322730D5D6BD1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_7C7377C794E8973C(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_E7B322730D5D6BD1_METHOD_1_7C7377C794E8973C_OFFSET))(this, a1);
	}

	::UnityEngine::Vector4 Method_1_7560F6826FC6E763(::System::Single a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E7B322730D5D6BD1_METHOD_1_7560F6826FC6E763_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7F1FD6E06C5ABCA7(::System::Single a1, ::UnityEngine::AnimationCurve* a2, ::System::Single a3, ::UnityEngine::AnimationCurve* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_E7B322730D5D6BD1_METHOD_1_7F1FD6E06C5ABCA7_OFFSET))(this, a1, a2, a3, a4);
	}
};
