#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define COFFEE_UIPARTICLEEXTENSIONS_VECTOR3EXTENSIONS_GETSCALED_1_OFFSET UNITYSDK_OFFSET(0x1B582660)
#define COFFEE_UIPARTICLEEXTENSIONS_VECTOR3EXTENSIONS_GETSCALED_2_OFFSET UNITYSDK_OFFSET(0x1B587A60)
#define COFFEE_UIPARTICLEEXTENSIONS_VECTOR3EXTENSIONS_GETSCALED_OFFSET UNITYSDK_OFFSET(0x1B576E00)
#define COFFEE_UIPARTICLEEXTENSIONS_VECTOR3EXTENSIONS_INVERSE_OFFSET UNITYSDK_OFFSET(0x1B57B390)
#define COFFEE_UIPARTICLEEXTENSIONS_VECTOR3EXTENSIONS_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1B585B20)

namespace Coffee::UIParticleExtensions
{
	inline static constexpr unsigned int Vector3Extensions_TypeDefinitionIndex = 32659;

	class Vector3Extensions : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3 Inverse(::UnityEngine::Vector3 self)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEEXTENSIONS_VECTOR3EXTENSIONS_INVERSE_OFFSET))(self);
		}

		static ::UnityEngine::Vector3 GetScaled(::UnityEngine::Vector3 self, ::UnityEngine::Vector3 other1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEEXTENSIONS_VECTOR3EXTENSIONS_GETSCALED_OFFSET))(self, other1);
		}

		static ::UnityEngine::Vector3 GetScaled_1(::UnityEngine::Vector3 self, ::UnityEngine::Vector3 other1, ::UnityEngine::Vector3 other2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEEXTENSIONS_VECTOR3EXTENSIONS_GETSCALED_1_OFFSET))(self, other1, other2);
		}

		static ::UnityEngine::Vector3 GetScaled_2(::UnityEngine::Vector3 self, ::UnityEngine::Vector3 other1, ::UnityEngine::Vector3 other2, ::UnityEngine::Vector3 other3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEEXTENSIONS_VECTOR3EXTENSIONS_GETSCALED_2_OFFSET))(self, other1, other2, other3);
		}

		static ::System::Boolean IsVisible(::UnityEngine::Vector3 self)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEEXTENSIONS_VECTOR3EXTENSIONS_ISVISIBLE_OFFSET))(self);
		}
	};
}
