#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/BoundsInt.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RangeInt.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/RectInt.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_GETDEFAULTHELPER_OFFSET UNITYSDK_OFFSET(0x1D74FAC0)
#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D74FE20)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int UnityEqualityComparer_TypeDefinitionIndex = 43089;

	class UnityEqualityComparer : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Quaternion>** StaticGet_Quaternion()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x61AC0);
		}
		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector3>** StaticGet_Vector3()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x61AC8);
		}
		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector3Int>** StaticGet_Vector3Int()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector3Int>**)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x61AD0);
		}
		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rect>** StaticGet_Rect()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rect>**)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x61AD8);
		}
		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Color>** StaticGet_Color()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x61AE0);
		}
		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector2>** StaticGet_Vector2()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x61AE8);
		}
		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Color32>** StaticGet_Color32()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Color32>**)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x61AF0);
		}
		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Bounds>** StaticGet_Bounds()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Bounds>**)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x61AF8);
		}
		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::BoundsInt>** StaticGet_BoundsInt()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::BoundsInt>**)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x61B00);
		}
		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector4>** StaticGet_Vector4()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x61B08);
		}
		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::RangeInt>** StaticGet_RangeInt()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::RangeInt>**)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x61B10);
		}
		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::RectInt>** StaticGet_RectInt()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::RectInt>**)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x61B18);
		}
		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector2Int>** StaticGet_Vector2Int()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector2Int>**)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x61B20);
		}
		static ::System::RuntimeTypeHandle* StaticGet_vector3Type()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x14110);
		}
		static ::System::RuntimeTypeHandle* StaticGet_boundsType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x14118);
		}
		static ::System::RuntimeTypeHandle* StaticGet_vector2Type()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x14120);
		}
		static ::System::RuntimeTypeHandle* StaticGet_colorType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x14128);
		}
		static ::System::RuntimeTypeHandle* StaticGet_vector3IntType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x14130);
		}
		static ::System::RuntimeTypeHandle* StaticGet_rangeIntType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x14138);
		}
		static ::System::RuntimeTypeHandle* StaticGet_rectType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x14140);
		}
		static ::System::RuntimeTypeHandle* StaticGet_color32Type()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x14148);
		}
		static ::System::RuntimeTypeHandle* StaticGet_boundsIntType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x14150);
		}
		static ::System::RuntimeTypeHandle* StaticGet_quaternionType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x14158);
		}
		static ::System::RuntimeTypeHandle* StaticGet_rectIntType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x14160);
		}
		static ::System::RuntimeTypeHandle* StaticGet_vector4Type()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x14168);
		}
		static ::System::RuntimeTypeHandle* StaticGet_vector2IntType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x14170);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER__CCTOR_OFFSET))();
		}

		static ::System::Object* GetDefaultHelper(::System::Type* a1)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_GETDEFAULTHELPER_OFFSET))(a1);
		}
	};
}
