#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Xml { class MiniParser_IAttrList; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }

#define MONO_XML_MINIPARSER_ATTRLISTIMPL_ADD_OFFSET UNITYSDK_OFFSET(0x1F4CF620)
#define MONO_XML_MINIPARSER_ATTRLISTIMPL_CHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x1F4CF450)
#define MONO_XML_MINIPARSER_ATTRLISTIMPL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1F4CF5D0)
#define MONO_XML_MINIPARSER_ATTRLISTIMPL_COPYFROM_OFFSET UNITYSDK_OFFSET(0x1F4CF0E0)
#define MONO_XML_MINIPARSER_ATTRLISTIMPL_GETNAME_OFFSET UNITYSDK_OFFSET(0x1F4CF2C0)
#define MONO_XML_MINIPARSER_ATTRLISTIMPL_GETVALUE_1_OFFSET UNITYSDK_OFFSET(0x1F4CF3C0)
#define MONO_XML_MINIPARSER_ATTRLISTIMPL_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1F4CF340)
#define MONO_XML_MINIPARSER_ATTRLISTIMPL_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1F4CF290)
#define MONO_XML_MINIPARSER_ATTRLISTIMPL_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1F4CF0B0)
#define MONO_XML_MINIPARSER_ATTRLISTIMPL_GET_NAMES_OFFSET UNITYSDK_OFFSET(0x1F4CF4D0)
#define MONO_XML_MINIPARSER_ATTRLISTIMPL_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x1F4CF550)
#define MONO_XML_MINIPARSER_ATTRLISTIMPL_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1F4CF6D0)
#define MONO_XML_MINIPARSER_ATTRLISTIMPL_REMOVE_OFFSET UNITYSDK_OFFSET(0x1F4CF670)
#define MONO_XML_MINIPARSER_ATTRLISTIMPL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F4CEDE0)
#define MONO_XML_MINIPARSER_ATTRLISTIMPL__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F4CEF30)
#define MONO_XML_MINIPARSER_ATTRLISTIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4CECC0)

namespace Mono::Xml
{
	inline static constexpr unsigned int MiniParser_AttrListImpl_TypeDefinitionIndex = 2268;

	class MiniParser_AttrListImpl : public ::System::Object
	{
	public:
		::System::Collections::ArrayList* names; // 0x10
		::System::Collections::ArrayList* values; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER_ATTRLISTIMPL__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 initialCapacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER_ATTRLISTIMPL__CTOR_1_OFFSET))(this, initialCapacity);
		}

		::System::Void _ctor_2(::Mono::Xml::MiniParser_IAttrList* attrs)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::MiniParser_IAttrList*))((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER_ATTRLISTIMPL__CTOR_2_OFFSET))(this, attrs);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER_ATTRLISTIMPL_GET_LENGTH_OFFSET))(this);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER_ATTRLISTIMPL_GET_ISEMPTY_OFFSET))(this);
		}

		::System::String* GetName(::System::Int32 i)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER_ATTRLISTIMPL_GETNAME_OFFSET))(this, i);
		}

		::System::String* GetValue(::System::Int32 i)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER_ATTRLISTIMPL_GETVALUE_OFFSET))(this, i);
		}

		::System::String* GetValue_1(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER_ATTRLISTIMPL_GETVALUE_1_OFFSET))(this, name);
		}

		::System::Void ChangeValue(::System::String* name, ::System::String* newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER_ATTRLISTIMPL_CHANGEVALUE_OFFSET))(this, name, newValue);
		}

		::Il2CppArray<::System::String*>* get_Names()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER_ATTRLISTIMPL_GET_NAMES_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_Values()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER_ATTRLISTIMPL_GET_VALUES_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER_ATTRLISTIMPL_CLEAR_OFFSET))(this);
		}

		::System::Void Add(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER_ATTRLISTIMPL_ADD_OFFSET))(this, name, value);
		}

		::System::Void Remove(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER_ATTRLISTIMPL_REMOVE_OFFSET))(this, i);
		}

		::System::Void Remove_1(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER_ATTRLISTIMPL_REMOVE_1_OFFSET))(this, name);
		}

		::System::Void CopyFrom(::Mono::Xml::MiniParser_IAttrList* attrs)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::MiniParser_IAttrList*))((::PBYTE)hIl2Cpp + MONO_XML_MINIPARSER_ATTRLISTIMPL_COPYFROM_OFFSET))(this, attrs);
		}
	};
}
