#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LightCodeGen/VarKind.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_4C50DDBE3B704E4B_GET_CONTAINERNAME_OFFSET UNITYSDK_OFFSET(0x10907340)
#define CLASS_2_4C50DDBE3B704E4B_GET_METHODNAME_OFFSET UNITYSDK_OFFSET(0x10907350)
#define CLASS_2_4C50DDBE3B704E4B_GET_PARAMKINDS_OFFSET UNITYSDK_OFFSET(0x10907360)
#define CLASS_2_4C50DDBE3B704E4B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x109074B0)
#define CLASS_2_4C50DDBE3B704E4B__CTOR_OFFSET UNITYSDK_OFFSET(0x10907370)

inline static constexpr unsigned int Class_2_4C50DDBE3B704E4B_TypeDefinitionIndex = 39727;

class Class_2_4C50DDBE3B704E4B : public ::System::Attribute
{
public:
	::System::String* _ContainerName_k__BackingField; // 0x10
	::Il2CppArray<::LightCodeGen::VarKind>* _ParamKinds_k__BackingField; // 0x18
	::System::String* _MethodName_k__BackingField; // 0x20

	::System::Void _ctor(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4C50DDBE3B704E4B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::System::String* a1, ::System::String* a2, ::Il2CppArray<::LightCodeGen::VarKind>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::LightCodeGen::VarKind>*))((::PBYTE)hIl2Cpp + CLASS_2_4C50DDBE3B704E4B__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::String* get_ContainerName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C50DDBE3B704E4B_GET_CONTAINERNAME_OFFSET))(this);
	}

	::System::String* get_MethodName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C50DDBE3B704E4B_GET_METHODNAME_OFFSET))(this);
	}

	::Il2CppArray<::LightCodeGen::VarKind>* get_ParamKinds()
	{
		return ((::Il2CppArray<::LightCodeGen::VarKind>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C50DDBE3B704E4B_GET_PARAMKINDS_OFFSET))(this);
	}
};
