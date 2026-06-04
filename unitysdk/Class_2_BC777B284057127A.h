#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_BC777B284057127A_GET_COMPOSITEFIELDS_OFFSET UNITYSDK_OFFSET(0xAD66890)
#define CLASS_2_BC777B284057127A_GET_COMPOSITEFIELDTYPES_OFFSET UNITYSDK_OFFSET(0xAD668B0)
#define CLASS_2_BC777B284057127A_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xAD668D0)
#define CLASS_2_BC777B284057127A_GET_EDITORDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xAD668F0)
#define CLASS_2_BC777B284057127A_GET_EXTRAMATCHFIELDTYPE_OFFSET UNITYSDK_OFFSET(0xAD66830)
#define CLASS_2_BC777B284057127A_GET_EXTRAMATCHFIELD_OFFSET UNITYSDK_OFFSET(0xAD66810)
#define CLASS_2_BC777B284057127A_GET_EXTRAMETHODSUFFIX_OFFSET UNITYSDK_OFFSET(0xAD66850)
#define CLASS_2_BC777B284057127A_GET_LOGPREFIX_OFFSET UNITYSDK_OFFSET(0xAD667F0)
#define CLASS_2_BC777B284057127A_GET_MATCHFIELDTYPE_OFFSET UNITYSDK_OFFSET(0xAD667E0)
#define CLASS_2_BC777B284057127A_GET_MATCHFIELD_OFFSET UNITYSDK_OFFSET(0xAD667D0)
#define CLASS_2_BC777B284057127A_GET_SIMPLELOGONLY_OFFSET UNITYSDK_OFFSET(0xAD66870)
#define CLASS_2_BC777B284057127A_GET_TAGNAME_OFFSET UNITYSDK_OFFSET(0xAD667C0)
#define CLASS_2_BC777B284057127A_SET_COMPOSITEFIELDS_OFFSET UNITYSDK_OFFSET(0xAD668A0)
#define CLASS_2_BC777B284057127A_SET_COMPOSITEFIELDTYPES_OFFSET UNITYSDK_OFFSET(0xAD668C0)
#define CLASS_2_BC777B284057127A_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xAD668E0)
#define CLASS_2_BC777B284057127A_SET_EDITORDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xAD66900)
#define CLASS_2_BC777B284057127A_SET_EXTRAMATCHFIELDTYPE_OFFSET UNITYSDK_OFFSET(0xAD66840)
#define CLASS_2_BC777B284057127A_SET_EXTRAMATCHFIELD_OFFSET UNITYSDK_OFFSET(0xAD66820)
#define CLASS_2_BC777B284057127A_SET_EXTRAMETHODSUFFIX_OFFSET UNITYSDK_OFFSET(0xAD66860)
#define CLASS_2_BC777B284057127A_SET_LOGPREFIX_OFFSET UNITYSDK_OFFSET(0xAD66800)
#define CLASS_2_BC777B284057127A_SET_SIMPLELOGONLY_OFFSET UNITYSDK_OFFSET(0xAD66880)
#define CLASS_2_BC777B284057127A__CTOR_OFFSET UNITYSDK_OFFSET(0xAD66910)

inline static constexpr unsigned int Class_2_BC777B284057127A_TypeDefinitionIndex = 68870;

class Class_2_BC777B284057127A : public ::System::Attribute
{
public:
	::Il2CppArray<::System::String*>* _CompositeFields_k__BackingField; // 0x10
	::System::String* _MatchField_k__BackingField; // 0x18
	::System::String* _EditorDisplayName_k__BackingField; // 0x20
	::System::String* _ExtraMatchField_k__BackingField; // 0x28
	::System::String* _ExtraMatchFieldType_k__BackingField; // 0x30
	::System::String* _TagName_k__BackingField; // 0x38
	::System::String* _ExtraMethodSuffix_k__BackingField; // 0x40
	::System::String* _LogPrefix_k__BackingField; // 0x48
	::System::String* _DisplayName_k__BackingField; // 0x50
	::System::String* _MatchFieldType_k__BackingField; // 0x58
	::Il2CppArray<::System::String*>* _CompositeFieldTypes_k__BackingField; // 0x60
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

	::System::Void set_LogPrefix(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_SET_LOGPREFIX_OFFSET))(this, a1);
	}

	::System::String* get_ExtraMatchField()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_GET_EXTRAMATCHFIELD_OFFSET))(this);
	}

	::System::Void set_ExtraMatchField(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_SET_EXTRAMATCHFIELD_OFFSET))(this, a1);
	}

	::System::String* get_ExtraMatchFieldType()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_GET_EXTRAMATCHFIELDTYPE_OFFSET))(this);
	}

	::System::Void set_ExtraMatchFieldType(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_SET_EXTRAMATCHFIELDTYPE_OFFSET))(this, a1);
	}

	::System::String* get_ExtraMethodSuffix()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_GET_EXTRAMETHODSUFFIX_OFFSET))(this);
	}

	::System::Void set_ExtraMethodSuffix(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_SET_EXTRAMETHODSUFFIX_OFFSET))(this, a1);
	}

	::System::Boolean get_SimpleLogOnly()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_GET_SIMPLELOGONLY_OFFSET))(this);
	}

	::System::Void set_SimpleLogOnly(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_SET_SIMPLELOGONLY_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::String*>* get_CompositeFields()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_GET_COMPOSITEFIELDS_OFFSET))(this);
	}

	::System::Void set_CompositeFields(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_SET_COMPOSITEFIELDS_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::String*>* get_CompositeFieldTypes()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_GET_COMPOSITEFIELDTYPES_OFFSET))(this);
	}

	::System::Void set_CompositeFieldTypes(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_SET_COMPOSITEFIELDTYPES_OFFSET))(this, a1);
	}

	::System::String* get_DisplayName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_GET_DISPLAYNAME_OFFSET))(this);
	}

	::System::Void set_DisplayName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_SET_DISPLAYNAME_OFFSET))(this, a1);
	}

	::System::String* get_EditorDisplayName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_GET_EDITORDISPLAYNAME_OFFSET))(this);
	}

	::System::Void set_EditorDisplayName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BC777B284057127A_SET_EDITORDISPLAYNAME_OFFSET))(this, a1);
	}
};
