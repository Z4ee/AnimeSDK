#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriManaMovieMaterial.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define CRIWARE_CRIMANAMOVIECONTROLLER_CRIINTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x1C0E80F0)
#define CRIWARE_CRIMANAMOVIECONTROLLER_ONMATERIALAVAILABLECHANGED_OFFSET UNITYSDK_OFFSET(0x1C0E8730)
#define CRIWARE_CRIMANAMOVIECONTROLLER_RENDERTARGETMANUALFINALIZE_OFFSET UNITYSDK_OFFSET(0x1C0E85A0)
#define CRIWARE_CRIMANAMOVIECONTROLLER_RENDERTARGETMANUALSETUP_OFFSET UNITYSDK_OFFSET(0x1C0E8280)
#define CRIWARE_CRIMANAMOVIECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0E88F0)

namespace CriWare
{
	inline static constexpr unsigned int CriManaMovieController_TypeDefinitionIndex = 32777;

	class CriManaMovieController : public ::CriWare::CriManaMovieMaterial
	{
	public:
		::UnityEngine::Renderer* target; // 0x90
		::System::Boolean useOriginalMaterial; // 0x98
		::UnityEngine::Material* originalMaterial; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void CriInternalUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIECONTROLLER_CRIINTERNALUPDATE_OFFSET))(this);
		}

		::System::Boolean RenderTargetManualSetup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIECONTROLLER_RENDERTARGETMANUALSETUP_OFFSET))(this);
		}

		::System::Void RenderTargetManualFinalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIECONTROLLER_RENDERTARGETMANUALFINALIZE_OFFSET))(this);
		}

		::System::Void OnMaterialAvailableChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIECONTROLLER_ONMATERIALAVAILABLECHANGED_OFFSET))(this);
		}
	};
}
