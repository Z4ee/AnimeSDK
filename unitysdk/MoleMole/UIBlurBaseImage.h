#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/UI/Image.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UIBLURBASEIMAGE_METHOD_9_11FD5E7B5A13A46A_OFFSET UNITYSDK_OFFSET(0x16368B00)
#define MOLEMOLE_UIBLURBASEIMAGE_METHOD_9_8E61DC61C3E4B23C_OFFSET UNITYSDK_OFFSET(0x16368CA0)
#define MOLEMOLE_UIBLURBASEIMAGE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16368790)
#define MOLEMOLE_UIBLURBASEIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x16368A50)
#define MOLEMOLE_UIBLURBASEIMAGE___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16368AF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBlurBaseImage_TypeDefinitionIndex = 39561;

	class UIBlurBaseImage : public ::UnityEngine::UI::Image
	{
	public:
		::Foundation::AssetRequestHandle Field_9_0; // 0x140
		::UnityEngine::Material* _material; // 0x160
		::System::Boolean _NeedUnloadMat; // 0x168

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURBASEIMAGE__CTOR_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURBASEIMAGE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURBASEIMAGE___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_9_11FD5E7B5A13A46A(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURBASEIMAGE_METHOD_9_11FD5E7B5A13A46A_OFFSET))(this, a1);
		}

		::System::Void Method_9_8E61DC61C3E4B23C(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURBASEIMAGE_METHOD_9_8E61DC61C3E4B23C_OFFSET))(this, a1);
		}
	};
}
