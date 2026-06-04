#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_FFFCCADC2307093B_METHOD_1_8336E89DF737C001_OFFSET UNITYSDK_OFFSET(0x141473B0)
#define CLASS_1_FFFCCADC2307093B_METHOD_1_8575CD1A4A61635C_OFFSET UNITYSDK_OFFSET(0x14147140)
#define CLASS_1_FFFCCADC2307093B__CTOR_OFFSET UNITYSDK_OFFSET(0x14147880)

inline static constexpr unsigned int Class_1_FFFCCADC2307093B_TypeDefinitionIndex = 57242;

class Class_1_FFFCCADC2307093B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFFCCADC2307093B__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* Method_1_8575CD1A4A61635C(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FFFCCADC2307093B_METHOD_1_8575CD1A4A61635C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8336E89DF737C001()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFFCCADC2307093B_METHOD_1_8336E89DF737C001_OFFSET))(this);
	}
};
