#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriManaMovieMaterial.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class Graphic; }

#define CRIWARE_CRIMANAMOVIECONTROLLERFORUI_AWAKE_OFFSET UNITYSDK_OFFSET(0x16505B90)
#define CRIWARE_CRIMANAMOVIECONTROLLERFORUI_CRIINTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x16505CD0)
#define CRIWARE_CRIMANAMOVIECONTROLLERFORUI_ONMATERIALAVAILABLECHANGED_OFFSET UNITYSDK_OFFSET(0x16505FE0)
#define CRIWARE_CRIMANAMOVIECONTROLLERFORUI_RENDERTARGETMANUALFINALIZE_OFFSET UNITYSDK_OFFSET(0x16505F10)
#define CRIWARE_CRIMANAMOVIECONTROLLERFORUI_RENDERTARGETMANUALSETUP_OFFSET UNITYSDK_OFFSET(0x16505D30)
#define CRIWARE_CRIMANAMOVIECONTROLLERFORUI__CTOR_OFFSET UNITYSDK_OFFSET(0x16506150)

namespace CriWare
{
	inline static constexpr unsigned int CriManaMovieControllerForUI_TypeDefinitionIndex = 38831;

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
