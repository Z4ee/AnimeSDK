#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGModule.h"

namespace FluffyUnderware::Curvy::Generator { class CGModuleInputSlot; }
namespace UnityEngine { class LineRenderer; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEPATHLINERENDERER_GET_LINERENDERER_OFFSET UNITYSDK_OFFSET(0x1B926F90)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEPATHLINERENDERER_REFRESH_OFFSET UNITYSDK_OFFSET(0x1B927660)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEPATHLINERENDERER_RESET_OFFSET UNITYSDK_OFFSET(0x1B927130)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEPATHLINERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B927E00)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int CreatePathLineRenderer_TypeDefinitionIndex = 37407;

	class CreatePathLineRenderer : public ::FluffyUnderware::Curvy::Generator::CGModule
	{
	public:
		::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* InPath; // 0xB8
		::UnityEngine::LineRenderer* mLineRenderer; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEPATHLINERENDERER__CTOR_OFFSET))(this);
		}

		::UnityEngine::LineRenderer* get_LineRenderer()
		{
			return ((::UnityEngine::LineRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEPATHLINERENDERER_GET_LINERENDERER_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEPATHLINERENDERER_RESET_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEPATHLINERENDERER_REFRESH_OFFSET))(this);
		}
	};
}
