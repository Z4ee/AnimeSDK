#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_7EA0CD470919626B_GET_MAXSELECTION_OFFSET UNITYSDK_OFFSET(0xD9CD780)
#define CLASS_2_7EA0CD470919626B_GET_MULTISELECT_OFFSET UNITYSDK_OFFSET(0xD9CD760)
#define CLASS_2_7EA0CD470919626B_GET_SEARCHDIRECTORIES_OFFSET UNITYSDK_OFFSET(0xD9CD740)
#define CLASS_2_7EA0CD470919626B_GET_SEARCHDIRECTORY_OFFSET UNITYSDK_OFFSET(0xD9CD720)
#define CLASS_2_7EA0CD470919626B_SET_MAXSELECTION_OFFSET UNITYSDK_OFFSET(0xD9CD790)
#define CLASS_2_7EA0CD470919626B_SET_MULTISELECT_OFFSET UNITYSDK_OFFSET(0xD9CD770)
#define CLASS_2_7EA0CD470919626B_SET_SEARCHDIRECTORIES_OFFSET UNITYSDK_OFFSET(0xD9CD750)
#define CLASS_2_7EA0CD470919626B_SET_SEARCHDIRECTORY_OFFSET UNITYSDK_OFFSET(0xD9CD730)
#define CLASS_2_7EA0CD470919626B__CTOR_1_OFFSET UNITYSDK_OFFSET(0xD9CD820)
#define CLASS_2_7EA0CD470919626B__CTOR_OFFSET UNITYSDK_OFFSET(0xD9CD7A0)

inline static constexpr unsigned int Class_2_7EA0CD470919626B_TypeDefinitionIndex = 44844;

class Class_2_7EA0CD470919626B : public ::System::Attribute
{
public:
	::System::String* _SearchDirectory_k__BackingField; // 0x10
	::Il2CppArray<::System::String*>* _SearchDirectories_k__BackingField; // 0x18
	::System::Int32 _MaxSelection_k__BackingField; // 0x20
	::System::Boolean _MultiSelect_k__BackingField; // 0x24

	::System::Void _ctor(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7EA0CD470919626B__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::Il2CppArray<::System::String*>* a1, ::System::Boolean a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7EA0CD470919626B__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::String* get_SearchDirectory()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EA0CD470919626B_GET_SEARCHDIRECTORY_OFFSET))(this);
	}

	::System::Void set_SearchDirectory(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7EA0CD470919626B_SET_SEARCHDIRECTORY_OFFSET))(this, value);
	}

	::Il2CppArray<::System::String*>* get_SearchDirectories()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EA0CD470919626B_GET_SEARCHDIRECTORIES_OFFSET))(this);
	}

	::System::Void set_SearchDirectories(::Il2CppArray<::System::String*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_7EA0CD470919626B_SET_SEARCHDIRECTORIES_OFFSET))(this, value);
	}

	::System::Boolean get_MultiSelect()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EA0CD470919626B_GET_MULTISELECT_OFFSET))(this);
	}

	::System::Void set_MultiSelect(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7EA0CD470919626B_SET_MULTISELECT_OFFSET))(this, value);
	}

	::System::Int32 get_MaxSelection()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EA0CD470919626B_GET_MAXSELECTION_OFFSET))(this);
	}

	::System::Void set_MaxSelection(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7EA0CD470919626B_SET_MAXSELECTION_OFFSET))(this, value);
	}
};
