#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BD3EF046502B972.h"
#include "unitysdk/MoleMole/UICameraAtom.h"

namespace UnityEngine { class AnimationCurve; }

#define CLASS_2_34957DA29822D61A_METHOD_2_9097226D66E1A14A_OFFSET UNITYSDK_OFFSET(0x117908E0)
#define CLASS_2_34957DA29822D61A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x11790830)
#define CLASS_2_34957DA29822D61A__CTOR_OFFSET UNITYSDK_OFFSET(0x11790790)

inline static constexpr unsigned int Class_2_34957DA29822D61A_TypeDefinitionIndex = 38502;

class Class_2_34957DA29822D61A : public ::Class_1_5BD3EF046502B972
{
public:
	::UnityEngine::AnimationCurve* Field_2_2; // 0x20
	::System::Boolean Field_2_1; // 0x28
	::System::Single Field_2_3; // 0x2C
	::System::Single Field_2_5; // 0x30
	::System::Single Field_2_4; // 0x34
	::System::Int32 Field_2_11; // 0x38
	::System::Single Field_2_8; // 0x3C
	::System::Single Field_2_7; // 0x40
	::System::Single Field_2_9; // 0x44
	::System::Single Field_2_10; // 0x48
	::System::Single Field_2_0; // 0x4C
	::System::Single Field_2_6; // 0x50

	::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::UnityEngine::AnimationCurve* a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_34957DA29822D61A__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	::System::Void _ctor_1(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::UnityEngine::AnimationCurve* a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11, ::System::Boolean a12)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_34957DA29822D61A__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::MoleMole::UICameraAtom Method_2_9097226D66E1A14A(::System::Single a1, ::System::Single a2, ::MoleMole::UICameraAtom a3)
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CLASS_2_34957DA29822D61A_METHOD_2_9097226D66E1A14A_OFFSET))(this, a1, a2, a3);
	}
};
