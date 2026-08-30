#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

#define CLASS_1_5D89E5E082F40A4C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x176D4380)
#define CLASS_1_5D89E5E082F40A4C_GET_ENTITYNAME_OFFSET UNITYSDK_OFFSET(0x176D47C0)
#define CLASS_1_5D89E5E082F40A4C_GET_LAYERNAME_OFFSET UNITYSDK_OFFSET(0x176D47E0)
#define CLASS_1_5D89E5E082F40A4C_GET_PARAMNAME_OFFSET UNITYSDK_OFFSET(0x176D4820)
#define CLASS_1_5D89E5E082F40A4C_GET_STATENAME_OFFSET UNITYSDK_OFFSET(0x176D4800)
#define CLASS_1_5D89E5E082F40A4C_METHOD_1_2613D9528D1056D5_OFFSET UNITYSDK_OFFSET(0x176D43C0)
#define CLASS_1_5D89E5E082F40A4C_METHOD_1_BD5F1AF5661A4E98_OFFSET UNITYSDK_OFFSET(0x176D4600)
#define CLASS_1_5D89E5E082F40A4C_METHOD_1_F6D71BB9DFA2BE91_OFFSET UNITYSDK_OFFSET(0x176D4450)
#define CLASS_1_5D89E5E082F40A4C_SET_ENTITYNAME_OFFSET UNITYSDK_OFFSET(0x176D47D0)
#define CLASS_1_5D89E5E082F40A4C_SET_LAYERNAME_OFFSET UNITYSDK_OFFSET(0x176D47F0)
#define CLASS_1_5D89E5E082F40A4C_SET_PARAMNAME_OFFSET UNITYSDK_OFFSET(0x176D4830)
#define CLASS_1_5D89E5E082F40A4C_SET_STATENAME_OFFSET UNITYSDK_OFFSET(0x176D4810)
#define CLASS_1_5D89E5E082F40A4C__CCTOR_OFFSET UNITYSDK_OFFSET(0x176D4840)
#define CLASS_1_5D89E5E082F40A4C__CTOR_OFFSET UNITYSDK_OFFSET(0x176D4350)

inline static constexpr unsigned int Class_1_5D89E5E082F40A4C_TypeDefinitionIndex = 60314;

class Class_1_5D89E5E082F40A4C : public ::System::Object
{
public:
	static ::System::Single* StaticGet_MKKHOFHDJOP()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5D89E5E082F40A4C_TypeDefinitionIndex)->GetStaticField(0x14EE0);
	}
	::System::String* _LayerName_k__BackingField; // 0x10
	::System::String* _EntityName_k__BackingField; // 0x18
	::System::String* _StateName_k__BackingField; // 0x20
	::UnityEngine::Animator* APPGGMLEPLN; // 0x28
	::System::String* _ParamName_k__BackingField; // 0x30
	::System::Boolean HDKGPLIBNDM; // 0x38
	::System::Single PGMIOKKLHIE; // 0x3C
	::System::Single HBDJCFFDGDD; // 0x40

	::System::Void _ctor(::UnityEngine::Animator* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5D89E5E082F40A4C__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D89E5E082F40A4C__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D89E5E082F40A4C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_2613D9528D1056D5(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5D89E5E082F40A4C_METHOD_1_2613D9528D1056D5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F6D71BB9DFA2BE91(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5D89E5E082F40A4C_METHOD_1_F6D71BB9DFA2BE91_OFFSET))(this, a1);
	}

	::System::Void Method_1_BD5F1AF5661A4E98(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5D89E5E082F40A4C_METHOD_1_BD5F1AF5661A4E98_OFFSET))(this, a1);
	}

	::System::String* get_EntityName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D89E5E082F40A4C_GET_ENTITYNAME_OFFSET))(this);
	}

	::System::Void set_EntityName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5D89E5E082F40A4C_SET_ENTITYNAME_OFFSET))(this, a1);
	}

	::System::String* get_LayerName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D89E5E082F40A4C_GET_LAYERNAME_OFFSET))(this);
	}

	::System::Void set_LayerName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5D89E5E082F40A4C_SET_LAYERNAME_OFFSET))(this, a1);
	}

	::System::String* get_StateName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D89E5E082F40A4C_GET_STATENAME_OFFSET))(this);
	}

	::System::Void set_StateName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5D89E5E082F40A4C_SET_STATENAME_OFFSET))(this, a1);
	}

	::System::String* get_ParamName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D89E5E082F40A4C_GET_PARAMNAME_OFFSET))(this);
	}

	::System::Void set_ParamName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5D89E5E082F40A4C_SET_PARAMNAME_OFFSET))(this, a1);
	}
};
