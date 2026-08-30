#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCE0D2A0)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCE0D2D0)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_0_OFFSET UNITYSDK_OFFSET(0xCE0D2E0)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_1_OFFSET UNITYSDK_OFFSET(0xCE0D2F0)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_2_OFFSET UNITYSDK_OFFSET(0xCE0D300)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_3_OFFSET UNITYSDK_OFFSET(0xCE0D310)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_4_OFFSET UNITYSDK_OFFSET(0xCE0D320)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_5_OFFSET UNITYSDK_OFFSET(0xCE0D330)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_PathDeformBehavior___c_TypeDefinitionIndex = 70492;

	class Effect_PathDeformBehavior___c : public ::System::Object
	{
	public:
		static ::RPG::Client::Effect_PathDeformBehavior___c** StaticGet___9()
		{
			return (::RPG::Client::Effect_PathDeformBehavior___c**)Il2CppClass::FromTypeDefinitionIndex(Effect_PathDeformBehavior___c_TypeDefinitionIndex)->GetStaticField(0x64950);
		}
		static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Effect_PathDeformBehavior___c_TypeDefinitionIndex)->GetStaticField(0x64958);
		}
		static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__9_2()
		{
			return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Effect_PathDeformBehavior___c_TypeDefinitionIndex)->GetStaticField(0x64960);
		}
		static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__9_3()
		{
			return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Effect_PathDeformBehavior___c_TypeDefinitionIndex)->GetStaticField(0x64968);
		}
		static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__9_1()
		{
			return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Effect_PathDeformBehavior___c_TypeDefinitionIndex)->GetStaticField(0x64970);
		}
		static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__9_5()
		{
			return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Effect_PathDeformBehavior___c_TypeDefinitionIndex)->GetStaticField(0x64978);
		}
		static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__9_4()
		{
			return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Effect_PathDeformBehavior___c_TypeDefinitionIndex)->GetStaticField(0x64980);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C__CTOR_OFFSET))(this);
		}

		::System::Single __GetRenderBound_b__9_0(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_0_OFFSET))(this, a1);
		}

		::System::Single __GetRenderBound_b__9_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_1_OFFSET))(this, a1);
		}

		::System::Single __GetRenderBound_b__9_2(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_2_OFFSET))(this, a1);
		}

		::System::Single __GetRenderBound_b__9_3(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_3_OFFSET))(this, a1);
		}

		::System::Single __GetRenderBound_b__9_4(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_4_OFFSET))(this, a1);
		}

		::System::Single __GetRenderBound_b__9_5(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_5_OFFSET))(this, a1);
		}
	};
}
