#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_911845689DCC0F0F_METHOD_1_6A597D4AC47F3832_OFFSET UNITYSDK_OFFSET(0x186C19B0)
#define CLASS_1_911845689DCC0F0F_METHOD_1_8336E89DF737C001_OFFSET UNITYSDK_OFFSET(0x186C1D00)
#define CLASS_1_911845689DCC0F0F__CTOR_OFFSET UNITYSDK_OFFSET(0x186C21D0)

inline static constexpr unsigned int Class_1_911845689DCC0F0F_TypeDefinitionIndex = 61330;

class Class_1_911845689DCC0F0F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_911845689DCC0F0F__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* Method_1_6A597D4AC47F3832(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_911845689DCC0F0F_METHOD_1_6A597D4AC47F3832_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8336E89DF737C001()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_911845689DCC0F0F_METHOD_1_8336E89DF737C001_OFFSET))(this);
	}
};
