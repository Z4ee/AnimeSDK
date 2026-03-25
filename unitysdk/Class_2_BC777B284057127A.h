#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_BC777B284057127A_GET_COMPOSITEFIELDS_OFFSET UNITYSDK_OFFSET(0x8EB1D80)
#define CLASS_2_BC777B284057127A_GET_COMPOSITEFIELDTYPES_OFFSET UNITYSDK_OFFSET(0x8EB1DA0)
#define CLASS_2_BC777B284057127A_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x8EB1DC0)
#define CLASS_2_BC777B284057127A_GET_EDITORDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x8EB1DE0)
#define CLASS_2_BC777B284057127A_GET_EXTRAMATCHFIELDTYPE_OFFSET UNITYSDK_OFFSET(0x8EB1D20)
#define CLASS_2_BC777B284057127A_GET_EXTRAMATCHFIELD_OFFSET UNITYSDK_OFFSET(0x8EB1D00)
#define CLASS_2_BC777B284057127A_GET_EXTRAMETHODSUFFIX_OFFSET UNITYSDK_OFFSET(0x8EB1D40)
#define CLASS_2_BC777B284057127A_GET_LOGPREFIX_OFFSET UNITYSDK_OFFSET(0x8EB1CE0)
#define CLASS_2_BC777B284057127A_GET_MATCHFIELDTYPE_OFFSET UNITYSDK_OFFSET(0x8EB1CD0)
#define CLASS_2_BC777B284057127A_GET_MATCHFIELD_OFFSET UNITYSDK_OFFSET(0x8EB1CC0)
#define CLASS_2_BC777B284057127A_GET_SIMPLELOGONLY_OFFSET UNITYSDK_OFFSET(0x8EB1D60)
#define CLASS_2_BC777B284057127A_GET_TAGNAME_OFFSET UNITYSDK_OFFSET(0x8EB1CB0)
#define CLASS_2_BC777B284057127A_SET_COMPOSITEFIELDS_OFFSET UNITYSDK_OFFSET(0x8EB1D90)
#define CLASS_2_BC777B284057127A_SET_COMPOSITEFIELDTYPES_OFFSET UNITYSDK_OFFSET(0x8EB1DB0)
#define CLASS_2_BC777B284057127A_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x8EB1DD0)
#define CLASS_2_BC777B284057127A_SET_EDITORDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x8EB1DF0)
#define CLASS_2_BC777B284057127A_SET_EXTRAMATCHFIELDTYPE_OFFSET UNITYSDK_OFFSET(0x8EB1D30)
#define CLASS_2_BC777B284057127A_SET_EXTRAMATCHFIELD_OFFSET UNITYSDK_OFFSET(0x8EB1D10)
#define CLASS_2_BC777B284057127A_SET_EXTRAMETHODSUFFIX_OFFSET UNITYSDK_OFFSET(0x8EB1D50)
#define CLASS_2_BC777B284057127A_SET_LOGPREFIX_OFFSET UNITYSDK_OFFSET(0x8EB1CF0)
#define CLASS_2_BC777B284057127A_SET_SIMPLELOGONLY_OFFSET UNITYSDK_OFFSET(0x8EB1D70)
#define CLASS_2_BC777B284057127A__CTOR_OFFSET UNITYSDK_OFFSET(0x8EB1E00)

inline static constexpr unsigned int Class_2_BC777B284057127A_TypeDefinitionIndex = 60482;

class Class_2_BC777B284057127A : public ::System::Attribute
{
public:
	::Il2CppArray<::System::String*>* _CompositeFieldTypes_k__BackingField; // 0x10
	::System::String* _LogPrefix_k__BackingField; // 0x18
	::System::String* _TagName_k__BackingField; // 0x20
	::System::String* _MatchField_k__BackingField; // 0x28
	::System::String* _EditorDisplayName_k__BackingField; // 0x30
	::Il2CppArray<::System::String*>* _CompositeFields_k__BackingField; // 0x38
	::System::String* _ExtraMatchField_k__BackingField; // 0x40
	::System::String* _MatchFieldType_k__BackingField; // 0x48
	::System::String* _ExtraMethodSuffix_k__BackingField; // 0x50
	::System::String* _ExtraMatchFieldType_k__BackingField; // 0x58
	::System::String* _DisplayName_k__BackingField; // 0x60
	::System::Boolean _SimpleLogOnly_k__BackingField; // 0x68

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* get_TagName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_GET_TAGNAME_OFFSET))(this);
	}

	::System::String* get_MatchField()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_GET_MATCHFIELD_OFFSET))(this);
	}

	::System::String* get_MatchFieldType()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_GET_MATCHFIELDTYPE_OFFSET))(this);
	}

	::System::String* get_LogPrefix()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_GET_LOGPREFIX_OFFSET))(this);
	}

	::System::Void set_LogPrefix(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_SET_LOGPREFIX_OFFSET))(this, value);
	}

	::System::String* get_ExtraMatchField()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_GET_EXTRAMATCHFIELD_OFFSET))(this);
	}

	::System::Void set_ExtraMatchField(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_SET_EXTRAMATCHFIELD_OFFSET))(this, value);
	}

	::System::String* get_ExtraMatchFieldType()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_GET_EXTRAMATCHFIELDTYPE_OFFSET))(this);
	}

	::System::Void set_ExtraMatchFieldType(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_SET_EXTRAMATCHFIELDTYPE_OFFSET))(this, value);
	}

	::System::String* get_ExtraMethodSuffix()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_GET_EXTRAMETHODSUFFIX_OFFSET))(this);
	}

	::System::Void set_ExtraMethodSuffix(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_SET_EXTRAMETHODSUFFIX_OFFSET))(this, value);
	}

	::System::Boolean get_SimpleLogOnly()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_GET_SIMPLELOGONLY_OFFSET))(this);
	}

	::System::Void set_SimpleLogOnly(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_SET_SIMPLELOGONLY_OFFSET))(this, value);
	}

	::Il2CppArray<::System::String*>* get_CompositeFields()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_GET_COMPOSITEFIELDS_OFFSET))(this);
	}

	::System::Void set_CompositeFields(::Il2CppArray<::System::String*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_SET_COMPOSITEFIELDS_OFFSET))(this, value);
	}

	::Il2CppArray<::System::String*>* get_CompositeFieldTypes()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_GET_COMPOSITEFIELDTYPES_OFFSET))(this);
	}

	::System::Void set_CompositeFieldTypes(::Il2CppArray<::System::String*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_SET_COMPOSITEFIELDTYPES_OFFSET))(this, value);
	}

	::System::String* get_DisplayName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_GET_DISPLAYNAME_OFFSET))(this);
	}

	::System::Void set_DisplayName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_SET_DISPLAYNAME_OFFSET))(this, value);
	}

	::System::String* get_EditorDisplayName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_GET_EDITORDISPLAYNAME_OFFSET))(this);
	}

	::System::Void set_EditorDisplayName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_SET_EDITORDISPLAYNAME_OFFSET))(this, value);
	}
};
