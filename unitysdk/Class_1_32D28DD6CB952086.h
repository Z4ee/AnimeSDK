#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_6378A8AD9A7CDBB8;
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_32D28DD6CB952086_METHOD_1_0FDE67E8BCF7203D_OFFSET UNITYSDK_OFFSET(0x139CF6E0)
#define CLASS_1_32D28DD6CB952086_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x139CF650)
#define CLASS_1_32D28DD6CB952086_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x139CF3C0)
#define CLASS_1_32D28DD6CB952086_METHOD_1_DC27F0A4B4484065_OFFSET UNITYSDK_OFFSET(0x139CF570)
#define CLASS_1_32D28DD6CB952086__CTOR_OFFSET UNITYSDK_OFFSET(0x139CF360)

inline static constexpr unsigned int Class_1_32D28DD6CB952086_TypeDefinitionIndex = 54723;

class Class_1_32D28DD6CB952086 : public ::System::Object
{
public:
	::Class_1_6378A8AD9A7CDBB8* Field_1_1; // 0x10
	::Class_1_6378A8AD9A7CDBB8* Field_1_2; // 0x18
	::Class_1_6378A8AD9A7CDBB8* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32D28DD6CB952086__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32D28DD6CB952086_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_1_DC27F0A4B4484065(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_32D28DD6CB952086_METHOD_1_DC27F0A4B4484065_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32D28DD6CB952086_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_0FDE67E8BCF7203D(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_32D28DD6CB952086_METHOD_1_0FDE67E8BCF7203D_OFFSET))(this, a1);
	}
};
