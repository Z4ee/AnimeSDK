#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System { class Type; }

#define CLASS_2_74095B15FD40E7CF_GET_ALIAS_OFFSET UNITYSDK_OFFSET(0xE474D50)
#define CLASS_2_74095B15FD40E7CF_GET_CONTAINERNAME_OFFSET UNITYSDK_OFFSET(0xE474D60)
#define CLASS_2_74095B15FD40E7CF_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0xE474D30)
#define CLASS_2_74095B15FD40E7CF_GET_MEMBERNAMES_OFFSET UNITYSDK_OFFSET(0xE474D70)
#define CLASS_2_74095B15FD40E7CF_GET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0xE474D40)
#define CLASS_2_74095B15FD40E7CF_GET_PATH_OFFSET UNITYSDK_OFFSET(0xE474D20)
#define CLASS_2_74095B15FD40E7CF__CTOR_1_OFFSET UNITYSDK_OFFSET(0xE474E30)
#define CLASS_2_74095B15FD40E7CF__CTOR_2_OFFSET UNITYSDK_OFFSET(0xE474F30)
#define CLASS_2_74095B15FD40E7CF__CTOR_3_OFFSET UNITYSDK_OFFSET(0xE4750A0)
#define CLASS_2_74095B15FD40E7CF__CTOR_4_OFFSET UNITYSDK_OFFSET(0xE475200)
#define CLASS_2_74095B15FD40E7CF__CTOR_OFFSET UNITYSDK_OFFSET(0xE474D80)

inline static constexpr unsigned int Class_2_74095B15FD40E7CF_TypeDefinitionIndex = 46215;

class Class_2_74095B15FD40E7CF : public ::System::Attribute
{
public:
	::System::String* _Alias_k__BackingField; // 0x10
	::System::String* _ContainerName_k__BackingField; // 0x18
	::System::Type* _DeclaringType_k__BackingField; // 0x20
	::Il2CppArray<::System::String*>* _MemberNames_k__BackingField; // 0x28
	::System::String* _MemberName_k__BackingField; // 0x30
	::System::String* _Path_k__BackingField; // 0x38

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_74095B15FD40E7CF__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::Type* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_74095B15FD40E7CF__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_2(::System::String* a1, ::System::Type* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_74095B15FD40E7CF__CTOR_2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_3(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_74095B15FD40E7CF__CTOR_3_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_4(::System::String* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_74095B15FD40E7CF__CTOR_4_OFFSET))(this, a1, a2);
	}

	::System::String* get_Path()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74095B15FD40E7CF_GET_PATH_OFFSET))(this);
	}

	::System::Type* get_DeclaringType()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74095B15FD40E7CF_GET_DECLARINGTYPE_OFFSET))(this);
	}

	::System::String* get_MemberName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74095B15FD40E7CF_GET_MEMBERNAME_OFFSET))(this);
	}

	::System::String* get_Alias()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74095B15FD40E7CF_GET_ALIAS_OFFSET))(this);
	}

	::System::String* get_ContainerName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74095B15FD40E7CF_GET_CONTAINERNAME_OFFSET))(this);
	}

	::Il2CppArray<::System::String*>* get_MemberNames()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74095B15FD40E7CF_GET_MEMBERNAMES_OFFSET))(this);
	}
};
