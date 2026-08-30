#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DesperateDevs::Utils { class AttributeInfo; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class PropertyInfo; }

#define DESPERATEDEVS_UTILS_PUBLICMEMBERINFO_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1F00D650)
#define DESPERATEDEVS_UTILS_PUBLICMEMBERINFO_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1F00D970)
#define DESPERATEDEVS_UTILS_PUBLICMEMBERINFO_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1F00DA90)
#define DESPERATEDEVS_UTILS_PUBLICMEMBERINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F00D7D0)
#define DESPERATEDEVS_UTILS_PUBLICMEMBERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1F00D4B0)

namespace DesperateDevs::Utils
{
	inline static constexpr unsigned int PublicMemberInfo_TypeDefinitionIndex = 7088;

	class PublicMemberInfo : public ::System::Object
	{
	public:
		::System::Reflection::PropertyInfo* _propertyInfo; // 0x10
		::System::Reflection::FieldInfo* _fieldInfo; // 0x18
		::Il2CppArray<::DesperateDevs::Utils::AttributeInfo*>* attributes; // 0x20
		::System::Type* type; // 0x28
		::System::String* name; // 0x30

		::System::Void _ctor(::System::Reflection::FieldInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + DESPERATEDEVS_UTILS_PUBLICMEMBERINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Reflection::PropertyInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + DESPERATEDEVS_UTILS_PUBLICMEMBERINFO__CTOR_1_OFFSET))(this, a1);
		}

		::System::Object* GetValue(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DESPERATEDEVS_UTILS_PUBLICMEMBERINFO_GETVALUE_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + DESPERATEDEVS_UTILS_PUBLICMEMBERINFO_SETVALUE_OFFSET))(this, a1, a2);
		}

		static ::Il2CppArray<::DesperateDevs::Utils::AttributeInfo*>* getAttributes(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::Il2CppArray<::DesperateDevs::Utils::AttributeInfo*>*(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + DESPERATEDEVS_UTILS_PUBLICMEMBERINFO_GETATTRIBUTES_OFFSET))(a1);
		}
	};
}
