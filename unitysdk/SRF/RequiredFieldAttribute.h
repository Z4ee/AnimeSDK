#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SRF_REQUIREDFIELDATTRIBUTE_GET_AUTOCREATE_OFFSET UNITYSDK_OFFSET(0x1E6AD520)
#define SRF_REQUIREDFIELDATTRIBUTE_GET_AUTOSEARCH_OFFSET UNITYSDK_OFFSET(0x1E6AD500)
#define SRF_REQUIREDFIELDATTRIBUTE_GET_EDITORONLY_OFFSET UNITYSDK_OFFSET(0x1E6AD540)
#define SRF_REQUIREDFIELDATTRIBUTE_SET_AUTOCREATE_OFFSET UNITYSDK_OFFSET(0x1E6AD530)
#define SRF_REQUIREDFIELDATTRIBUTE_SET_AUTOSEARCH_OFFSET UNITYSDK_OFFSET(0x1E6AD510)
#define SRF_REQUIREDFIELDATTRIBUTE_SET_EDITORONLY_OFFSET UNITYSDK_OFFSET(0x1E6AD550)
#define SRF_REQUIREDFIELDATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6AD4F0)
#define SRF_REQUIREDFIELDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6AD4E0)

namespace SRF
{
	inline static constexpr unsigned int RequiredFieldAttribute_TypeDefinitionIndex = 34693;

	class RequiredFieldAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean _autoSearch; // 0x10
		::System::Boolean _editorOnly; // 0x11
		::System::Boolean _autoCreate; // 0x12

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRF_REQUIREDFIELDATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_REQUIREDFIELDATTRIBUTE__CTOR_1_OFFSET))(this);
		}

		::System::Boolean get_AutoSearch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_REQUIREDFIELDATTRIBUTE_GET_AUTOSEARCH_OFFSET))(this);
		}

		::System::Void set_AutoSearch(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRF_REQUIREDFIELDATTRIBUTE_SET_AUTOSEARCH_OFFSET))(this, a1);
		}

		::System::Boolean get_AutoCreate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_REQUIREDFIELDATTRIBUTE_GET_AUTOCREATE_OFFSET))(this);
		}

		::System::Void set_AutoCreate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRF_REQUIREDFIELDATTRIBUTE_SET_AUTOCREATE_OFFSET))(this, a1);
		}

		::System::Boolean get_EditorOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_REQUIREDFIELDATTRIBUTE_GET_EDITORONLY_OFFSET))(this);
		}

		::System::Void set_EditorOnly(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRF_REQUIREDFIELDATTRIBUTE_SET_EDITORONLY_OFFSET))(this, a1);
		}
	};
}
