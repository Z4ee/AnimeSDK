#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_7291C38274750BA2_GET_REASON_OFFSET UNITYSDK_OFFSET(0x1EF407C0)
#define CLASS_1_7291C38274750BA2_SET_REASON_OFFSET UNITYSDK_OFFSET(0x1EF407D0)
#define CLASS_1_7291C38274750BA2__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF407B0)

inline static constexpr unsigned int Class_1_7291C38274750BA2_TypeDefinitionIndex = 42354;

class Class_1_7291C38274750BA2 : public ::System::Object
{
public:
	::System::String* _Reason_k__BackingField; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7291C38274750BA2__CTOR_OFFSET))(this, a1);
	}

	::System::String* get_Reason()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7291C38274750BA2_GET_REASON_OFFSET))(this);
	}

	::System::Void set_Reason(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7291C38274750BA2_SET_REASON_OFFSET))(this, a1);
	}
};
