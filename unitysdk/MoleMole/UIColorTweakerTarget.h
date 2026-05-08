#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2B6FF80CD0ED409A.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Component; }

#define MOLEMOLE_UICOLORTWEAKERTARGET_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x7A7DB0)
#define MOLEMOLE_UICOLORTWEAKERTARGET_METHOD_2_5242C82824870B60_OFFSET UNITYSDK_OFFSET(0x15EDA910)
#define MOLEMOLE_UICOLORTWEAKERTARGET_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7A7CD0)
#define MOLEMOLE_UICOLORTWEAKERTARGET_METHOD_2_CFE4DF658F81C59C_OFFSET UNITYSDK_OFFSET(0x7A7D30)

namespace MoleMole
{
	inline static constexpr unsigned int UIColorTweakerTarget_TypeDefinitionIndex = 40407;

	struct alignas(8) UIColorTweakerTarget
	{
		::UnityEngine::Component* target; // 0x10
		::Enum_3_2B6FF80CD0ED409A type; // 0x18

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGET_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		/*
		::UnityEngine::Color Method_2_CFE4DF658F81C59C()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGET_METHOD_2_CFE4DF658F81C59C_OFFSET))(this);
		}
		*/

		/*
		static ::System::ValueTuple_2<::UnityEngine::Component*, ::Enum_3_2B6FF80CD0ED409A> Method_2_5242C82824870B60(::UnityEngine::Component* a1)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Component*, ::Enum_3_2B6FF80CD0ED409A>(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGET_METHOD_2_5242C82824870B60_OFFSET))(a1);
		}
		*/

		::System::Void Method_2_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGET_METHOD_2_4343F372F34C05BF_OFFSET))(this);
		}
	};
}
