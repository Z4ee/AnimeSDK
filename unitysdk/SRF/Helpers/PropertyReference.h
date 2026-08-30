#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRF::Helpers { class PropertyValueChangedHandler; }
namespace System { class Attribute; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace System::Reflection { class PropertyInfo; }

#define SRF_HELPERS_PROPERTYREFERENCE_ADD_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1E6A8DE0)
#define SRF_HELPERS_PROPERTYREFERENCE_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1E6A9720)
#define SRF_HELPERS_PROPERTYREFERENCE_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1E6A95F0)
#define SRF_HELPERS_PROPERTYREFERENCE_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1E6A9600)
#define SRF_HELPERS_PROPERTYREFERENCE_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1E6A8D50)
#define SRF_HELPERS_PROPERTYREFERENCE_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1E6A95D0)
#define SRF_HELPERS_PROPERTYREFERENCE_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1E6A8D40)
#define SRF_HELPERS_PROPERTYREFERENCE_NOTIFYVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1E6A9610)
#define SRF_HELPERS_PROPERTYREFERENCE_ONTARGETPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1E6A9790)
#define SRF_HELPERS_PROPERTYREFERENCE_REMOVE_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1E6A90B0)
#define SRF_HELPERS_PROPERTYREFERENCE_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1E6A9740)
#define SRF_HELPERS_PROPERTYREFERENCE_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1E6A95E0)
#define SRF_HELPERS_PROPERTYREFERENCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6A9580)
#define SRF_HELPERS_PROPERTYREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6A92F0)

namespace SRF::Helpers
{
	inline static constexpr unsigned int PropertyReference_TypeDefinitionIndex = 34758;

	class PropertyReference : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Attribute*>* _attributes; // 0x10
		::System::Reflection::PropertyInfo* _property; // 0x18
		::System::Collections::Generic::List_1<::SRF::Helpers::PropertyValueChangedHandler*>* _valueChangedListeners; // 0x20
		::System::Type* _PropertyType_k__BackingField; // 0x28
		::System::Action_1<::System::Object*>* _setter; // 0x30
		::System::Object* _target; // 0x38
		::System::Func_1<::System::Object*>* _getter; // 0x40

		::System::Void _ctor(::System::Object* a1, ::System::Reflection::PropertyInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYREFERENCE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Type* a1, ::System::Func_1<::System::Object*>* a2, ::System::Action_1<::System::Object*>* a3, ::Il2CppArray<::System::Attribute*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Func_1<::System::Object*>*, ::System::Action_1<::System::Object*>*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYREFERENCE__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Object* get_Target()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYREFERENCE_GET_TARGET_OFFSET))(this);
		}

		::System::String* get_PropertyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYREFERENCE_GET_PROPERTYNAME_OFFSET))(this);
		}

		::System::Void add_ValueChanged(::SRF::Helpers::PropertyValueChangedHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRF::Helpers::PropertyValueChangedHandler*))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYREFERENCE_ADD_VALUECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_ValueChanged(::SRF::Helpers::PropertyValueChangedHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRF::Helpers::PropertyValueChangedHandler*))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYREFERENCE_REMOVE_VALUECHANGED_OFFSET))(this, a1);
		}

		::System::Type* get_PropertyType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYREFERENCE_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_PropertyType(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYREFERENCE_SET_PROPERTYTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYREFERENCE_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYREFERENCE_GET_CANWRITE_OFFSET))(this);
		}

		::System::Void NotifyValueChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYREFERENCE_NOTIFYVALUECHANGED_OFFSET))(this);
		}

		::System::Object* GetValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYREFERENCE_GETVALUE_OFFSET))(this);
		}

		::System::Void SetValue(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYREFERENCE_SETVALUE_OFFSET))(this, a1);
		}

		::System::Void OnTargetPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + SRF_HELPERS_PROPERTYREFERENCE_ONTARGETPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}
	};
}
