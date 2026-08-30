#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_FBD19AA833EC650E_GET_MAXSELECTION_OFFSET UNITYSDK_OFFSET(0x157D5DF0)
#define CLASS_2_FBD19AA833EC650E_GET_SEARCHDIRECTORY_OFFSET UNITYSDK_OFFSET(0x157D5DD0)
#define CLASS_2_FBD19AA833EC650E_GET_SHOWEMPTYOPTION_OFFSET UNITYSDK_OFFSET(0x157D5E10)
#define CLASS_2_FBD19AA833EC650E_SET_MAXSELECTION_OFFSET UNITYSDK_OFFSET(0x157D5E00)
#define CLASS_2_FBD19AA833EC650E_SET_SEARCHDIRECTORY_OFFSET UNITYSDK_OFFSET(0x157D5DE0)
#define CLASS_2_FBD19AA833EC650E_SET_SHOWEMPTYOPTION_OFFSET UNITYSDK_OFFSET(0x157D5E20)
#define CLASS_2_FBD19AA833EC650E__CTOR_OFFSET UNITYSDK_OFFSET(0x157D5E30)

inline static constexpr unsigned int Class_2_FBD19AA833EC650E_TypeDefinitionIndex = 48560;

class Class_2_FBD19AA833EC650E : public ::System::Attribute
{
public:
	::System::String* _SearchDirectory_k__BackingField; // 0x10
	::System::Boolean _ShowEmptyOption_k__BackingField; // 0x18
	::System::Int32 _MaxSelection_k__BackingField; // 0x1C

	::System::Void _ctor(::System::String* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FBD19AA833EC650E__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* get_SearchDirectory()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBD19AA833EC650E_GET_SEARCHDIRECTORY_OFFSET))(this);
	}

	::System::Void set_SearchDirectory(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_FBD19AA833EC650E_SET_SEARCHDIRECTORY_OFFSET))(this, a1);
	}

	::System::Int32 get_MaxSelection()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBD19AA833EC650E_GET_MAXSELECTION_OFFSET))(this);
	}

	::System::Void set_MaxSelection(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FBD19AA833EC650E_SET_MAXSELECTION_OFFSET))(this, a1);
	}

	::System::Boolean get_ShowEmptyOption()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBD19AA833EC650E_GET_SHOWEMPTYOPTION_OFFSET))(this);
	}

	::System::Void set_ShowEmptyOption(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FBD19AA833EC650E_SET_SHOWEMPTYOPTION_OFFSET))(this, a1);
	}
};
