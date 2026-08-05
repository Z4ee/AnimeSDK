#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_9F8B7B204F0D8E1D_15;
class Class_3_D42977F88D59ACE7_2;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_82A7FC362C077BBB_METHOD_1_5A8B223EA7063738_1_OFFSET UNITYSDK_OFFSET(0x1875FFC0)
#define CLASS_1_82A7FC362C077BBB_METHOD_1_5A8B223EA7063738_OFFSET UNITYSDK_OFFSET(0x1875FDF0)
#define CLASS_1_82A7FC362C077BBB_METHOD_1_8EA2B34438BFA9B9_OFFSET UNITYSDK_OFFSET(0x187600B0)
#define CLASS_1_82A7FC362C077BBB_METHOD_1_FD509156BCE51F7E_OFFSET UNITYSDK_OFFSET(0x1875FEE0)
#define CLASS_1_82A7FC362C077BBB__CTOR_OFFSET UNITYSDK_OFFSET(0x1875FD60)

inline static constexpr unsigned int Class_1_82A7FC362C077BBB_TypeDefinitionIndex = 47051;

class Class_1_82A7FC362C077BBB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_9F8B7B204F0D8E1D_15*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82A7FC362C077BBB__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_5A8B223EA7063738(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_82A7FC362C077BBB_METHOD_1_5A8B223EA7063738_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_FD509156BCE51F7E(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_82A7FC362C077BBB_METHOD_1_FD509156BCE51F7E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5A8B223EA7063738_1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_82A7FC362C077BBB_METHOD_1_5A8B223EA7063738_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_8EA2B34438BFA9B9(::Class_3_D42977F88D59ACE7_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D42977F88D59ACE7_2*))((::PBYTE)hIl2Cpp + CLASS_1_82A7FC362C077BBB_METHOD_1_8EA2B34438BFA9B9_OFFSET))(this, a1);
	}
};
