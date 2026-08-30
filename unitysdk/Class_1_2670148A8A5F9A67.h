#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7AE05552B00B3595;
class Class_1_804D400E288715A8;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2670148A8A5F9A67_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD619C0)
#define CLASS_1_2670148A8A5F9A67_METHOD_1_4AF35CCF7882E598_OFFSET UNITYSDK_OFFSET(0xBD61AB0)
#define CLASS_1_2670148A8A5F9A67_METHOD_1_72A430803E2934EC_OFFSET UNITYSDK_OFFSET(0xBD61C30)
#define CLASS_1_2670148A8A5F9A67_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0xBD618A0)
#define CLASS_1_2670148A8A5F9A67__CTOR_OFFSET UNITYSDK_OFFSET(0xBD61EC0)

inline static constexpr unsigned int Class_1_2670148A8A5F9A67_TypeDefinitionIndex = 61525;

class Class_1_2670148A8A5F9A67 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_7AE05552B00B3595*>*>* NKAJKEKDCDF; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_804D400E288715A8*>* APGIEEIDBGM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2670148A8A5F9A67__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2670148A8A5F9A67_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2670148A8A5F9A67_DISPOSE_OFFSET))(this);
	}

	::Class_1_804D400E288715A8* Method_1_4AF35CCF7882E598(::System::UInt32 a1)
	{
		return ((::Class_1_804D400E288715A8*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2670148A8A5F9A67_METHOD_1_4AF35CCF7882E598_OFFSET))(this, a1);
	}

	::Class_1_7AE05552B00B3595* Method_1_72A430803E2934EC(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Class_1_7AE05552B00B3595*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2670148A8A5F9A67_METHOD_1_72A430803E2934EC_OFFSET))(this, a1, a2);
	}
};
