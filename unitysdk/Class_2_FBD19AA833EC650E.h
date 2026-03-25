#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_FBD19AA833EC650E_GET_MAXSELECTION_OFFSET UNITYSDK_OFFSET(0x9C4B2E0)
#define CLASS_2_FBD19AA833EC650E_GET_MULTISELECT_OFFSET UNITYSDK_OFFSET(0x9C4B2C0)
#define CLASS_2_FBD19AA833EC650E_GET_SEARCHDIRECTORY_OFFSET UNITYSDK_OFFSET(0x9C4B2A0)
#define CLASS_2_FBD19AA833EC650E_SET_MAXSELECTION_OFFSET UNITYSDK_OFFSET(0x9C4B2F0)
#define CLASS_2_FBD19AA833EC650E_SET_MULTISELECT_OFFSET UNITYSDK_OFFSET(0x9C4B2D0)
#define CLASS_2_FBD19AA833EC650E_SET_SEARCHDIRECTORY_OFFSET UNITYSDK_OFFSET(0x9C4B2B0)
#define CLASS_2_FBD19AA833EC650E__CTOR_OFFSET UNITYSDK_OFFSET(0x9C4B300)

inline static constexpr unsigned int Class_2_FBD19AA833EC650E_TypeDefinitionIndex = 38941;

class Class_2_FBD19AA833EC650E : public ::System::Attribute
{
public:
	::System::String* _SearchDirectory_k__BackingField; // 0x10
	::System::Int32 _MaxSelection_k__BackingField; // 0x18
	::System::Boolean _MultiSelect_k__BackingField; // 0x1C

	::System::Void _ctor(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FBD19AA833EC650E__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* get_SearchDirectory()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBD19AA833EC650E_GET_SEARCHDIRECTORY_OFFSET))(this);
	}

	::System::Void set_SearchDirectory(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_FBD19AA833EC650E_SET_SEARCHDIRECTORY_OFFSET))(this, value);
	}

	::System::Boolean get_MultiSelect()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBD19AA833EC650E_GET_MULTISELECT_OFFSET))(this);
	}

	::System::Void set_MultiSelect(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FBD19AA833EC650E_SET_MULTISELECT_OFFSET))(this, value);
	}

	::System::Int32 get_MaxSelection()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBD19AA833EC650E_GET_MAXSELECTION_OFFSET))(this);
	}

	::System::Void set_MaxSelection(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FBD19AA833EC650E_SET_MAXSELECTION_OFFSET))(this, value);
	}
};
