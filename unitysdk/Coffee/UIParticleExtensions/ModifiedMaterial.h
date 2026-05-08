#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Coffee::UIParticleExtensions { class ModifiedMaterial_MatEntry; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }

#define COFFEE_UIPARTICLEEXTENSIONS_MODIFIEDMATERIAL_ADD_OFFSET UNITYSDK_OFFSET(0x1B5852E0)
#define COFFEE_UIPARTICLEEXTENSIONS_MODIFIEDMATERIAL_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B5841E0)
#define COFFEE_UIPARTICLEEXTENSIONS_MODIFIEDMATERIAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B589C00)
#define COFFEE_UIPARTICLEEXTENSIONS_MODIFIEDMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B589BF0)

namespace Coffee::UIParticleExtensions
{
	inline static constexpr unsigned int ModifiedMaterial_TypeDefinitionIndex = 32657;

	class ModifiedMaterial : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::Coffee::UIParticleExtensions::ModifiedMaterial_MatEntry*>** StaticGet_s_Entries()
		{
			return (::System::Collections::Generic::List_1<::Coffee::UIParticleExtensions::ModifiedMaterial_MatEntry*>**)Il2CppClass::FromTypeDefinitionIndex(ModifiedMaterial_TypeDefinitionIndex)->GetStaticField(0x25E80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEEXTENSIONS_MODIFIEDMATERIAL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEEXTENSIONS_MODIFIEDMATERIAL__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Material* Add(::UnityEngine::Material* baseMat, ::UnityEngine::Texture* texture, ::System::Int32 id)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Material*, ::UnityEngine::Texture*, ::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEEXTENSIONS_MODIFIEDMATERIAL_ADD_OFFSET))(baseMat, texture, id);
		}

		static ::System::Void Remove(::UnityEngine::Material* customMat)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEEXTENSIONS_MODIFIEDMATERIAL_REMOVE_OFFSET))(customMat);
		}
	};
}
