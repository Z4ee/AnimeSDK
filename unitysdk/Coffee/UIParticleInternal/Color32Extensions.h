#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color32.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

#define COFFEE_UIPARTICLEINTERNAL_COLOR32EXTENSIONS_GAMMATOLINEAR_1_OFFSET UNITYSDK_OFFSET(0x1467C160)
#define COFFEE_UIPARTICLEINTERNAL_COLOR32EXTENSIONS_GAMMATOLINEAR_OFFSET UNITYSDK_OFFSET(0x1467BD50)
#define COFFEE_UIPARTICLEINTERNAL_COLOR32EXTENSIONS_LINEARTOGAMMA_1_OFFSET UNITYSDK_OFFSET(0x1467BEF0)
#define COFFEE_UIPARTICLEINTERNAL_COLOR32EXTENSIONS_LINEARTOGAMMA_OFFSET UNITYSDK_OFFSET(0x1467BBB0)
#define COFFEE_UIPARTICLEINTERNAL_COLOR32EXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1467C3D0)

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int Color32Extensions_TypeDefinitionIndex = 41504;

	class Color32Extensions : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_s_GammaToLinearLut()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Color32Extensions_TypeDefinitionIndex)->GetStaticField(0x13F0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_s_LinearToGammaLut()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Color32Extensions_TypeDefinitionIndex)->GetStaticField(0x13F8);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Color32>** StaticGet_s_Colors()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Color32>**)Il2CppClass::FromTypeDefinitionIndex(Color32Extensions_TypeDefinitionIndex)->GetStaticField(0x1400);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_COLOR32EXTENSIONS__CCTOR_OFFSET))();
		}

		static ::System::Byte LinearToGamma(::System::Byte a1)
		{
			return ((::System::Byte(*)(::System::Byte))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_COLOR32EXTENSIONS_LINEARTOGAMMA_OFFSET))(a1);
		}

		static ::System::Byte GammaToLinear(::System::Byte a1)
		{
			return ((::System::Byte(*)(::System::Byte))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_COLOR32EXTENSIONS_GAMMATOLINEAR_OFFSET))(a1);
		}

		static ::System::Void LinearToGamma_1(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_COLOR32EXTENSIONS_LINEARTOGAMMA_1_OFFSET))(a1);
		}

		static ::System::Void GammaToLinear_1(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_COLOR32EXTENSIONS_GAMMATOLINEAR_1_OFFSET))(a1);
		}
	};
}
