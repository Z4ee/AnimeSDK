#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MONO_XML_SMALLXMLPARSER_ATTRLISTIMPL_ADD_OFFSET UNITYSDK_OFFSET(0x15613BD0)
#define MONO_XML_SMALLXMLPARSER_ATTRLISTIMPL_CLEAR_OFFSET UNITYSDK_OFFSET(0x15612AB0)
#define MONO_XML_SMALLXMLPARSER_ATTRLISTIMPL_GETNAME_OFFSET UNITYSDK_OFFSET(0x1560F470)
#define MONO_XML_SMALLXMLPARSER_ATTRLISTIMPL_GETVALUE_1_OFFSET UNITYSDK_OFFSET(0x15613CD0)
#define MONO_XML_SMALLXMLPARSER_ATTRLISTIMPL_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1560F4C0)
#define MONO_XML_SMALLXMLPARSER_ATTRLISTIMPL_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1560F450)
#define MONO_XML_SMALLXMLPARSER_ATTRLISTIMPL_GET_NAMES_OFFSET UNITYSDK_OFFSET(0x15613E00)
#define MONO_XML_SMALLXMLPARSER_ATTRLISTIMPL_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x15613E30)
#define MONO_XML_SMALLXMLPARSER_ATTRLISTIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1560F680)

namespace Mono::Xml
{
	inline static constexpr unsigned int SmallXmlParser_AttrListImpl_TypeDefinitionIndex = 27;

	class SmallXmlParser_AttrListImpl : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* attrValues; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* attrNames; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_ATTRLISTIMPL__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_ATTRLISTIMPL_GET_LENGTH_OFFSET))(this);
		}

		::System::String* GetName(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_ATTRLISTIMPL_GETNAME_OFFSET))(this, a1);
		}

		::System::String* GetValue(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_ATTRLISTIMPL_GETVALUE_OFFSET))(this, a1);
		}

		::System::String* GetValue_1(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_ATTRLISTIMPL_GETVALUE_1_OFFSET))(this, a1);
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

		::System::Void Add(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_XML_SMALLXMLPARSER_ATTRLISTIMPL_ADD_OFFSET))(this, a1, a2);
		}
	};
}
