#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_174BD6D3EB04B2EE.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_4_425BBC3CBFD638A0;
class Class_4_5B5E82918BC44D6E;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_620AC223FD763757_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x14443FF0)
#define CLASS_3_620AC223FD763757_METHOD_3_556DB850615E0921_OFFSET UNITYSDK_OFFSET(0x14444130)
#define CLASS_3_620AC223FD763757_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14444990)
#define CLASS_3_620AC223FD763757__CTOR_OFFSET UNITYSDK_OFFSET(0x144448E0)

inline static constexpr unsigned int Class_3_620AC223FD763757_TypeDefinitionIndex = 76706;

class Class_3_620AC223FD763757 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_5B5E82918BC44D6E* Field_3_2; // 0x18
	::Class_4_425BBC3CBFD638A0* Field_3_0; // 0x20
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_620AC223FD763757__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_620AC223FD763757_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_556DB850615E0921(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_620AC223FD763757_METHOD_3_556DB850615E0921_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_620AC223FD763757_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
