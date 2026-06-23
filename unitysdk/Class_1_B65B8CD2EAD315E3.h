#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_B65B8CD2EAD315E3_METHOD_1_4CE574D71DF1ED05_OFFSET UNITYSDK_OFFSET(0x14485CF0)
#define CLASS_1_B65B8CD2EAD315E3_METHOD_1_8033DA73663F93AF_OFFSET UNITYSDK_OFFSET(0x14485DD0)
#define CLASS_1_B65B8CD2EAD315E3__CTOR_OFFSET UNITYSDK_OFFSET(0x14485CB0)

inline static constexpr unsigned int Class_1_B65B8CD2EAD315E3_TypeDefinitionIndex = 64856;

class Class_1_B65B8CD2EAD315E3 : public ::System::Object
{
public:
	::Il2CppArray<::System::Byte>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B65B8CD2EAD315E3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4CE574D71DF1ED05(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_B65B8CD2EAD315E3_METHOD_1_4CE574D71DF1ED05_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_8033DA73663F93AF()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B65B8CD2EAD315E3_METHOD_1_8033DA73663F93AF_OFFSET))(this);
	}
};
