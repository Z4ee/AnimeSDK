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

#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_GETDEFAULTHELPER_OFFSET UNITYSDK_OFFSET(0x1EA577C0)
#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA57B20)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int UnityEqualityComparer_TypeDefinitionIndex = 43089;

	class UnityEqualityComparer : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector2>** StaticGet_Vector2()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x560F0);
		}
		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Color32>** StaticGet_Color32()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Color32>**)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x560F8);
		}
		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rect>** StaticGet_Rect()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rect>**)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x56100);
		}
		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector3>** StaticGet_Vector3()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x56108);
		}
		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Bounds>** StaticGet_Bounds()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Bounds>**)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x56110);
		}
		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector2Int>** StaticGet_Vector2Int()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector2Int>**)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x56118);
		}
		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::RectInt>** StaticGet_RectInt()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::RectInt>**)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x56120);
		}
		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Color>** StaticGet_Color()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x56128);
		}
		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector4>** StaticGet_Vector4()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x56130);
		}
		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Quaternion>** StaticGet_Quaternion()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x56138);
		}
		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::BoundsInt>** StaticGet_BoundsInt()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::BoundsInt>**)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x56140);
		}
		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::RangeInt>** StaticGet_RangeInt()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::RangeInt>**)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x56148);
		}
		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector3Int>** StaticGet_Vector3Int()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector3Int>**)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x56150);
		}
		static ::System::RuntimeTypeHandle* StaticGet_boundsIntType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x11F40);
		}
		static ::System::RuntimeTypeHandle* StaticGet_vector3Type()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x11F48);
		}
		static ::System::RuntimeTypeHandle* StaticGet_vector2Type()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x11F50);
		}
		static ::System::RuntimeTypeHandle* StaticGet_vector3IntType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x11F58);
		}
		static ::System::RuntimeTypeHandle* StaticGet_boundsType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x11F60);
		}
		static ::System::RuntimeTypeHandle* StaticGet_quaternionType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x11F68);
		}
		static ::System::RuntimeTypeHandle* StaticGet_colorType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x11F70);
		}
		static ::System::RuntimeTypeHandle* StaticGet_vector2IntType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x11F78);
		}
		static ::System::RuntimeTypeHandle* StaticGet_rectType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x11F80);
		}
		static ::System::RuntimeTypeHandle* StaticGet_rangeIntType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x11F88);
		}
		static ::System::RuntimeTypeHandle* StaticGet_color32Type()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x11F90);
		}
		static ::System::RuntimeTypeHandle* StaticGet_rectIntType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x11F98);
		}
		static ::System::RuntimeTypeHandle* StaticGet_vector4Type()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(UnityEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x11FA0);
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
