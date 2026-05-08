#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGModule.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy::Generator { class CGShape; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_TRSMODULEBASE_APPLYTRSONSHAPE_OFFSET UNITYSDK_OFFSET(0x1B03FDA0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_TRSMODULEBASE_GET_MATRIX_OFFSET UNITYSDK_OFFSET(0x1B03FC80)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_TRSMODULEBASE_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1B03FB20)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_TRSMODULEBASE_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x1B03FBD0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_TRSMODULEBASE_GET_TRANSPOSE_OFFSET UNITYSDK_OFFSET(0x1B03FA70)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_TRSMODULEBASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B0402C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_TRSMODULEBASE_RESET_OFFSET UNITYSDK_OFFSET(0x1B040300)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_TRSMODULEBASE_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1B03FB40)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_TRSMODULEBASE_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x1B03FBF0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_TRSMODULEBASE_SET_TRANSPOSE_OFFSET UNITYSDK_OFFSET(0x1B03FA90)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_TRSMODULEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0404B0)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int TRSModuleBase_TypeDefinitionIndex = 37381;

	class TRSModuleBase : public ::FluffyUnderware::Curvy::Generator::CGModule
	{
	public:
		::UnityEngine::Vector3 m_Transpose; // 0xB8
		::UnityEngine::Vector3 m_Rotation; // 0xC4
		::UnityEngine::Vector3 m_Scale; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_TRSMODULEBASE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Transpose()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_TRSMODULEBASE_GET_TRANSPOSE_OFFSET))(this);
		}

		::System::Void set_Transpose(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_TRSMODULEBASE_SET_TRANSPOSE_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_Rotation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_TRSMODULEBASE_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_TRSMODULEBASE_SET_ROTATION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_Scale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_TRSMODULEBASE_GET_SCALE_OFFSET))(this);
		}

		::System::Void set_Scale(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_TRSMODULEBASE_SET_SCALE_OFFSET))(this, value);
		}

		::UnityEngine::Matrix4x4 get_Matrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_TRSMODULEBASE_GET_MATRIX_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 ApplyTrsOnShape(::FluffyUnderware::Curvy::Generator::CGShape* shape)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGShape*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_TRSMODULEBASE_APPLYTRSONSHAPE_OFFSET))(this, shape);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_TRSMODULEBASE_ONENABLE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_TRSMODULEBASE_RESET_OFFSET))(this);
		}
	};
}
