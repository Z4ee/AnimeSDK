#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBlurBaseImage.h"

namespace System { class String; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_UIBLURTEXTUREIMAGE_AWAKE_OFFSET UNITYSDK_OFFSET(0x176084B0)
#define MOLEMOLE_UIBLURTEXTUREIMAGE_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x17608550)
#define MOLEMOLE_UIBLURTEXTUREIMAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17608890)
#define MOLEMOLE_UIBLURTEXTUREIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x176087F0)
#define MOLEMOLE_UIBLURTEXTUREIMAGE___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x176088D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBlurTextureImage_TypeDefinitionIndex = 58625;

	class UIBlurTextureImage : public ::MoleMole::UIBlurBaseImage
	{
	public:
		static ::System::Int32* StaticGet_Field_10_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIBlurTextureImage_TypeDefinitionIndex)->GetStaticField(0xFC10);
		}
		// static const ::System::String* matPath; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURTEXTUREIMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURTEXTUREIMAGE__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURTEXTUREIMAGE_AWAKE_OFFSET))(this);
		}

		::System::Void SetTexture(::UnityEngine::Texture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURTEXTUREIMAGE_SETTEXTURE_OFFSET))(this, a1);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURTEXTUREIMAGE___BASE_AWAKE_OFFSET))(this);
		}
	};
}
