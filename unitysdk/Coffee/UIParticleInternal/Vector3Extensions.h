#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define COFFEE_UIPARTICLEINTERNAL_VECTOR3EXTENSIONS_GETSCALED_1_OFFSET UNITYSDK_OFFSET(0x12BB2E00)
#define COFFEE_UIPARTICLEINTERNAL_VECTOR3EXTENSIONS_GETSCALED_2_OFFSET UNITYSDK_OFFSET(0x12BBCE20)
#define COFFEE_UIPARTICLEINTERNAL_VECTOR3EXTENSIONS_GETSCALED_OFFSET UNITYSDK_OFFSET(0x12BBAF50)
#define COFFEE_UIPARTICLEINTERNAL_VECTOR3EXTENSIONS_INVERSE_OFFSET UNITYSDK_OFFSET(0x12BB5220)
#define COFFEE_UIPARTICLEINTERNAL_VECTOR3EXTENSIONS_ISVISIBLE2D_OFFSET UNITYSDK_OFFSET(0x12BC0D90)
#define COFFEE_UIPARTICLEINTERNAL_VECTOR3EXTENSIONS_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x12BB5330)

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int Vector3Extensions_TypeDefinitionIndex = 40680;

	class Vector3Extensions : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3 Inverse(::UnityEngine::Vector3 self)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_VECTOR3EXTENSIONS_INVERSE_OFFSET))(self);
		}

		static ::UnityEngine::Vector3 GetScaled(::UnityEngine::Vector3 self, ::UnityEngine::Vector3 other1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_VECTOR3EXTENSIONS_GETSCALED_OFFSET))(self, other1);
		}

		static ::UnityEngine::Vector3 GetScaled_1(::UnityEngine::Vector3 self, ::UnityEngine::Vector3 other1, ::UnityEngine::Vector3 other2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_VECTOR3EXTENSIONS_GETSCALED_1_OFFSET))(self, other1, other2);
		}

		static ::UnityEngine::Vector3 GetScaled_2(::UnityEngine::Vector3 self, ::UnityEngine::Vector3 other1, ::UnityEngine::Vector3 other2, ::UnityEngine::Vector3 other3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_VECTOR3EXTENSIONS_GETSCALED_2_OFFSET))(self, other1, other2, other3);
		}

		static ::System::Boolean IsVisible(::UnityEngine::Vector3 self)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_VECTOR3EXTENSIONS_ISVISIBLE_OFFSET))(self);
		}

		static ::System::Boolean IsVisible2D(::UnityEngine::Vector3 self)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_VECTOR3EXTENSIONS_ISVISIBLE2D_OFFSET))(self);
		}
	};
}
