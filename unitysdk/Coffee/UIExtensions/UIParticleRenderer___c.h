#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }

#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1467A8D0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1467A900)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___C__GETMODIFIEDMATERIAL_B__32_0_OFFSET UNITYSDK_OFFSET(0x1467A910)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticleRenderer___c_TypeDefinitionIndex = 41543;

	class UIParticleRenderer___c : public ::System::Object
	{
	public:
		static ::Coffee::UIExtensions::UIParticleRenderer___c** StaticGet___9()
		{
			return (::Coffee::UIExtensions::UIParticleRenderer___c**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer___c_TypeDefinitionIndex)->GetStaticField(0x13B0);
		}
		static ::System::Func_2<::System::ValueTuple_2<::UnityEngine::Material*, ::UnityEngine::Texture*>, ::UnityEngine::Material*>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::System::ValueTuple_2<::UnityEngine::Material*, ::UnityEngine::Texture*>, ::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer___c_TypeDefinitionIndex)->GetStaticField(0x13B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::Material* _GetModifiedMaterial_b__32_0(::System::ValueTuple_2<::UnityEngine::Material*, ::UnityEngine::Texture*> a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::System::ValueTuple_2<::UnityEngine::Material*, ::UnityEngine::Texture*>))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___C__GETMODIFIEDMATERIAL_B__32_0_OFFSET))(this, a1);
		}
	};
}
