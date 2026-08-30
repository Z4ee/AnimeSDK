#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IFormatProvider; }
namespace System { class String; }
namespace System { class Type; }

#define CLASS_1_2BC934A445B2CD21_FORMAT_OFFSET UNITYSDK_OFFSET(0x15701030)
#define CLASS_1_2BC934A445B2CD21_GETFORMAT_OFFSET UNITYSDK_OFFSET(0x15700FB0)
#define CLASS_1_2BC934A445B2CD21__CTOR_OFFSET UNITYSDK_OFFSET(0x157014E0)

inline static constexpr unsigned int Class_1_2BC934A445B2CD21_TypeDefinitionIndex = 52016;

class Class_1_2BC934A445B2CD21 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BC934A445B2CD21__CTOR_OFFSET))(this);
	}

	::System::Object* GetFormat(::System::Type* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_2BC934A445B2CD21_GETFORMAT_OFFSET))(this, a1);
	}

	::System::String* Format(::System::String* a1, ::System::Object* a2, ::System::IFormatProvider* a3)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + CLASS_1_2BC934A445B2CD21_FORMAT_OFFSET))(this, a1, a2, a3);
	}
};
