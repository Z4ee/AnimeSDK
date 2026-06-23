#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Bounds.h"

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDS_COPY_OFFSET UNITYSDK_OFFSET(0x1DE90E50)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDS_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x1DE90C10)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDS_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x1DE90CD0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDS_RECALCULATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1DE90E30)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDS_SET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x1DE90CB0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE90D70)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DE90D90)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE90D60)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGBounds_TypeDefinitionIndex = 39044;

	class CGBounds : public ::FluffyUnderware::Curvy::Generator::CGData
	{
	public:
		::System::Nullable_1<::UnityEngine::Bounds> mBounds; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Bounds bounds)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDS__CTOR_1_OFFSET))(this, bounds);
		}

		::System::Void _ctor_2(::FluffyUnderware::Curvy::Generator::CGBounds* source)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGBounds*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDS__CTOR_2_OFFSET))(this, source);
		}

		::UnityEngine::Bounds get_Bounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDS_GET_BOUNDS_OFFSET))(this);
		}

		::System::Void set_Bounds(::UnityEngine::Bounds value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDS_SET_BOUNDS_OFFSET))(this, value);
		}

		::System::Single get_Depth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDS_GET_DEPTH_OFFSET))(this);
		}

		::System::Void RecalculateBounds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDS_RECALCULATEBOUNDS_OFFSET))(this);
		}

		static ::System::Void Copy(::FluffyUnderware::Curvy::Generator::CGBounds* dest, ::FluffyUnderware::Curvy::Generator::CGBounds* source)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::Generator::CGBounds*, ::FluffyUnderware::Curvy::Generator::CGBounds*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGBOUNDS_COPY_OFFSET))(dest, source);
		}
	};
}
