#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class RectTransform; }

#define POPEFFECT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E34F640)
#define POPEFFECT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E34F680)
#define POPEFFECT___C__SETTEXTWITHOUTANIMATION_B__10_0_OFFSET UNITYSDK_OFFSET(0x1E34F6C0)
#define POPEFFECT___C__SETTEXT_B__9_0_OFFSET UNITYSDK_OFFSET(0x1E34F690)

inline static constexpr unsigned int PopEffect___c_TypeDefinitionIndex = 79049;

class PopEffect___c : public ::System::Object
{
public:
	static ::PopEffect___c** StaticGet___9()
	{
		return (::PopEffect___c**)Il2CppClass::FromTypeDefinitionIndex(PopEffect___c_TypeDefinitionIndex)->GetStaticField(0x4EF40);
	}
	static ::System::Predicate_1<::System::ValueTuple_2<::UnityEngine::RectTransform*, ::System::Single>>** StaticGet___9__10_0()
	{
		return (::System::Predicate_1<::System::ValueTuple_2<::UnityEngine::RectTransform*, ::System::Single>>**)Il2CppClass::FromTypeDefinitionIndex(PopEffect___c_TypeDefinitionIndex)->GetStaticField(0x4EF48);
	}
	static ::System::Predicate_1<::System::ValueTuple_2<::UnityEngine::RectTransform*, ::System::Single>>** StaticGet___9__9_0()
	{
		return (::System::Predicate_1<::System::ValueTuple_2<::UnityEngine::RectTransform*, ::System::Single>>**)Il2CppClass::FromTypeDefinitionIndex(PopEffect___c_TypeDefinitionIndex)->GetStaticField(0x4EF50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POPEFFECT___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPEFFECT___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _SetText_b__9_0(::System::ValueTuple_2<::UnityEngine::RectTransform*, ::System::Single> x)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::UnityEngine::RectTransform*, ::System::Single>))((::PBYTE)hIl2Cpp + POPEFFECT___C__SETTEXT_B__9_0_OFFSET))(this, x);
	}

	::System::Boolean _SetTextWithOutAnimation_b__10_0(::System::ValueTuple_2<::UnityEngine::RectTransform*, ::System::Single> x)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::UnityEngine::RectTransform*, ::System::Single>))((::PBYTE)hIl2Cpp + POPEFFECT___C__SETTEXTWITHOUTANIMATION_B__10_0_OFFSET))(this, x);
	}
};
