#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DesperateDevs::Utils { class AttributeInfo; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class PropertyInfo; }

#define DESPERATEDEVS_UTILS_PUBLICMEMBERINFO_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x11A56CC0)
#define DESPERATEDEVS_UTILS_PUBLICMEMBERINFO_GETVALUE_OFFSET UNITYSDK_OFFSET(0x11A56EE0)
#define DESPERATEDEVS_UTILS_PUBLICMEMBERINFO_SETVALUE_OFFSET UNITYSDK_OFFSET(0x11A56F30)
#define DESPERATEDEVS_UTILS_PUBLICMEMBERINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x11A56E60)
#define DESPERATEDEVS_UTILS_PUBLICMEMBERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x11A56C40)

namespace DesperateDevs::Utils
{
	inline static constexpr unsigned int PublicMemberInfo_TypeDefinitionIndex = 8996;

	class PublicMemberInfo : public ::System::Object
	{
	public:
		::System::Type* type; // 0x10
		::Il2CppArray<::DesperateDevs::Utils::AttributeInfo*>* attributes; // 0x18
		::System::Reflection::FieldInfo* _fieldInfo; // 0x20
		::System::String* name; // 0x28
		::System::Reflection::PropertyInfo* _propertyInfo; // 0x30

		::System::Void _ctor(::System::Reflection::FieldInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + DESPERATEDEVS_UTILS_PUBLICMEMBERINFO__CTOR_OFFSET))(this, info);
		}

		::System::Void _ctor_1(::System::Reflection::PropertyInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + DESPERATEDEVS_UTILS_PUBLICMEMBERINFO__CTOR_1_OFFSET))(this, info);
		}

		::System::Object* GetValue(::System::Object* obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DESPERATEDEVS_UTILS_PUBLICMEMBERINFO_GETVALUE_OFFSET))(this, obj);
		}

		::System::Void SetValue(::System::Object* obj, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + DESPERATEDEVS_UTILS_PUBLICMEMBERINFO_SETVALUE_OFFSET))(this, obj, value);
		}

		static ::Il2CppArray<::DesperateDevs::Utils::AttributeInfo*>* getAttributes(::Il2CppArray<::System::Object*>* attributes)
		{
			return ((::Il2CppArray<::DesperateDevs::Utils::AttributeInfo*>*(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + DESPERATEDEVS_UTILS_PUBLICMEMBERINFO_GETATTRIBUTES_OFFSET))(attributes);
		}
	};
}
