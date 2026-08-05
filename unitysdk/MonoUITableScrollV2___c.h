#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_Data.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class ILayoutElement; }

#define MONOUITABLESCROLLV2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E58140)
#define MONOUITABLESCROLLV2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11E58180)
#define MONOUITABLESCROLLV2___C__GETMINHEIGHT_B__798_0_OFFSET UNITYSDK_OFFSET(0x11E585F0)
#define MONOUITABLESCROLLV2___C__GETMINWIDTH_B__797_0_OFFSET UNITYSDK_OFFSET(0x11E58520)
#define MONOUITABLESCROLLV2___C__GETPREFERREDHEIGHT_B__796_0_OFFSET UNITYSDK_OFFSET(0x11E58380)
#define MONOUITABLESCROLLV2___C__GETPREFERREDHEIGHT_B__796_1_OFFSET UNITYSDK_OFFSET(0x11E58450)
#define MONOUITABLESCROLLV2___C__GETPREFERREDWIDTH_B__795_0_OFFSET UNITYSDK_OFFSET(0x11E581E0)
#define MONOUITABLESCROLLV2___C__GETPREFERREDWIDTH_B__795_1_OFFSET UNITYSDK_OFFSET(0x11E582B0)
#define MONOUITABLESCROLLV2___C__GETVIEWPORTCHILDREN_B__498_0_OFFSET UNITYSDK_OFFSET(0x11E58190)
#define MONOUITABLESCROLLV2___C__SCROLLTOBOTTOMWITHOUTANIM_B__777_0_OFFSET UNITYSDK_OFFSET(0x11E581D0)

inline static constexpr unsigned int MonoUITableScrollV2___c_TypeDefinitionIndex = 74968;

class MonoUITableScrollV2___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::UnityEngine::RectTransform*>** StaticGet___9__498_0()
	{
		return (::System::Comparison_1<::UnityEngine::RectTransform*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x37240);
	}
	static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__795_1()
	{
		return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x37248);
	}
	static ::System::Func_2<::MonoUITableScrollV2_Data, ::System::Object*>** StaticGet___9__777_0()
	{
		return (::System::Func_2<::MonoUITableScrollV2_Data, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x37250);
	}
	static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__797_0()
	{
		return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x37258);
	}
	static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__796_0()
	{
		return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x37260);
	}
	static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__795_0()
	{
		return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x37268);
	}
	static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__796_1()
	{
		return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x37270);
	}
	static ::MonoUITableScrollV2___c** StaticGet___9()
	{
		return (::MonoUITableScrollV2___c**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x37278);
	}
	static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__798_0()
	{
		return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x37280);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _GetViewportChildren_b__498_0(::UnityEngine::RectTransform* lhs, ::UnityEngine::RectTransform* rhs)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__GETVIEWPORTCHILDREN_B__498_0_OFFSET))(this, lhs, rhs);
	}

	::System::Object* _ScrollToBottomWithoutAnim_b__777_0(::MonoUITableScrollV2_Data v)
	{
		return ((::System::Object*(*)(::PVOID, ::MonoUITableScrollV2_Data))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__SCROLLTOBOTTOMWITHOUTANIM_B__777_0_OFFSET))(this, v);
	}

	::System::Single _GetPreferredWidth_b__795_0(::UnityEngine::UI::ILayoutElement* e)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__GETPREFERREDWIDTH_B__795_0_OFFSET))(this, e);
	}

	::System::Single _GetPreferredWidth_b__795_1(::UnityEngine::UI::ILayoutElement* e)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__GETPREFERREDWIDTH_B__795_1_OFFSET))(this, e);
	}

	::System::Single _GetPreferredHeight_b__796_0(::UnityEngine::UI::ILayoutElement* e)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__GETPREFERREDHEIGHT_B__796_0_OFFSET))(this, e);
	}

	::System::Single _GetPreferredHeight_b__796_1(::UnityEngine::UI::ILayoutElement* e)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__GETPREFERREDHEIGHT_B__796_1_OFFSET))(this, e);
	}

	::System::Single _GetMinWidth_b__797_0(::UnityEngine::UI::ILayoutElement* e)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__GETMINWIDTH_B__797_0_OFFSET))(this, e);
	}

	::System::Single _GetMinHeight_b__798_0(::UnityEngine::UI::ILayoutElement* e)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__GETMINHEIGHT_B__798_0_OFFSET))(this, e);
	}
};
