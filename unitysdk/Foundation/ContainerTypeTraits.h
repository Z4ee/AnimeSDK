#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ContainerTypeTraits_ICollectionType.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_CONTAINERTYPETRAITS_ADDDYNAMICCONCURRENTQUEUEINNERTYPE_OFFSET UNITYSDK_OFFSET(0x1DF0F840)
#define FOUNDATION_CONTAINERTYPETRAITS_ADDDYNAMICQUEUEINNERTYPE_OFFSET UNITYSDK_OFFSET(0x1DF0F6A0)
#define FOUNDATION_CONTAINERTYPETRAITS_GETDYNAMICTYPEINDEX_OFFSET UNITYSDK_OFFSET(0x1DF0F230)
#define FOUNDATION_CONTAINERTYPETRAITS_TRYRESETDYNAMICOBJECTBYTYPEINDEX_OFFSET UNITYSDK_OFFSET(0x1DF0FD50)
#define FOUNDATION_CONTAINERTYPETRAITS__ADDCOLLECTIONINNERTYPEDYN_OFFSET UNITYSDK_OFFSET(0x1DF0F9E0)
#define FOUNDATION_CONTAINERTYPETRAITS__ADDSPECIFIEDDYNAMICCLEANER_OFFSET UNITYSDK_OFFSET(0x1DF0FB70)
#define FOUNDATION_CONTAINERTYPETRAITS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF0EF50)

namespace Foundation
{
	inline static constexpr unsigned int ContainerTypeTraits_TypeDefinitionIndex = 8126;

	class ContainerTypeTraits : public ::System::Object
	{
	public:
		static ::System::Type** StaticGet_TypeDictionary()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(ContainerTypeTraits_TypeDefinitionIndex)->GetStaticField(0x6F10);
		}
		static ::System::Collections::Generic::List_1<::System::Type*>** StaticGet_TypeCollections()
		{
			return (::System::Collections::Generic::List_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(ContainerTypeTraits_TypeDefinitionIndex)->GetStaticField(0x6F18);
		}
		static ::System::Type** StaticGet_TypeStringBuilder()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(ContainerTypeTraits_TypeDefinitionIndex)->GetStaticField(0x6F20);
		}
		static ::System::Type** StaticGet_TypeList()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(ContainerTypeTraits_TypeDefinitionIndex)->GetStaticField(0x6F28);
		}
		static ::System::Type** StaticGet_TypeQueue()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(ContainerTypeTraits_TypeDefinitionIndex)->GetStaticField(0x6F30);
		}
		static ::System::Type** StaticGet_TypeStack()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(ContainerTypeTraits_TypeDefinitionIndex)->GetStaticField(0x6F38);
		}
		static ::System::Type** StaticGet_iCollectionGenericType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(ContainerTypeTraits_TypeDefinitionIndex)->GetStaticField(0x6F40);
		}
		static ::System::Collections::Generic::List_1<::System::Action_1<::System::Object*>*>** StaticGet_TypeCollectionsActions()
		{
			return (::System::Collections::Generic::List_1<::System::Action_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(ContainerTypeTraits_TypeDefinitionIndex)->GetStaticField(0x6F48);
		}
		static ::System::Boolean* StaticGet_isApplicationPlaying()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ContainerTypeTraits_TypeDefinitionIndex)->GetStaticField(0x3740);
		}
		// static const ::System::Int32 DYNAMIC_COLLECTION_BASE = 0x64; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINERTYPETRAITS__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetDynamicTypeIndex(::System::Type* checkType, ::System::Int32 depth)
		{
			return ((::System::Int32(*)(::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINERTYPETRAITS_GETDYNAMICTYPEINDEX_OFFSET))(checkType, depth);
		}

		static ::System::Void AddDynamicQueueInnerType(::System::Type* argsType)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINERTYPETRAITS_ADDDYNAMICQUEUEINNERTYPE_OFFSET))(argsType);
		}

		static ::System::Void AddDynamicConcurrentQueueInnerType(::System::Type* argsType)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINERTYPETRAITS_ADDDYNAMICCONCURRENTQUEUEINNERTYPE_OFFSET))(argsType);
		}

		static ::System::Void _AddCollectionInnerTypeDyn(::System::Type* argsType)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINERTYPETRAITS__ADDCOLLECTIONINNERTYPEDYN_OFFSET))(argsType);
		}

		static ::System::Int32 _AddSpecifiedDynamicCleaner(::System::Type* cleanType, ::System::Type* cleanerType, ::Il2CppArray<::System::Type*>* typeArgs)
		{
			return ((::System::Int32(*)(::System::Type*, ::System::Type*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINERTYPETRAITS__ADDSPECIFIEDDYNAMICCLEANER_OFFSET))(cleanType, cleanerType, typeArgs);
		}

		static ::System::Void TryResetDynamicObjectByTypeIndex(::System::Object* o, ::System::Int32 index)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINERTYPETRAITS_TRYRESETDYNAMICOBJECTBYTYPEINDEX_OFFSET))(o, index);
		}
	};
}
