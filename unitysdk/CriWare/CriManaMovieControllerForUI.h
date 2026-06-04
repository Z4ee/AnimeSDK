#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriManaMovieMaterial.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class Graphic; }

#define CRIWARE_CRIMANAMOVIECONTROLLERFORUI_AWAKE_OFFSET UNITYSDK_OFFSET(0x146D5D20)
#define CRIWARE_CRIMANAMOVIECONTROLLERFORUI_CRIINTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x146D5E60)
#define CRIWARE_CRIMANAMOVIECONTROLLERFORUI_ONMATERIALAVAILABLECHANGED_OFFSET UNITYSDK_OFFSET(0x146D60A0)
#define CRIWARE_CRIMANAMOVIECONTROLLERFORUI_RENDERTARGETMANUALFINALIZE_OFFSET UNITYSDK_OFFSET(0x146D6030)
#define CRIWARE_CRIMANAMOVIECONTROLLERFORUI_RENDERTARGETMANUALSETUP_OFFSET UNITYSDK_OFFSET(0x146D5EC0)
#define CRIWARE_CRIMANAMOVIECONTROLLERFORUI__CTOR_OFFSET UNITYSDK_OFFSET(0x146D6140)

namespace CriWare
{
	inline static constexpr unsigned int CriManaMovieControllerForUI_TypeDefinitionIndex = 37170;

	class CriManaMovieControllerForUI : public ::CriWare::CriManaMovieMaterial
	{
	public:
		::UnityEngine::UI::Graphic* target; // 0xA0
		::System::Boolean useOriginalMaterial; // 0xA8
		::UnityEngine::Material* originalMaterial; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIECONTROLLERFORUI__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIECONTROLLERFORUI_AWAKE_OFFSET))(this);
		}

		::System::Void CriInternalUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIECONTROLLERFORUI_CRIINTERNALUPDATE_OFFSET))(this);
		}

		::System::Boolean RenderTargetManualSetup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIECONTROLLERFORUI_RENDERTARGETMANUALSETUP_OFFSET))(this);
		}

		::System::Void RenderTargetManualFinalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIECONTROLLERFORUI_RENDERTARGETMANUALFINALIZE_OFFSET))(this);
		}

		::System::Void OnMaterialAvailableChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIECONTROLLERFORUI_ONMATERIALAVAILABLECHANGED_OFFSET))(this);
		}
	};
}
