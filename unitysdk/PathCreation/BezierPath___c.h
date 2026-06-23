#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Transform; }

#define PATHCREATION_BEZIERPATH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DABB510)
#define PATHCREATION_BEZIERPATH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DABB550)
#define PATHCREATION_BEZIERPATH___C___CTOR_B__20_0_OFFSET UNITYSDK_OFFSET(0x1DABB560)
#define PATHCREATION_BEZIERPATH___C___CTOR_B__21_0_OFFSET UNITYSDK_OFFSET(0x1DABB580)
#define PATHCREATION_BEZIERPATH___C___CTOR_B__22_0_OFFSET UNITYSDK_OFFSET(0x1DABB5D0)

namespace PathCreation
{
	inline static constexpr unsigned int BezierPath___c_TypeDefinitionIndex = 37443;

	class BezierPath___c : public ::System::Object
	{
	public:
		static ::PathCreation::BezierPath___c** StaticGet___9()
		{
			return (::PathCreation::BezierPath___c**)Il2CppClass::FromTypeDefinitionIndex(BezierPath___c_TypeDefinitionIndex)->GetStaticField(0x28B90);
		}
		static ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector3>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(BezierPath___c_TypeDefinitionIndex)->GetStaticField(0x28B98);
		}
		static ::System::Func_2<::UnityEngine::Transform*, ::UnityEngine::Vector3>** StaticGet___9__21_0()
		{
			return (::System::Func_2<::UnityEngine::Transform*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(BezierPath___c_TypeDefinitionIndex)->GetStaticField(0x28BA0);
		}
		static ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector3>** StaticGet___9__22_0()
		{
			return (::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(BezierPath___c_TypeDefinitionIndex)->GetStaticField(0x28BA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 __ctor_b__20_0(::UnityEngine::Vector2 p)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH___C___CTOR_B__20_0_OFFSET))(this, p);
		}

		::UnityEngine::Vector3 __ctor_b__21_0(::UnityEngine::Transform* t)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH___C___CTOR_B__21_0_OFFSET))(this, t);
		}

		::UnityEngine::Vector3 __ctor_b__22_0(::UnityEngine::Vector2 p)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + PATHCREATION_BEZIERPATH___C___CTOR_B__22_0_OFFSET))(this, p);
		}
	};
}
