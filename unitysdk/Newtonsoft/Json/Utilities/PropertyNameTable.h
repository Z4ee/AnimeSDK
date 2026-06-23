#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Utilities { class PropertyNameTable_Entry; }
namespace System { class String; }

#define NEWTONSOFT_JSON_UTILITIES_PROPERTYNAMETABLE_ADDENTRY_OFFSET UNITYSDK_OFFSET(0x1E2FA580)
#define NEWTONSOFT_JSON_UTILITIES_PROPERTYNAMETABLE_ADD_OFFSET UNITYSDK_OFFSET(0x1E2FA2E0)
#define NEWTONSOFT_JSON_UTILITIES_PROPERTYNAMETABLE_GET_OFFSET UNITYSDK_OFFSET(0x1E2F9D80)
#define NEWTONSOFT_JSON_UTILITIES_PROPERTYNAMETABLE_GROW_OFFSET UNITYSDK_OFFSET(0x1E2FA6C0)
#define NEWTONSOFT_JSON_UTILITIES_PROPERTYNAMETABLE_TEXTEQUALS_OFFSET UNITYSDK_OFFSET(0x1E2FA120)
#define NEWTONSOFT_JSON_UTILITIES_PROPERTYNAMETABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2F9CE0)
#define NEWTONSOFT_JSON_UTILITIES_PROPERTYNAMETABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2F9D30)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int PropertyNameTable_TypeDefinitionIndex = 7071;

	class PropertyNameTable : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_HashCodeRandomizer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PropertyNameTable_TypeDefinitionIndex)->GetStaticField(0x3240);
		}
		::Il2CppArray<::Newtonsoft::Json::Utilities::PropertyNameTable_Entry*>* _entries; // 0x10
		::System::Int32 _mask; // 0x18
		::System::Int32 _count; // 0x1C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_PROPERTYNAMETABLE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_PROPERTYNAMETABLE__CTOR_OFFSET))(this);
		}

		::System::String* Get(::Il2CppArray<::System::Char>* key, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_PROPERTYNAMETABLE_GET_OFFSET))(this, key, start, length);
		}

		::System::String* Add(::System::String* key)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_PROPERTYNAMETABLE_ADD_OFFSET))(this, key);
		}

		::System::String* AddEntry(::System::String* str, ::System::Int32 hashCode)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_PROPERTYNAMETABLE_ADDENTRY_OFFSET))(this, str, hashCode);
		}

		::System::Void Grow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_PROPERTYNAMETABLE_GROW_OFFSET))(this);
		}

		static ::System::Boolean TextEquals(::System::String* str1, ::Il2CppArray<::System::Char>* str2, ::System::Int32 str2Start, ::System::Int32 str2Length)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_PROPERTYNAMETABLE_TEXTEQUALS_OFFSET))(str1, str2, str2Start, str2Length);
		}
	};
}
