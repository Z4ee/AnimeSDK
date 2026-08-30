#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_7291C38274750BA2_2_GET_TEXT_OFFSET UNITYSDK_OFFSET(0xC35C5D0)
#define CLASS_1_7291C38274750BA2_2_SET_TEXT_OFFSET UNITYSDK_OFFSET(0xC35C5E0)
#define CLASS_1_7291C38274750BA2_2__CTOR_OFFSET UNITYSDK_OFFSET(0xC35C5F0)

inline static constexpr unsigned int Class_1_7291C38274750BA2_2_TypeDefinitionIndex = 50348;

class Class_1_7291C38274750BA2_2 : public ::System::Object
{
public:
	::System::String* _Text_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7291C38274750BA2_2__CTOR_OFFSET))(this);
	}

	::System::String* get_Text()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7291C38274750BA2_2_GET_TEXT_OFFSET))(this);
	}

	::System::Void set_Text(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7291C38274750BA2_2_SET_TEXT_OFFSET))(this, a1);
	}
};
