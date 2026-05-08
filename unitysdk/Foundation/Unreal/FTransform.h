#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FOUNDATION_UNREAL_FTRANSFORM_DIAGNOSTICCHECKNAN_ROTATION_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define FOUNDATION_UNREAL_FTRANSFORM_DIAGNOSTICCHECKNAN_SCALE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define FOUNDATION_UNREAL_FTRANSFORM_DIAGNOSTICCHECKNAN_TRANSLATION_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define FOUNDATION_UNREAL_FTRANSFORM_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x3F6E00)
#define FOUNDATION_UNREAL_FTRANSFORM_GET_SCALE3D_OFFSET UNITYSDK_OFFSET(0x9DA270)
#define FOUNDATION_UNREAL_FTRANSFORM_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x94D150)
#define FOUNDATION_UNREAL_FTRANSFORM_GET_TRANSLATION_OFFSET UNITYSDK_OFFSET(0x2E2760)
#define FOUNDATION_UNREAL_FTRANSFORM_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x881760)
#define FOUNDATION_UNREAL_FTRANSFORM_SET_SCALE3D_OFFSET UNITYSDK_OFFSET(0x9DA290)
#define FOUNDATION_UNREAL_FTRANSFORM_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x98D1E0)
#define FOUNDATION_UNREAL_FTRANSFORM_SET_TRANSLATION_OFFSET UNITYSDK_OFFSET(0x2E2450)
#define FOUNDATION_UNREAL_FTRANSFORM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C48B8E0)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FTransform_TypeDefinitionIndex = 9037;

	struct alignas(4) FTransform
	{
		static ::Foundation::Unreal::FTransform* StaticGet_Identity()
		{
			return (::Foundation::Unreal::FTransform*)Il2CppClass::FromTypeDefinitionIndex(FTransform_TypeDefinitionIndex)->GetStaticField(0x3EC0);
		}
		::UnityEngine::Vector3 _translation; // 0x10
		::UnityEngine::Quaternion _rotation; // 0x1C
		::System::Single _scale; // 0x2C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FTRANSFORM__CCTOR_OFFSET))();
		}

		::UnityEngine::Vector3 get_Translation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FTRANSFORM_GET_TRANSLATION_OFFSET))(this);
		}

		::System::Void set_Translation(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FTRANSFORM_SET_TRANSLATION_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FTRANSFORM_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FTRANSFORM_SET_ROTATION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_Scale3D()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FTRANSFORM_GET_SCALE3D_OFFSET))(this);
		}

		::System::Void set_Scale3D(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FTRANSFORM_SET_SCALE3D_OFFSET))(this, value);
		}

		::System::Single get_Scale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FTRANSFORM_GET_SCALE_OFFSET))(this);
		}

		::System::Void set_Scale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FTRANSFORM_SET_SCALE_OFFSET))(this, value);
		}

		::System::Void DiagnosticCheckNaN_Translation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FTRANSFORM_DIAGNOSTICCHECKNAN_TRANSLATION_OFFSET))(this);
		}

		::System::Void DiagnosticCheckNaN_Rotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FTRANSFORM_DIAGNOSTICCHECKNAN_ROTATION_OFFSET))(this);
		}

		::System::Void DiagnosticCheckNaN_Scale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FTRANSFORM_DIAGNOSTICCHECKNAN_SCALE_OFFSET))(this);
		}
	};
}
