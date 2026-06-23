#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BD3EF046502B972.h"
#include "unitysdk/MoleMole/UICameraAtom.h"

namespace UnityEngine { class AnimationCurve; }

#define CLASS_2_8E517F4AD70D61E0_METHOD_2_09DC5A140B7A2D38_OFFSET UNITYSDK_OFFSET(0x1172F2A0)
#define CLASS_2_8E517F4AD70D61E0__CTOR_OFFSET UNITYSDK_OFFSET(0x1172F270)

inline static constexpr unsigned int Class_2_8E517F4AD70D61E0_TypeDefinitionIndex = 82994;

class Class_2_8E517F4AD70D61E0 : public ::Class_1_5BD3EF046502B972
{
public:
	::UnityEngine::AnimationCurve* Field_2_2; // 0x20
	::System::Single Field_2_1; // 0x28
	::System::Single Field_2_0; // 0x2C

	::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::AnimationCurve* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_2_8E517F4AD70D61E0__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::MoleMole::UICameraAtom Method_2_09DC5A140B7A2D38(::System::Single a1, ::System::Single a2, ::MoleMole::UICameraAtom a3)
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CLASS_2_8E517F4AD70D61E0_METHOD_2_09DC5A140B7A2D38_OFFSET))(this, a1, a2, a3);
	}
};
