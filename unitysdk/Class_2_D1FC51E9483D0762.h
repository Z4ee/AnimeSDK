#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_D1FC51E9483D0762_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x154BAC50)
#define CLASS_2_D1FC51E9483D0762__CTOR_1_OFFSET UNITYSDK_OFFSET(0x154BAC40)
#define CLASS_2_D1FC51E9483D0762__CTOR_OFFSET UNITYSDK_OFFSET(0x154BABF0)

inline static constexpr unsigned int Class_2_D1FC51E9483D0762_TypeDefinitionIndex = 6694;

class Class_2_D1FC51E9483D0762 : public ::System::Attribute
{
public:
	::Il2CppArray<::System::String*>* _Arguments_k__BackingField; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D1FC51E9483D0762__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_D1FC51E9483D0762__CTOR_1_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::String*>* get_Arguments()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1FC51E9483D0762_GET_ARGUMENTS_OFFSET))(this);
	}
};
