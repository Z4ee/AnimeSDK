#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Keyframe.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_ANIMATIONCURVEEX_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x175138E0)
#define MOLEMOLE_ANIMATIONCURVEEX_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x17513840)
#define MOLEMOLE_ANIMATIONCURVEEX_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x17513940)
#define MOLEMOLE_ANIMATIONCURVEEX_GET_NOTNULLRUNTIMECURVE_OFFSET UNITYSDK_OFFSET(0x17513820)
#define MOLEMOLE_ANIMATIONCURVEEX_GET__NOTNULLRUNTIMECURVE_OFFSET UNITYSDK_OFFSET(0x17513700)
#define MOLEMOLE_ANIMATIONCURVEEX_METHOD_1_532AE2993E04D764_OFFSET UNITYSDK_OFFSET(0x17513BC0)
#define MOLEMOLE_ANIMATIONCURVEEX_METHOD_1_64629612F3646911_OFFSET UNITYSDK_OFFSET(0x17513A40)
#define MOLEMOLE_ANIMATIONCURVEEX_METHOD_1_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x17513720)
#define MOLEMOLE_ANIMATIONCURVEEX_METHOD_1_A82658DA976A3BA7_OFFSET UNITYSDK_OFFSET(0x17513B30)
#define MOLEMOLE_ANIMATIONCURVEEX_METHOD_1_D09831639F615812_OFFSET UNITYSDK_OFFSET(0x17513AC0)
#define MOLEMOLE_ANIMATIONCURVEEX_METHOD_1_D437D090E63BE8A7_OFFSET UNITYSDK_OFFSET(0x175139C0)
#define MOLEMOLE_ANIMATIONCURVEEX_SET_KEYS_OFFSET UNITYSDK_OFFSET(0x17513870)
#define MOLEMOLE_ANIMATIONCURVEEX_SET__NOTNULLRUNTIMECURVE_OFFSET UNITYSDK_OFFSET(0x17513810)
#define MOLEMOLE_ANIMATIONCURVEEX__CCTOR_OFFSET UNITYSDK_OFFSET(0x17513970)
#define MOLEMOLE_ANIMATIONCURVEEX__CTOR_OFFSET UNITYSDK_OFFSET(0x175136F0)

namespace MoleMole
{
	inline static constexpr unsigned int AnimationCurveEx_TypeDefinitionIndex = 40714;

	class AnimationCurveEx : public ::System::Object
	{
	public:
		static ::UnityEngine::AnimationCurve** StaticGet__defaultEmptyCurve()
		{
			return (::UnityEngine::AnimationCurve**)Il2CppClass::FromTypeDefinitionIndex(AnimationCurveEx_TypeDefinitionIndex)->GetStaticField(0x3A0A0);
		}
		::System::String* _curveKey; // 0x10
		::UnityEngine::AnimationCurve* _curveInstance; // 0x18
		::UnityEngine::AnimationCurve* _runtimeCurve; // 0x20

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONCURVEEX__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONCURVEEX__CCTOR_OFFSET))();
		}

		::UnityEngine::AnimationCurve* get__notNullRuntimeCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONCURVEEX_GET__NOTNULLRUNTIMECURVE_OFFSET))(this);
		}

		::System::Void set__notNullRuntimeCurve(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONCURVEEX_SET__NOTNULLRUNTIMECURVE_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationCurve* get_NotNullRuntimeCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONCURVEEX_GET_NOTNULLRUNTIMECURVE_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Keyframe>* get_keys()
		{
			return ((::Il2CppArray<::UnityEngine::Keyframe>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONCURVEEX_GET_KEYS_OFFSET))(this);
		}

		::System::Void set_keys(::Il2CppArray<::UnityEngine::Keyframe>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Keyframe>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONCURVEEX_SET_KEYS_OFFSET))(this, a1);
		}

		::UnityEngine::Keyframe get_Item(::System::Int32 a1)
		{
			return ((::UnityEngine::Keyframe(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONCURVEEX_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Int32 get_length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONCURVEEX_GET_LENGTH_OFFSET))(this);
		}

		::System::Void Method_1_7744894CEC41BF06()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONCURVEEX_METHOD_1_7744894CEC41BF06_OFFSET))(this);
		}

		::System::Single Method_1_D437D090E63BE8A7(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONCURVEEX_METHOD_1_D437D090E63BE8A7_OFFSET))(this, a1);
		}

		::System::Void Method_1_64629612F3646911(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONCURVEEX_METHOD_1_64629612F3646911_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_D09831639F615812(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONCURVEEX_METHOD_1_D09831639F615812_OFFSET))(this, a1);
		}

		::System::Int32 Method_1_A82658DA976A3BA7(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONCURVEEX_METHOD_1_A82658DA976A3BA7_OFFSET))(this, a1, a2);
		}

		::System::Int32 Method_1_532AE2993E04D764(::System::Int32 a1, ::UnityEngine::Keyframe a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONCURVEEX_METHOD_1_532AE2993E04D764_OFFSET))(this, a1, a2);
		}
	};
}
