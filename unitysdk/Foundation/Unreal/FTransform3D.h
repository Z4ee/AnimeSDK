#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FOUNDATION_UNREAL_FTRANSFORM3D_DIAGNOSTICCHECKNAN_ROTATION_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define FOUNDATION_UNREAL_FTRANSFORM3D_DIAGNOSTICCHECKNAN_SCALE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define FOUNDATION_UNREAL_FTRANSFORM3D_DIAGNOSTICCHECKNAN_TRANSLATION_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define FOUNDATION_UNREAL_FTRANSFORM3D_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x3F6E00)
#define FOUNDATION_UNREAL_FTRANSFORM3D_GET_SCALE3D_OFFSET UNITYSDK_OFFSET(0x881770)
#define FOUNDATION_UNREAL_FTRANSFORM3D_GET_TRANSLATIONOFFSET_OFFSET UNITYSDK_OFFSET(0x1C176A70)
#define FOUNDATION_UNREAL_FTRANSFORM3D_GET_TRANSLATION_OFFSET UNITYSDK_OFFSET(0x2E2760)
#define FOUNDATION_UNREAL_FTRANSFORM3D_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1C176BF0)
#define FOUNDATION_UNREAL_FTRANSFORM3D_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1C176B70)
#define FOUNDATION_UNREAL_FTRANSFORM3D_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x881760)
#define FOUNDATION_UNREAL_FTRANSFORM3D_SET_SCALE3D_OFFSET UNITYSDK_OFFSET(0x881790)
#define FOUNDATION_UNREAL_FTRANSFORM3D_SET_TRANSLATION_OFFSET UNITYSDK_OFFSET(0x2E2450)
#define FOUNDATION_UNREAL_FTRANSFORM3D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C176C80)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FTransform3D_TypeDefinitionIndex = 8885;

	struct alignas(4) FTransform3D
	{
		static ::Foundation::Unreal::FTransform3D* StaticGet_Identity()
		{
			return (::Foundation::Unreal::FTransform3D*)Il2CppClass::FromTypeDefinitionIndex(FTransform3D_TypeDefinitionIndex)->GetStaticField(0x3E50);
		}
		::UnityEngine::Vector3 _translation; // 0x10
		::UnityEngine::Quaternion _rotation; // 0x1C
		::UnityEngine::Vector3 _scale; // 0x2C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FTRANSFORM3D__CCTOR_OFFSET))();
		}

		static ::System::Int32 get_TranslationOffset()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FTRANSFORM3D_GET_TRANSLATIONOFFSET_OFFSET))();
		}

		::UnityEngine::Vector3 get_Translation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FTRANSFORM3D_GET_TRANSLATION_OFFSET))(this);
		}

		::System::Void set_Translation(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FTRANSFORM3D_SET_TRANSLATION_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FTRANSFORM3D_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FTRANSFORM3D_SET_ROTATION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_Scale3D()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FTRANSFORM3D_GET_SCALE3D_OFFSET))(this);
		}

		::System::Void set_Scale3D(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FTRANSFORM3D_SET_SCALE3D_OFFSET))(this, value);
		}

		::System::Void DiagnosticCheckNaN_Translation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FTRANSFORM3D_DIAGNOSTICCHECKNAN_TRANSLATION_OFFSET))(this);
		}

		::System::Void DiagnosticCheckNaN_Rotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FTRANSFORM3D_DIAGNOSTICCHECKNAN_ROTATION_OFFSET))(this);
		}

		::System::Void DiagnosticCheckNaN_Scale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FTRANSFORM3D_DIAGNOSTICCHECKNAN_SCALE_OFFSET))(this);
		}

		/*
		static ::UnityEngine::NapTransformData op_Explicit(::Foundation::Unreal::FTransform3D item)
		{
			return ((::UnityEngine::NapTransformData(*)(::Foundation::Unreal::FTransform3D))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FTRANSFORM3D_OP_EXPLICIT_OFFSET))(item);
		}
		*/

		/*
		static ::Foundation::Unreal::FTransform3D op_Explicit_1(::UnityEngine::NapTransformData item)
		{
			return ((::Foundation::Unreal::FTransform3D(*)(::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FTRANSFORM3D_OP_EXPLICIT_1_OFFSET))(item);
		}
		*/
	};
}
