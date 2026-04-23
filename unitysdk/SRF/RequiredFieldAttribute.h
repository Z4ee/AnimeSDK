#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SRF_REQUIREDFIELDATTRIBUTE_GET_AUTOCREATE_OFFSET UNITYSDK_OFFSET(0x19EA5850)
#define SRF_REQUIREDFIELDATTRIBUTE_GET_AUTOSEARCH_OFFSET UNITYSDK_OFFSET(0x19EA5830)
#define SRF_REQUIREDFIELDATTRIBUTE_GET_EDITORONLY_OFFSET UNITYSDK_OFFSET(0x19EA5870)
#define SRF_REQUIREDFIELDATTRIBUTE_SET_AUTOCREATE_OFFSET UNITYSDK_OFFSET(0x19EA5860)
#define SRF_REQUIREDFIELDATTRIBUTE_SET_AUTOSEARCH_OFFSET UNITYSDK_OFFSET(0x19EA5840)
#define SRF_REQUIREDFIELDATTRIBUTE_SET_EDITORONLY_OFFSET UNITYSDK_OFFSET(0x19EA5880)
#define SRF_REQUIREDFIELDATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19EA5820)
#define SRF_REQUIREDFIELDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19EA5810)

namespace SRF
{
	inline static constexpr unsigned int RequiredFieldAttribute_TypeDefinitionIndex = 33273;

	class RequiredFieldAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean _autoSearch; // 0x10
		::System::Boolean _autoCreate; // 0x11
		::System::Boolean _editorOnly; // 0x12

		::System::Void _ctor(::System::Boolean autoSearch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRF_REQUIREDFIELDATTRIBUTE__CTOR_OFFSET))(this, autoSearch);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_REQUIREDFIELDATTRIBUTE__CTOR_1_OFFSET))(this);
		}

		::System::Boolean get_AutoSearch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_REQUIREDFIELDATTRIBUTE_GET_AUTOSEARCH_OFFSET))(this);
		}

		::System::Void set_AutoSearch(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRF_REQUIREDFIELDATTRIBUTE_SET_AUTOSEARCH_OFFSET))(this, value);
		}

		::System::Boolean get_AutoCreate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_REQUIREDFIELDATTRIBUTE_GET_AUTOCREATE_OFFSET))(this);
		}

		::System::Void set_AutoCreate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRF_REQUIREDFIELDATTRIBUTE_SET_AUTOCREATE_OFFSET))(this, value);
		}

		::System::Boolean get_EditorOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_REQUIREDFIELDATTRIBUTE_GET_EDITORONLY_OFFSET))(this);
		}

		::System::Void set_EditorOnly(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRF_REQUIREDFIELDATTRIBUTE_SET_EDITORONLY_OFFSET))(this, value);
		}
	};
}
