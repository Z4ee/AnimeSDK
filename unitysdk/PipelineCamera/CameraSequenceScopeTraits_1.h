#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::CameraSequence { class ContextDependentAttribute; }
namespace PipelineCamera::CameraSequence { class ContextExternalAttribute; }
namespace PipelineCamera::CameraSequence { class ContextFreeAttribute; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class FieldInfo; }

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraSequenceScopeTraits_1_TypeDefinitionIndex = 38257;

	template <typename T>
	class CameraSequenceScopeTraits_1 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Reflection::FieldInfo*>** StaticGet_LocalDependentVariable()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Reflection::FieldInfo*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceScopeTraits_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Reflection::FieldInfo*>** StaticGet_LocalExternalVariable()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Reflection::FieldInfo*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceScopeTraits_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Reflection::FieldInfo*>** StaticGet_RootDependentVariable()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Reflection::FieldInfo*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceScopeTraits_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Reflection::FieldInfo*>** StaticGet_RootExternalVariable()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Reflection::FieldInfo*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceScopeTraits_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Reflection::FieldInfo*>** StaticGet_SubScope()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Reflection::FieldInfo*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceScopeTraits_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Reflection::FieldInfo*>** StaticGet_FreeVariable()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Reflection::FieldInfo*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceScopeTraits_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Type** StaticGet_ScopeInterfaceType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceScopeTraits_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
