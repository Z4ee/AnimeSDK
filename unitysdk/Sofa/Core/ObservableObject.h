#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventHandler; }

#define SOFA_CORE_OBSERVABLEOBJECT_ADD_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1E5C89E0)
#define SOFA_CORE_OBSERVABLEOBJECT_REMOVE_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1E5C8A40)
#define SOFA_CORE_OBSERVABLEOBJECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5C8D00)
#define SOFA_CORE_OBSERVABLEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C8CF0)
#define SOFA_CORE_OBSERVABLEOBJECT__GETPROPERTYCHANGEDEVENTARGS_OFFSET UNITYSDK_OFFSET(0x1E5C8B30)
#define SOFA_CORE_OBSERVABLEOBJECT__ONPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1E5C8AA0)

namespace Sofa::Core
{
	inline static constexpr unsigned int ObservableObject_TypeDefinitionIndex = 42424;

	class ObservableObject : public ::System::Object
	{
	public:
		static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::ComponentModel::PropertyChangedEventArgs*>** StaticGet__PROPERTY_EVENT_ARGS()
		{
			return (::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::ComponentModel::PropertyChangedEventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(ObservableObject_TypeDefinitionIndex)->GetStaticField(0x54BB0);
		}
		static ::System::ComponentModel::PropertyChangedEventArgs** StaticGet__NULL_EVENT_ARGS()
		{
			return (::System::ComponentModel::PropertyChangedEventArgs**)Il2CppClass::FromTypeDefinitionIndex(ObservableObject_TypeDefinitionIndex)->GetStaticField(0x54BB8);
		}
		::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_CORE_OBSERVABLEOBJECT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SOFA_CORE_OBSERVABLEOBJECT__CCTOR_OFFSET))();
		}

		::System::Void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + SOFA_CORE_OBSERVABLEOBJECT_ADD_PROPERTYCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + SOFA_CORE_OBSERVABLEOBJECT_REMOVE_PROPERTYCHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnPropertyChanged(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SOFA_CORE_OBSERVABLEOBJECT__ONPROPERTYCHANGED_OFFSET))(this, a1);
		}

		static ::System::ComponentModel::PropertyChangedEventArgs* _GetPropertyChangedEventArgs(::System::String* a1)
		{
			return ((::System::ComponentModel::PropertyChangedEventArgs*(*)(::System::String*))((::PBYTE)hIl2Cpp + SOFA_CORE_OBSERVABLEOBJECT__GETPROPERTYCHANGEDEVENTARGS_OFFSET))(a1);
		}
	};
}
