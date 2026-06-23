#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Component; }

#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP_STRUCT_2_B6CC7A1324E97FE4_METHOD_2_F5D923F335A9E58D_OFFSET UNITYSDK_OFFSET(0x86EB30)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP_STRUCT_2_B6CC7A1324E97FE4_METHOD_2_F8D316A5E44BFFD9_OFFSET UNITYSDK_OFFSET(0x86EB10)

namespace MoleMole
{
	inline static constexpr unsigned int UIColorTweakerTargetGroup_Struct_2_B6CC7A1324E97FE4_TypeDefinitionIndex = 54415;

	struct alignas(8) UIColorTweakerTargetGroup_Struct_2_B6CC7A1324E97FE4
	{
		::UnityEngine::Component* Field_2_0; // 0x10
		::System::ValueTuple_2<::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Color>*, ::System::Func_2<::UnityEngine::Component*, ::UnityEngine::Color>*> Field_2_1; // 0x18
		::System::Boolean Field_2_2; // 0x28
		::UnityEngine::Color Field_2_3; // 0x2C
		::UnityEngine::Color Field_2_4; // 0x3C

		::System::Void Method_2_F8D316A5E44BFFD9(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP_STRUCT_2_B6CC7A1324E97FE4_METHOD_2_F8D316A5E44BFFD9_OFFSET))(this, a1);
		}

		::UnityEngine::Color Method_2_F5D923F335A9E58D()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP_STRUCT_2_B6CC7A1324E97FE4_METHOD_2_F5D923F335A9E58D_OFFSET))(this);
		}
	};
}
