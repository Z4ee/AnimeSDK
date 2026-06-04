#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_7291C38274750BA2_GET_REASON_OFFSET UNITYSDK_OFFSET(0x1AC1B080)
#define CLASS_1_7291C38274750BA2_SET_REASON_OFFSET UNITYSDK_OFFSET(0x1AC1B090)
#define CLASS_1_7291C38274750BA2__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC1B070)

inline static constexpr unsigned int Class_1_7291C38274750BA2_TypeDefinitionIndex = 40579;

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
