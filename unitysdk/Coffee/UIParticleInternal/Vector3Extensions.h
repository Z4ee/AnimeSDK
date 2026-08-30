#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define COFFEE_UIPARTICLEINTERNAL_VECTOR3EXTENSIONS_GETSCALED_1_OFFSET UNITYSDK_OFFSET(0x1EE74590)
#define COFFEE_UIPARTICLEINTERNAL_VECTOR3EXTENSIONS_GETSCALED_2_OFFSET UNITYSDK_OFFSET(0x1EE7FDB0)
#define COFFEE_UIPARTICLEINTERNAL_VECTOR3EXTENSIONS_GETSCALED_OFFSET UNITYSDK_OFFSET(0x1EE7D900)
#define COFFEE_UIPARTICLEINTERNAL_VECTOR3EXTENSIONS_INVERSE_OFFSET UNITYSDK_OFFSET(0x1EE772A0)
#define COFFEE_UIPARTICLEINTERNAL_VECTOR3EXTENSIONS_ISVISIBLE2D_OFFSET UNITYSDK_OFFSET(0x1EE83F10)
#define COFFEE_UIPARTICLEINTERNAL_VECTOR3EXTENSIONS_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1EE773B0)

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int Vector3Extensions_TypeDefinitionIndex = 43933;

	class Vector3Extensions : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3 Inverse(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_VECTOR3EXTENSIONS_INVERSE_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 GetScaled(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_VECTOR3EXTENSIONS_GETSCALED_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 GetScaled_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_VECTOR3EXTENSIONS_GETSCALED_1_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 GetScaled_2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_VECTOR3EXTENSIONS_GETSCALED_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean IsVisible(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_VECTOR3EXTENSIONS_ISVISIBLE_OFFSET))(a1);
		}

		static ::System::Boolean IsVisible2D(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_VECTOR3EXTENSIONS_ISVISIBLE2D_OFFSET))(a1);
		}
	};
}
