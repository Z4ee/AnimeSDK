#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Material; }

#define MOLEMOLE_TEXTURESHEETMATERIALPROXY_GETTEXTURESHEETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1A1AADC0)
#define MOLEMOLE_TEXTURESHEETMATERIALPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1AB060)

namespace MoleMole
{
	inline static constexpr unsigned int TextureSheetMaterialProxy_TypeDefinitionIndex = 55719;

	class TextureSheetMaterialProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 SelectIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETMATERIALPROXY__CTOR_OFFSET))(this);
		}

		::UnityEngine::Material* GetTextureSheetMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETMATERIALPROXY_GETTEXTURESHEETMATERIAL_OFFSET))(this);
		}
	};
}
