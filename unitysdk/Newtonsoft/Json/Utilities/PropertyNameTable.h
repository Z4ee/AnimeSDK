#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Utilities { class PropertyNameTable_Entry; }
namespace System { class String; }

#define NEWTONSOFT_JSON_UTILITIES_PROPERTYNAMETABLE_ADDENTRY_OFFSET UNITYSDK_OFFSET(0x17316FB0)
#define NEWTONSOFT_JSON_UTILITIES_PROPERTYNAMETABLE_ADD_OFFSET UNITYSDK_OFFSET(0x172E0750)
#define NEWTONSOFT_JSON_UTILITIES_PROPERTYNAMETABLE_GET_OFFSET UNITYSDK_OFFSET(0x17316C60)
#define NEWTONSOFT_JSON_UTILITIES_PROPERTYNAMETABLE_GROW_OFFSET UNITYSDK_OFFSET(0x173170A0)
#define NEWTONSOFT_JSON_UTILITIES_PROPERTYNAMETABLE_TEXTEQUALS_OFFSET UNITYSDK_OFFSET(0x17316EF0)
#define NEWTONSOFT_JSON_UTILITIES_PROPERTYNAMETABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17316C10)
#define NEWTONSOFT_JSON_UTILITIES_PROPERTYNAMETABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x172E2A70)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int PropertyNameTable_TypeDefinitionIndex = 9575;

	class PropertyNameTable : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_HashCodeRandomizer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PropertyNameTable_TypeDefinitionIndex)->GetStaticField(0x10630);
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

		::System::String* Get(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_PROPERTYNAMETABLE_GET_OFFSET))(this, a1, a2, a3);
		}

		::System::String* Add(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_PROPERTYNAMETABLE_ADD_OFFSET))(this, a1);
		}

		::System::String* AddEntry(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_PROPERTYNAMETABLE_ADDENTRY_OFFSET))(this, a1, a2);
		}

		::System::Void Grow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_PROPERTYNAMETABLE_GROW_OFFSET))(this);
		}

		static ::System::Boolean TextEquals(::System::String* a1, ::Il2CppArray<::System::Char>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_PROPERTYNAMETABLE_TEXTEQUALS_OFFSET))(a1, a2, a3, a4);
		}
	};
}
