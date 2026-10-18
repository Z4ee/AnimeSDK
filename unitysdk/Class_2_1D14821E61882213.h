#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1D14821E61882213_METHOD_2_0BF157DE04D0F6EB_OFFSET UNITYSDK_OFFSET(0x1C8C4270)
#define CLASS_2_1D14821E61882213_METHOD_2_8DF47EF45ABD2A6C_OFFSET UNITYSDK_OFFSET(0x1C8C3790)
#define CLASS_2_1D14821E61882213_METHOD_2_FD6AF0F9AA9298B1_OFFSET UNITYSDK_OFFSET(0x1C8C3B00)
#define CLASS_2_1D14821E61882213__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8C3720)

inline static constexpr unsigned int Class_2_1D14821E61882213_TypeDefinitionIndex = 42199;

class Class_2_1D14821E61882213 : public ::Class_1_5BE136E515AF9A61
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* GBOFILONLMO; // 0x18
	::Il2CppArray<::System::UInt32>* MGJDAFEGBIL; // 0x20
	::System::Int32 BJPJNEHNIML; // 0x28
	::System::Single CPMLBDPGJAK; // 0x2C
	::System::Int32 INAKMLFKHAM; // 0x30
	::System::Single PGMIOKKLHIE; // 0x34

	::System::Void _ctor(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_1D14821E61882213__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_8DF47EF45ABD2A6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D14821E61882213_METHOD_2_8DF47EF45ABD2A6C_OFFSET))(this);
	}

	::System::Void Method_2_FD6AF0F9AA9298B1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1D14821E61882213_METHOD_2_FD6AF0F9AA9298B1_OFFSET))(this, a1);
	}

	::System::Void Method_2_0BF157DE04D0F6EB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_1D14821E61882213_METHOD_2_0BF157DE04D0F6EB_OFFSET))(this, a1);
	}
};
