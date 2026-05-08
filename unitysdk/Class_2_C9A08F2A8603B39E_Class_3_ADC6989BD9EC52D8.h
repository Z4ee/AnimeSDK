#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_D6C023318E9B27E7.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoGamepadVirtualCursor; }
namespace MoleMole { class UIUrbanMapPointWidgetContext; }
namespace MoleMole { class UIUrbanMapRightTastListWidget02WidgetContext; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RenderTexture; }
template <typename T> class Class_2_000597E145D7A42A;
template <typename T> class Class_2_F16D73323D71766B;

#define CLASS_2_C9A08F2A8603B39E_CLASS_3_ADC6989BD9EC52D8_METHOD_3_2B45EBE62D53D449_OFFSET UNITYSDK_OFFSET(0x113F4F50)
#define CLASS_2_C9A08F2A8603B39E_CLASS_3_ADC6989BD9EC52D8_METHOD_3_659B881A8763C779_OFFSET UNITYSDK_OFFSET(0x113F4F40)
#define CLASS_2_C9A08F2A8603B39E_CLASS_3_ADC6989BD9EC52D8_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x113F4F00)
#define CLASS_2_C9A08F2A8603B39E_CLASS_3_ADC6989BD9EC52D8__CTOR_OFFSET UNITYSDK_OFFSET(0x113F4E60)

inline static constexpr unsigned int Class_2_C9A08F2A8603B39E_Class_3_ADC6989BD9EC52D8_TypeDefinitionIndex = 51652;

class Class_2_C9A08F2A8603B39E_Class_3_ADC6989BD9EC52D8 : public ::Class_2_D6C023318E9B27E7
{
public:
	::Class_2_000597E145D7A42A<::UnityEngine::Vector2>* Field_3_9; // 0xC0
	::Class_2_000597E145D7A42A<::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>*>* Field_3_6; // 0xC8
	::Class_2_000597E145D7A42A<::UnityEngine::RenderTexture*>* Field_3_1; // 0xD0
	::Class_2_000597E145D7A42A<::UnityEngine::Rect>* Field_3_8; // 0xD8
	::Class_2_000597E145D7A42A<::System::Int32>* Field_3_2; // 0xE0
	::Class_2_000597E145D7A42A<::MoleMole::MonoGamepadVirtualCursor*>* Field_3_10; // 0xE8
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapPointWidgetContext*>* Field_3_11; // 0xF0
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapRightTastListWidget02WidgetContext*>* Field_3_5; // 0xF8
	::Class_2_000597E145D7A42A<::System::Nullable_1<::UnityEngine::Vector3>>* Field_3_3; // 0x100
	::Class_2_F16D73323D71766B<::System::Boolean>* Field_3_0; // 0x108
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapRightTastListWidget02WidgetContext*>* Field_3_4; // 0x110
	::Class_2_000597E145D7A42A<::UnityEngine::Bounds>* Field_3_7; // 0x118

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_CLASS_3_ADC6989BD9EC52D8__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_CLASS_3_ADC6989BD9EC52D8_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void Method_3_659B881A8763C779()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_CLASS_3_ADC6989BD9EC52D8_METHOD_3_659B881A8763C779_OFFSET))(this);
	}

	::System::Void Method_3_2B45EBE62D53D449(::System::Func_1<::System::Boolean>* a1, ::System::Action_1<::Class_2_C9A08F2A8603B39E_Class_3_ADC6989BD9EC52D8*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*, ::System::Action_1<::Class_2_C9A08F2A8603B39E_Class_3_ADC6989BD9EC52D8*>*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_CLASS_3_ADC6989BD9EC52D8_METHOD_3_2B45EBE62D53D449_OFFSET))(this, a1, a2);
	}
};
