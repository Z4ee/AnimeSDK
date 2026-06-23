#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/GradientAlphaKey.h"
#include "unitysdk/UnityEngine/GradientColorKey.h"

namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Gradient; }

#define GRADIENTLERPUTILS_COMPRESSLIST_OFFSET UNITYSDK_OFFSET(0x1C4229C0)
#define GRADIENTLERPUTILS_LERPINTERNALNEW_OFFSET UNITYSDK_OFFSET(0x1C422CB0)
#define GRADIENTLERPUTILS_LERPINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C421EA0)
#define GRADIENTLERPUTILS_LERP_OFFSET UNITYSDK_OFFSET(0x1C423570)
#define GRADIENTLERPUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4236B0)

inline static constexpr unsigned int GradientLerpUtils_TypeDefinitionIndex = 26750;

class GradientLerpUtils : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Single>** StaticGet_keysList()
	{
		return (::System::Collections::Generic::List_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(GradientLerpUtils_TypeDefinitionIndex)->GetStaticField(0x220E0);
	}
	static ::System::Comparison_1<::System::Single>** StaticGet_s_DefaultFloatComparison()
	{
		return (::System::Comparison_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(GradientLerpUtils_TypeDefinitionIndex)->GetStaticField(0x220E8);
	}
	static ::System::Boolean* StaticGet_CompareNewAPI()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GradientLerpUtils_TypeDefinitionIndex)->GetStaticField(0x71F0);
	}
	static ::UnityEngine::GradientAlphaKey* StaticGet_alphaKey0()
	{
		return (::UnityEngine::GradientAlphaKey*)Il2CppClass::FromTypeDefinitionIndex(GradientLerpUtils_TypeDefinitionIndex)->GetStaticField(0x71F4);
	}
	static ::UnityEngine::GradientColorKey* StaticGet_colorKeyCache()
	{
		return (::UnityEngine::GradientColorKey*)Il2CppClass::FromTypeDefinitionIndex(GradientLerpUtils_TypeDefinitionIndex)->GetStaticField(0x71FC);
	}
	static ::UnityEngine::GradientColorKey* StaticGet_colorKey1()
	{
		return (::UnityEngine::GradientColorKey*)Il2CppClass::FromTypeDefinitionIndex(GradientLerpUtils_TypeDefinitionIndex)->GetStaticField(0x7210);
	}
	static ::UnityEngine::GradientColorKey* StaticGet_colorKey0()
	{
		return (::UnityEngine::GradientColorKey*)Il2CppClass::FromTypeDefinitionIndex(GradientLerpUtils_TypeDefinitionIndex)->GetStaticField(0x7224);
	}
	static ::UnityEngine::GradientAlphaKey* StaticGet_alphaKey1()
	{
		return (::UnityEngine::GradientAlphaKey*)Il2CppClass::FromTypeDefinitionIndex(GradientLerpUtils_TypeDefinitionIndex)->GetStaticField(0x7238);
	}
	static ::UnityEngine::GradientAlphaKey* StaticGet_alphaKeyCache()
	{
		return (::UnityEngine::GradientAlphaKey*)Il2CppClass::FromTypeDefinitionIndex(GradientLerpUtils_TypeDefinitionIndex)->GetStaticField(0x7240);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GRADIENTLERPUTILS__CCTOR_OFFSET))();
	}

	static ::System::Void LerpInternal(::UnityEngine::Gradient* a, ::UnityEngine::Gradient* b, ::UnityEngine::Gradient*& result, ::System::Single t, ::System::Boolean noAlpha, ::System::Boolean noColor)
	{
		return ((::System::Void(*)(::UnityEngine::Gradient*, ::UnityEngine::Gradient*, ::UnityEngine::Gradient*&, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GRADIENTLERPUTILS_LERPINTERNAL_OFFSET))(a, b, result, t, noAlpha, noColor);
	}

	static ::System::Void LerpInternalNew(::UnityEngine::Gradient* a, ::UnityEngine::Gradient* b, ::UnityEngine::Gradient*& result, ::System::Single t, ::System::Boolean noAlpha, ::System::Boolean noColor)
	{
		return ((::System::Void(*)(::UnityEngine::Gradient*, ::UnityEngine::Gradient*, ::UnityEngine::Gradient*&, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GRADIENTLERPUTILS_LERPINTERNALNEW_OFFSET))(a, b, result, t, noAlpha, noColor);
	}

	static ::System::Void Lerp(::UnityEngine::Gradient* a, ::UnityEngine::Gradient* b, ::UnityEngine::Gradient*& result, ::System::Single t, ::System::Boolean noAlpha, ::System::Boolean noColor)
	{
		return ((::System::Void(*)(::UnityEngine::Gradient*, ::UnityEngine::Gradient*, ::UnityEngine::Gradient*&, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GRADIENTLERPUTILS_LERP_OFFSET))(a, b, result, t, noAlpha, noColor);
	}

	static ::System::Void CompressList(::System::Collections::Generic::List_1<::System::Single>*& list, ::System::Int32 targetCount)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Single>*&, ::System::Int32))((::PBYTE)hIl2Cpp + GRADIENTLERPUTILS_COMPRESSLIST_OFFSET))(list, targetCount);
	}
};
