#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_DA94E5F48F7949CC_GET_MAXSELECTION_OFFSET UNITYSDK_OFFSET(0x1652E720)
#define CLASS_2_DA94E5F48F7949CC_GET_MULTISELECT_OFFSET UNITYSDK_OFFSET(0x1652E700)
#define CLASS_2_DA94E5F48F7949CC_GET_SEARCHDIRECTORIES_OFFSET UNITYSDK_OFFSET(0x1652E6E0)
#define CLASS_2_DA94E5F48F7949CC_GET_SEARCHDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1652E6C0)
#define CLASS_2_DA94E5F48F7949CC_GET_SHOWEMPTYOPTION_OFFSET UNITYSDK_OFFSET(0x1652E740)
#define CLASS_2_DA94E5F48F7949CC_SET_MAXSELECTION_OFFSET UNITYSDK_OFFSET(0x1652E730)
#define CLASS_2_DA94E5F48F7949CC_SET_MULTISELECT_OFFSET UNITYSDK_OFFSET(0x1652E710)
#define CLASS_2_DA94E5F48F7949CC_SET_SEARCHDIRECTORIES_OFFSET UNITYSDK_OFFSET(0x1652E6F0)
#define CLASS_2_DA94E5F48F7949CC_SET_SEARCHDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1652E6D0)
#define CLASS_2_DA94E5F48F7949CC_SET_SHOWEMPTYOPTION_OFFSET UNITYSDK_OFFSET(0x1652E750)
#define CLASS_2_DA94E5F48F7949CC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1652E7E0)
#define CLASS_2_DA94E5F48F7949CC__CTOR_OFFSET UNITYSDK_OFFSET(0x1652E760)

inline static constexpr unsigned int Class_2_DA94E5F48F7949CC_TypeDefinitionIndex = 46326;

class Class_2_DA94E5F48F7949CC : public ::System::Attribute
{
public:
	::System::String* _SearchDirectory_k__BackingField; // 0x10
	::Il2CppArray<::System::String*>* _SearchDirectories_k__BackingField; // 0x18
	::System::Boolean _MultiSelect_k__BackingField; // 0x20
	::System::Boolean _ShowEmptyOption_k__BackingField; // 0x21
	::System::Int32 _MaxSelection_k__BackingField; // 0x24

	::System::Void _ctor(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DA94E5F48F7949CC__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _ctor_1(::Il2CppArray<::System::String*>* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DA94E5F48F7949CC__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* get_SearchDirectory()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA94E5F48F7949CC_GET_SEARCHDIRECTORY_OFFSET))(this);
	}

	::System::Void set_SearchDirectory(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DA94E5F48F7949CC_SET_SEARCHDIRECTORY_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::String*>* get_SearchDirectories()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA94E5F48F7949CC_GET_SEARCHDIRECTORIES_OFFSET))(this);
	}

	::System::Void set_SearchDirectories(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_DA94E5F48F7949CC_SET_SEARCHDIRECTORIES_OFFSET))(this, a1);
	}

	::System::Boolean get_MultiSelect()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA94E5F48F7949CC_GET_MULTISELECT_OFFSET))(this);
	}

	::System::Void set_MultiSelect(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DA94E5F48F7949CC_SET_MULTISELECT_OFFSET))(this, a1);
	}

	::System::Int32 get_MaxSelection()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA94E5F48F7949CC_GET_MAXSELECTION_OFFSET))(this);
	}

	::System::Void set_MaxSelection(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DA94E5F48F7949CC_SET_MAXSELECTION_OFFSET))(this, a1);
	}

	::System::Boolean get_ShowEmptyOption()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA94E5F48F7949CC_GET_SHOWEMPTYOPTION_OFFSET))(this);
	}

	::System::Void set_ShowEmptyOption(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DA94E5F48F7949CC_SET_SHOWEMPTYOPTION_OFFSET))(this, a1);
	}
};
