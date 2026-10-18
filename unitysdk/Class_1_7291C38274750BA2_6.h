#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_7291C38274750BA2_6_GET_DESC_OFFSET UNITYSDK_OFFSET(0xBB1C8E0)
#define CLASS_1_7291C38274750BA2_6_SET_DESC_OFFSET UNITYSDK_OFFSET(0xBB1C8F0)
#define CLASS_1_7291C38274750BA2_6__CTOR_OFFSET UNITYSDK_OFFSET(0xBB1C900)

inline static constexpr unsigned int Class_1_7291C38274750BA2_6_TypeDefinitionIndex = 79664;

class Class_1_7291C38274750BA2_6 : public ::System::Object
{
public:
	::System::String* _Desc_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7291C38274750BA2_6__CTOR_OFFSET))(this);
	}

	::System::String* get_Desc()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7291C38274750BA2_6_GET_DESC_OFFSET))(this);
	}

	::System::Void set_Desc(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7291C38274750BA2_6_SET_DESC_OFFSET))(this, a1);
	}
};
