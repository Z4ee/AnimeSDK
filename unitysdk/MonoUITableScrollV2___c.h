#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_Data.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class ILayoutElement; }

#define MONOUITABLESCROLLV2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF9694F0)
#define MONOUITABLESCROLLV2___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF969530)
#define MONOUITABLESCROLLV2___C__GETMINHEIGHT_B__744_0_OFFSET UNITYSDK_OFFSET(0xF9699A0)
#define MONOUITABLESCROLLV2___C__GETMINWIDTH_B__743_0_OFFSET UNITYSDK_OFFSET(0xF9698D0)
#define MONOUITABLESCROLLV2___C__GETPREFERREDHEIGHT_B__742_0_OFFSET UNITYSDK_OFFSET(0xF969730)
#define MONOUITABLESCROLLV2___C__GETPREFERREDHEIGHT_B__742_1_OFFSET UNITYSDK_OFFSET(0xF969800)
#define MONOUITABLESCROLLV2___C__GETPREFERREDWIDTH_B__741_0_OFFSET UNITYSDK_OFFSET(0xF969590)
#define MONOUITABLESCROLLV2___C__GETPREFERREDWIDTH_B__741_1_OFFSET UNITYSDK_OFFSET(0xF969660)
#define MONOUITABLESCROLLV2___C__GETVIEWPORTCHILDREN_B__464_0_OFFSET UNITYSDK_OFFSET(0xF969540)
#define MONOUITABLESCROLLV2___C__SCROLLTOBOTTOMWITHOUTANIM_B__730_0_OFFSET UNITYSDK_OFFSET(0xF969580)

inline static constexpr unsigned int MonoUITableScrollV2___c_TypeDefinitionIndex = 70004;

class MonoUITableScrollV2___c : public ::System::Object
{
public:
	static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__743_0()
	{
		return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x34BD0);
	}
	static ::System::Func_2<::MonoUITableScrollV2_Data, ::System::Object*>** StaticGet___9__730_0()
	{
		return (::System::Func_2<::MonoUITableScrollV2_Data, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x34BD8);
	}
	static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__742_0()
	{
		return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x34BE0);
	}
	static ::System::Comparison_1<::UnityEngine::RectTransform*>** StaticGet___9__464_0()
	{
		return (::System::Comparison_1<::UnityEngine::RectTransform*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x34BE8);
	}
	static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__744_0()
	{
		return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x34BF0);
	}
	static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__741_0()
	{
		return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x34BF8);
	}
	static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__742_1()
	{
		return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x34C00);
	}
	static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__741_1()
	{
		return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x34C08);
	}
	static ::MonoUITableScrollV2___c** StaticGet___9()
	{
		return (::MonoUITableScrollV2___c**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x34C10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _GetViewportChildren_b__464_0(::UnityEngine::RectTransform* lhs, ::UnityEngine::RectTransform* rhs)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__GETVIEWPORTCHILDREN_B__464_0_OFFSET))(this, lhs, rhs);
	}

	::System::Object* _ScrollToBottomWithoutAnim_b__730_0(::MonoUITableScrollV2_Data v)
	{
		return ((::System::Object*(*)(::PVOID, ::MonoUITableScrollV2_Data))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__SCROLLTOBOTTOMWITHOUTANIM_B__730_0_OFFSET))(this, v);
	}

	::System::Single _GetPreferredWidth_b__741_0(::UnityEngine::UI::ILayoutElement* e)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__GETPREFERREDWIDTH_B__741_0_OFFSET))(this, e);
	}

	::System::Single _GetPreferredWidth_b__741_1(::UnityEngine::UI::ILayoutElement* e)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__GETPREFERREDWIDTH_B__741_1_OFFSET))(this, e);
	}

	::System::Single _GetPreferredHeight_b__742_0(::UnityEngine::UI::ILayoutElement* e)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__GETPREFERREDHEIGHT_B__742_0_OFFSET))(this, e);
	}

	::System::Single _GetPreferredHeight_b__742_1(::UnityEngine::UI::ILayoutElement* e)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__GETPREFERREDHEIGHT_B__742_1_OFFSET))(this, e);
	}

	::System::Single _GetMinWidth_b__743_0(::UnityEngine::UI::ILayoutElement* e)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__GETMINWIDTH_B__743_0_OFFSET))(this, e);
	}

	::System::Single _GetMinHeight_b__744_0(::UnityEngine::UI::ILayoutElement* e)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__GETMINHEIGHT_B__744_0_OFFSET))(this, e);
	}
};
