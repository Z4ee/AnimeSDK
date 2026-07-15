#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_68DDCD4A4411AB4A_METHOD_1_7B1769B98A2C7F62_OFFSET UNITYSDK_OFFSET(0x186BB0C0)
#define CLASS_1_68DDCD4A4411AB4A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x186BAFE0)
#define CLASS_1_68DDCD4A4411AB4A_METHOD_1_D8EB89DF128EDA39_OFFSET UNITYSDK_OFFSET(0x186BB030)
#define CLASS_1_68DDCD4A4411AB4A_METHOD_1_DA7D5FED1E10712C_OFFSET UNITYSDK_OFFSET(0x186BB620)
#define CLASS_1_68DDCD4A4411AB4A__CTOR_OFFSET UNITYSDK_OFFSET(0x186B3E60)

inline static constexpr unsigned int Class_1_68DDCD4A4411AB4A_TypeDefinitionIndex = 66233;

class Class_1_68DDCD4A4411AB4A : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* Field_1_0; // 0x10
	::UnityEngine::AnimationCurve* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x24
	::System::Single Field_1_4; // 0x28
	::System::Boolean Field_1_5; // 0x2C
	::System::Single Field_1_6; // 0x30
	::System::Single Field_1_7; // 0x34
	::System::Single Field_1_8; // 0x38
	::System::Single Field_1_9; // 0x3C

	::System::Void _ctor(::UnityEngine::AnimationCurve* a1, ::UnityEngine::AnimationCurve* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_68DDCD4A4411AB4A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68DDCD4A4411AB4A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_D8EB89DF128EDA39(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_68DDCD4A4411AB4A_METHOD_1_D8EB89DF128EDA39_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_7B1769B98A2C7F62(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_68DDCD4A4411AB4A_METHOD_1_7B1769B98A2C7F62_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_DA7D5FED1E10712C()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68DDCD4A4411AB4A_METHOD_1_DA7D5FED1E10712C_OFFSET))(this);
	}
};
