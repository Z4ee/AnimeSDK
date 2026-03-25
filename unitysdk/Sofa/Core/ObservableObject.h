#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventHandler; }

#define SOFA_CORE_OBSERVABLEOBJECT_ADD_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1838BED0)
#define SOFA_CORE_OBSERVABLEOBJECT_GETPROPERTYCHANGEDEVENTARGS_OFFSET UNITYSDK_OFFSET(0x1838C020)
#define SOFA_CORE_OBSERVABLEOBJECT_ONPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1838BF90)
#define SOFA_CORE_OBSERVABLEOBJECT_REMOVE_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1838BF30)
#define SOFA_CORE_OBSERVABLEOBJECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1838C260)
#define SOFA_CORE_OBSERVABLEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x18388EE0)

namespace Sofa::Core
{
	inline static constexpr unsigned int ObservableObject_TypeDefinitionIndex = 34005;

	class ObservableObject : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ComponentModel::PropertyChangedEventArgs*>** StaticGet__PROPERTY_EVENT_ARGS()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ComponentModel::PropertyChangedEventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(ObservableObject_TypeDefinitionIndex)->GetStaticField(0x26AC0);
		}
		static ::System::ComponentModel::PropertyChangedEventArgs** StaticGet__NULL_EVENT_ARGS()
		{
			return (::System::ComponentModel::PropertyChangedEventArgs**)Il2CppClass::FromTypeDefinitionIndex(ObservableObject_TypeDefinitionIndex)->GetStaticField(0x26AC8);
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

		::System::Void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + SOFA_CORE_OBSERVABLEOBJECT_ADD_PROPERTYCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + SOFA_CORE_OBSERVABLEOBJECT_REMOVE_PROPERTYCHANGED_OFFSET))(this, value);
		}

		::System::Void OnPropertyChanged(::System::String* propertyName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SOFA_CORE_OBSERVABLEOBJECT_ONPROPERTYCHANGED_OFFSET))(this, propertyName);
		}

		static ::System::ComponentModel::PropertyChangedEventArgs* GetPropertyChangedEventArgs(::System::String* propertyName)
		{
			return ((::System::ComponentModel::PropertyChangedEventArgs*(*)(::System::String*))((::PBYTE)hIl2Cpp + SOFA_CORE_OBSERVABLEOBJECT_GETPROPERTYCHANGEDEVENTARGS_OFFSET))(propertyName);
		}
	};
}
