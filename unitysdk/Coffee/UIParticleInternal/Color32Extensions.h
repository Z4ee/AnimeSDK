#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color32.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

#define COFFEE_UIPARTICLEINTERNAL_COLOR32EXTENSIONS_GAMMATOLINEAR_1_OFFSET UNITYSDK_OFFSET(0x12BBE870)
#define COFFEE_UIPARTICLEINTERNAL_COLOR32EXTENSIONS_GAMMATOLINEAR_OFFSET UNITYSDK_OFFSET(0x12BBE3C0)
#define COFFEE_UIPARTICLEINTERNAL_COLOR32EXTENSIONS_LINEARTOGAMMA_1_OFFSET UNITYSDK_OFFSET(0x12BBE570)
#define COFFEE_UIPARTICLEINTERNAL_COLOR32EXTENSIONS_LINEARTOGAMMA_OFFSET UNITYSDK_OFFSET(0x12BBE210)
#define COFFEE_UIPARTICLEINTERNAL_COLOR32EXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BBEB70)

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int Color32Extensions_TypeDefinitionIndex = 40677;

	class Color32Extensions : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_s_GammaToLinearLut()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Color32Extensions_TypeDefinitionIndex)->GetStaticField(0x14C0);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Color32>** StaticGet_s_Colors()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Color32>**)Il2CppClass::FromTypeDefinitionIndex(Color32Extensions_TypeDefinitionIndex)->GetStaticField(0x14C8);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_s_LinearToGammaLut()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Color32Extensions_TypeDefinitionIndex)->GetStaticField(0x14D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_COLOR32EXTENSIONS__CCTOR_OFFSET))();
		}

		static ::System::Byte LinearToGamma(::System::Byte self)
		{
			return ((::System::Byte(*)(::System::Byte))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_COLOR32EXTENSIONS_LINEARTOGAMMA_OFFSET))(self);
		}

		static ::System::Byte GammaToLinear(::System::Byte self)
		{
			return ((::System::Byte(*)(::System::Byte))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_COLOR32EXTENSIONS_GAMMATOLINEAR_OFFSET))(self);
		}

		static ::System::Void LinearToGamma_1(::UnityEngine::Mesh* self)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_COLOR32EXTENSIONS_LINEARTOGAMMA_1_OFFSET))(self);
		}

		static ::System::Void GammaToLinear_1(::UnityEngine::Mesh* self)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_COLOR32EXTENSIONS_GAMMATOLINEAR_1_OFFSET))(self);
		}
	};
}
