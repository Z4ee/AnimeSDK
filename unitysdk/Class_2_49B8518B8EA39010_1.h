#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_49B8518B8EA39010_1_GET_ID_OFFSET UNITYSDK_OFFSET(0x188C13E0)
#define CLASS_2_49B8518B8EA39010_1__CTOR_OFFSET UNITYSDK_OFFSET(0x188C1360)

inline static constexpr unsigned int Class_2_49B8518B8EA39010_1_TypeDefinitionIndex = 79181;

class Class_2_49B8518B8EA39010_1 : public ::System::Attribute
{
public:
	::System::String* _Id_k__BackingField; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_49B8518B8EA39010_1__CTOR_OFFSET))(this, a1);
	}

	::System::String* get_Id()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49B8518B8EA39010_1_GET_ID_OFFSET))(this);
	}
};
