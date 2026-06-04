#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Camera_MonoOrStereoscopicEye.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace UnityEngine { class Canvas; }

#define COFFEE_UIPARTICLEINTERNAL_CANVASEXTENSIONS_GETVIEWPROJECTIONMATRIX_1_OFFSET UNITYSDK_OFFSET(0x1467B2E0)
#define COFFEE_UIPARTICLEINTERNAL_CANVASEXTENSIONS_GETVIEWPROJECTIONMATRIX_2_OFFSET UNITYSDK_OFFSET(0x1467BBA0)
#define COFFEE_UIPARTICLEINTERNAL_CANVASEXTENSIONS_GETVIEWPROJECTIONMATRIX_3_OFFSET UNITYSDK_OFFSET(0x1467B520)
#define COFFEE_UIPARTICLEINTERNAL_CANVASEXTENSIONS_GETVIEWPROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0x1467B2D0)
#define COFFEE_UIPARTICLEINTERNAL_CANVASEXTENSIONS_ISSTEREOCANVAS_OFFSET UNITYSDK_OFFSET(0x1467B2C0)
#define COFFEE_UIPARTICLEINTERNAL_CANVASEXTENSIONS_SHOULDGAMMATOLINEARINMESH_OFFSET UNITYSDK_OFFSET(0x1467B2A0)
#define COFFEE_UIPARTICLEINTERNAL_CANVASEXTENSIONS_SHOULDGAMMATOLINEARINSHADER_OFFSET UNITYSDK_OFFSET(0x1467B280)

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int CanvasExtensions_TypeDefinitionIndex = 41503;

	class CanvasExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean ShouldGammaToLinearInShader(::UnityEngine::Canvas* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_CANVASEXTENSIONS_SHOULDGAMMATOLINEARINSHADER_OFFSET))(a1);
		}

		static ::System::Boolean ShouldGammaToLinearInMesh(::UnityEngine::Canvas* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_CANVASEXTENSIONS_SHOULDGAMMATOLINEARINMESH_OFFSET))(a1);
		}

		static ::System::Boolean IsStereoCanvas(::UnityEngine::Canvas* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_CANVASEXTENSIONS_ISSTEREOCANVAS_OFFSET))(a1);
		}

		static ::System::Void GetViewProjectionMatrix(::UnityEngine::Canvas* a1, ::UnityEngine::Matrix4x4& a2)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas*, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_CANVASEXTENSIONS_GETVIEWPROJECTIONMATRIX_OFFSET))(a1, a2);
		}

		static ::System::Void GetViewProjectionMatrix_1(::UnityEngine::Canvas* a1, ::UnityEngine::Camera_MonoOrStereoscopicEye a2, ::UnityEngine::Matrix4x4& a3)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas*, ::UnityEngine::Camera_MonoOrStereoscopicEye, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_CANVASEXTENSIONS_GETVIEWPROJECTIONMATRIX_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GetViewProjectionMatrix_2(::UnityEngine::Canvas* a1, ::UnityEngine::Matrix4x4& a2, ::UnityEngine::Matrix4x4& a3)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas*, ::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_CANVASEXTENSIONS_GETVIEWPROJECTIONMATRIX_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GetViewProjectionMatrix_3(::UnityEngine::Canvas* a1, ::UnityEngine::Camera_MonoOrStereoscopicEye a2, ::UnityEngine::Matrix4x4& a3, ::UnityEngine::Matrix4x4& a4)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas*, ::UnityEngine::Camera_MonoOrStereoscopicEye, ::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_CANVASEXTENSIONS_GETVIEWPROJECTIONMATRIX_3_OFFSET))(a1, a2, a3, a4);
		}
	};
}
