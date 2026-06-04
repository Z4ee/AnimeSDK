#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define COLLECTIONS_POOLED_EVENTARGSCACHE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18883790)

namespace Collections::Pooled
{
	inline static constexpr unsigned int EventArgsCache_TypeDefinitionIndex = 5096;

	class EventArgsCache : public ::System::Object
	{
	public:
		static ::System::Collections::Specialized::NotifyCollectionChangedEventArgs** StaticGet_ResetCollectionChanged()
		{
			return (::System::Collections::Specialized::NotifyCollectionChangedEventArgs**)Il2CppClass::FromTypeDefinitionIndex(EventArgsCache_TypeDefinitionIndex)->GetStaticField(0x270);
		}
		static ::System::ComponentModel::PropertyChangedEventArgs** StaticGet_CountPropertyChanged()
		{
			return (::System::ComponentModel::PropertyChangedEventArgs**)Il2CppClass::FromTypeDefinitionIndex(EventArgsCache_TypeDefinitionIndex)->GetStaticField(0x278);
		}
		static ::System::ComponentModel::PropertyChangedEventArgs** StaticGet_IndexerPropertyChanged()
		{
			return (::System::ComponentModel::PropertyChangedEventArgs**)Il2CppClass::FromTypeDefinitionIndex(EventArgsCache_TypeDefinitionIndex)->GetStaticField(0x280);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_EVENTARGSCACHE__CCTOR_OFFSET))();
		}
	};
}
