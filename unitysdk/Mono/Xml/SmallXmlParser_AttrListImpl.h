#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MONO_XML_SMALLXMLPARSER_ATTRLISTIMPL_ADD_OFFSET UNITYSDK_OFFSET(0x1A972B60)
#define MONO_XML_SMALLXMLPARSER_ATTRLISTIMPL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A972AF0)
#define MONO_XML_SMALLXMLPARSER_ATTRLISTIMPL_GETNAME_OFFSET UNITYSDK_OFFSET(0x1A972680)
#define MONO_XML_SMALLXMLPARSER_ATTRLISTIMPL_GETVALUE_1_OFFSET UNITYSDK_OFFSET(0x1A972870)
#define MONO_XML_SMALLXMLPARSER_ATTRLISTIMPL_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1A9726E0)
#define MONO_XML_SMALLXMLPARSER_ATTRLISTIMPL_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1A972660)
#define MONO_XML_SMALLXMLPARSER_ATTRLISTIMPL_GET_NAMES_OFFSET UNITYSDK_OFFSET(0x1A972990)
#define MONO_XML_SMALLXMLPARSER_ATTRLISTIMPL_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x1A972A40)
#define MONO_XML_SMALLXMLPARSER_ATTRLISTIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A972BE0)

namespace Mono::Xml
{
	inline static constexpr unsigned int SmallXmlParser_AttrListImpl_TypeDefinitionIndex = 30;

	class SmallXmlParser_AttrListImpl : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* attrNames; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* attrValues; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_ATTRLISTIMPL__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_ATTRLISTIMPL_GET_LENGTH_OFFSET))(this);
		}

		::System::String* GetName(::System::Int32 i)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_ATTRLISTIMPL_GETNAME_OFFSET))(this, i);
		}

		::System::String* GetValue(::System::Int32 i)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_ATTRLISTIMPL_GETVALUE_OFFSET))(this, i);
		}

		::System::String* GetValue_1(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_ATTRLISTIMPL_GETVALUE_1_OFFSET))(this, name);
		}

		::Il2CppArray<::System::String*>* get_Names()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_ATTRLISTIMPL_GET_NAMES_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_Values()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_ATTRLISTIMPL_GET_VALUES_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_ATTRLISTIMPL_CLEAR_OFFSET))(this);
		}

		::System::Void Add(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_ATTRLISTIMPL_ADD_OFFSET))(this, name, value);
		}
	};
}
