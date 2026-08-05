#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C9A08F2A8603B39E_Struct_2_ED922149E93D65DE.h"
#include "unitysdk/Class_2_D6C023318E9B27E7.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class MonoGamepadVirtualCursor; }
namespace MoleMole { class UIUrbanMapPointWidgetContext; }
namespace MoleMole { class UIUrbanMapRightTastListWidget02WidgetContext; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RenderTexture; }
template <typename T> class Class_1_BBE667D4A3124D9B;
template <typename T> class Class_2_000597E145D7A42A;
template <typename T> class Class_2_F16D73323D71766B;

#define CLASS_2_C9A08F2A8603B39E_CLASS_3_7E8481D8C8951F7B_METHOD_3_659B881A8763C779_OFFSET UNITYSDK_OFFSET(0x1662E190)
#define CLASS_2_C9A08F2A8603B39E_CLASS_3_7E8481D8C8951F7B_METHOD_3_A2C5F89750BF61F2_OFFSET UNITYSDK_OFFSET(0x1662E1A0)
#define CLASS_2_C9A08F2A8603B39E_CLASS_3_7E8481D8C8951F7B_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1662DB40)
#define CLASS_2_C9A08F2A8603B39E_CLASS_3_7E8481D8C8951F7B__CTOR_OFFSET UNITYSDK_OFFSET(0x1662DA80)

inline static constexpr unsigned int Class_2_C9A08F2A8603B39E_Class_3_7E8481D8C8951F7B_TypeDefinitionIndex = 74872;

class Class_2_C9A08F2A8603B39E_Class_3_7E8481D8C8951F7B : public ::Class_2_D6C023318E9B27E7
{
public:
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapRightTastListWidget02WidgetContext*>* Field_3_5; // 0xD0
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_3_8; // 0xD8
	::Class_2_000597E145D7A42A<::UnityEngine::RenderTexture*>* Field_3_0; // 0xE0
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapRightTastListWidget02WidgetContext*>* Field_3_4; // 0xE8
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapPointWidgetContext*>* Field_3_13; // 0xF0
	::Class_2_F16D73323D71766B<::System::Boolean>* Field_3_1; // 0xF8
	::Class_2_000597E145D7A42A<::UnityEngine::Rect>* Field_3_9; // 0x100
	::System::Action_1<::Class_2_C9A08F2A8603B39E_Class_3_7E8481D8C8951F7B*>* Field_3_18; // 0x108
	::Class_1_BBE667D4A3124D9B<::UnityEngine::Bounds>* Field_3_12; // 0x110
	::Class_2_000597E145D7A42A<::UnityEngine::Vector2>* Field_3_15; // 0x118
	::Class_2_000597E145D7A42A<::System::Int32>* Field_3_7; // 0x120
	::System::Func_1<::System::Boolean>* Field_3_19; // 0x128
	::Class_2_000597E145D7A42A<::MoleMole::MonoGamepadVirtualCursor*>* Field_3_14; // 0x130
	::Class_2_000597E145D7A42A<::UnityEngine::Bounds>* Field_3_10; // 0x138
	::Class_2_000597E145D7A42A<::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>*>* Field_3_11; // 0x140
	::Class_2_000597E145D7A42A<::Class_2_C9A08F2A8603B39E_Struct_2_ED922149E93D65DE>* Field_3_6; // 0x148

	::System::Void _ctor(::System::Func_1<::System::Boolean>* a1, ::System::Action_1<::Class_2_C9A08F2A8603B39E_Class_3_7E8481D8C8951F7B*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*, ::System::Action_1<::Class_2_C9A08F2A8603B39E_Class_3_7E8481D8C8951F7B*>*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_CLASS_3_7E8481D8C8951F7B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_CLASS_3_7E8481D8C8951F7B_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void Method_3_659B881A8763C779()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_CLASS_3_7E8481D8C8951F7B_METHOD_3_659B881A8763C779_OFFSET))(this);
	}

	::System::Void Method_3_A2C5F89750BF61F2(::Struct_2_C8629618711DF8B3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_CLASS_3_7E8481D8C8951F7B_METHOD_3_A2C5F89750BF61F2_OFFSET))(this, a1);
	}
};
