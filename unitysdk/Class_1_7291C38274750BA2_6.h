#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_7291C38274750BA2_6_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1727E330)
#define CLASS_1_7291C38274750BA2_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1727E340)

inline static constexpr unsigned int Class_1_7291C38274750BA2_6_TypeDefinitionIndex = 78867;

class Class_1_7291C38274750BA2_6 : public ::System::Object
{
public:
	::System::String* _Name_k__BackingField; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7291C38274750BA2_6__CTOR_OFFSET))(this, a1);
	}

	::System::String* get_Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7291C38274750BA2_6_GET_NAME_OFFSET))(this);
	}
};
