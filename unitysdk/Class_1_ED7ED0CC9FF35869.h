#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_ED7ED0CC9FF35869_METHOD_1_39E4335E64A32303_OFFSET UNITYSDK_OFFSET(0x155E9860)
#define CLASS_1_ED7ED0CC9FF35869_METHOD_1_71ECEE8F89B84F6A_OFFSET UNITYSDK_OFFSET(0x155E9AD0)
#define CLASS_1_ED7ED0CC9FF35869_METHOD_1_FD1EFD5A6E481F5B_OFFSET UNITYSDK_OFFSET(0x155E9A10)

inline static constexpr unsigned int Class_1_ED7ED0CC9FF35869_TypeDefinitionIndex = 90946;

class Class_1_ED7ED0CC9FF35869 : public ::System::Object
{
public:
	static ::System::Single Method_1_39E4335E64A32303(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Int32 a5)
	{
		return ((::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ED7ED0CC9FF35869_METHOD_1_39E4335E64A32303_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Single Method_1_FD1EFD5A6E481F5B(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_ED7ED0CC9FF35869_METHOD_1_FD1EFD5A6E481F5B_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_71ECEE8F89B84F6A(::UnityEngine::AnimationCurve* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_ED7ED0CC9FF35869_METHOD_1_71ECEE8F89B84F6A_OFFSET))(a1, a2);
	}
};
