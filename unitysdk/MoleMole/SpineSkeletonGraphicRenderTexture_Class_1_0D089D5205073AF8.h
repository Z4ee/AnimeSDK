#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SpineSkeletonGraphicRenderTexture_TextureMaterialPair.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Texture; }

#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_CLASS_1_0D089D5205073AF8_METHOD_1_5466CFF37DB1AF0C_OFFSET UNITYSDK_OFFSET(0x117829A0)
#define MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_CLASS_1_0D089D5205073AF8__CTOR_OFFSET UNITYSDK_OFFSET(0x11782990)

namespace MoleMole
{
	inline static constexpr unsigned int SpineSkeletonGraphicRenderTexture_Class_1_0D089D5205073AF8_TypeDefinitionIndex = 64839;

	class SpineSkeletonGraphicRenderTexture_Class_1_0D089D5205073AF8 : public ::System::Object
	{
	public:
		::UnityEngine::Texture* Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_CLASS_1_0D089D5205073AF8__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_5466CFF37DB1AF0C(::MoleMole::SpineSkeletonGraphicRenderTexture_TextureMaterialPair a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SpineSkeletonGraphicRenderTexture_TextureMaterialPair))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINESKELETONGRAPHICRENDERTEXTURE_CLASS_1_0D089D5205073AF8_METHOD_1_5466CFF37DB1AF0C_OFFSET))(this, a1);
		}
	};
}
