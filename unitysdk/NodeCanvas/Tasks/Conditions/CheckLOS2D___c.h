#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit2D.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Collider2D; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKLOS2D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B7EC740)
#define NODECANVAS_TASKS_CONDITIONS_CHECKLOS2D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7EC780)
#define NODECANVAS_TASKS_CONDITIONS_CHECKLOS2D___C__ONCHECK_B__7_0_OFFSET UNITYSDK_OFFSET(0x1B7EC790)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckLOS2D___c_TypeDefinitionIndex = 27826;

	class CheckLOS2D___c : public ::System::Object
	{
	public:
		static ::NodeCanvas::Tasks::Conditions::CheckLOS2D___c** StaticGet___9()
		{
			return (::NodeCanvas::Tasks::Conditions::CheckLOS2D___c**)Il2CppClass::FromTypeDefinitionIndex(CheckLOS2D___c_TypeDefinitionIndex)->GetStaticField(0x20AF0);
		}
		static ::System::Func_2<::UnityEngine::RaycastHit2D, ::UnityEngine::Collider2D*>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::UnityEngine::RaycastHit2D, ::UnityEngine::Collider2D*>**)Il2CppClass::FromTypeDefinitionIndex(CheckLOS2D___c_TypeDefinitionIndex)->GetStaticField(0x20AF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKLOS2D___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKLOS2D___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::Collider2D* _OnCheck_b__7_0(::UnityEngine::RaycastHit2D h)
		{
			return ((::UnityEngine::Collider2D*(*)(::PVOID, ::UnityEngine::RaycastHit2D))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKLOS2D___C__ONCHECK_B__7_0_OFFSET))(this, h);
		}
	};
}
