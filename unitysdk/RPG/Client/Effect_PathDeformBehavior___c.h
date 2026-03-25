#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9574FA0)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9574FD0)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_0_OFFSET UNITYSDK_OFFSET(0x9574FE0)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_1_OFFSET UNITYSDK_OFFSET(0x9574FF0)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_2_OFFSET UNITYSDK_OFFSET(0x9575000)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_3_OFFSET UNITYSDK_OFFSET(0x9575010)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_4_OFFSET UNITYSDK_OFFSET(0x9575020)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_5_OFFSET UNITYSDK_OFFSET(0x9575030)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_PathDeformBehavior___c_TypeDefinitionIndex = 57755;

	class Effect_PathDeformBehavior___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__9_4()
		{
			return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Effect_PathDeformBehavior___c_TypeDefinitionIndex)->GetStaticField(0x45E80);
		}
		static ::RPG::Client::Effect_PathDeformBehavior___c** StaticGet___9()
		{
			return (::RPG::Client::Effect_PathDeformBehavior___c**)Il2CppClass::FromTypeDefinitionIndex(Effect_PathDeformBehavior___c_TypeDefinitionIndex)->GetStaticField(0x45E88);
		}
		static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Effect_PathDeformBehavior___c_TypeDefinitionIndex)->GetStaticField(0x45E90);
		}
		static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__9_5()
		{
			return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Effect_PathDeformBehavior___c_TypeDefinitionIndex)->GetStaticField(0x45E98);
		}
		static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__9_3()
		{
			return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Effect_PathDeformBehavior___c_TypeDefinitionIndex)->GetStaticField(0x45EA0);
		}
		static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__9_1()
		{
			return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Effect_PathDeformBehavior___c_TypeDefinitionIndex)->GetStaticField(0x45EA8);
		}
		static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__9_2()
		{
			return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Effect_PathDeformBehavior___c_TypeDefinitionIndex)->GetStaticField(0x45EB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C__CTOR_OFFSET))(this);
		}

		::System::Single __GetRenderBound_b__9_0(::UnityEngine::Vector3 v)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_0_OFFSET))(this, v);
		}

		::System::Single __GetRenderBound_b__9_1(::UnityEngine::Vector3 v)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_1_OFFSET))(this, v);
		}

		::System::Single __GetRenderBound_b__9_2(::UnityEngine::Vector3 v)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_2_OFFSET))(this, v);
		}

		::System::Single __GetRenderBound_b__9_3(::UnityEngine::Vector3 v)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_3_OFFSET))(this, v);
		}

		::System::Single __GetRenderBound_b__9_4(::UnityEngine::Vector3 v)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_4_OFFSET))(this, v);
		}

		::System::Single __GetRenderBound_b__9_5(::UnityEngine::Vector3 v)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_5_OFFSET))(this, v);
		}
	};
}
