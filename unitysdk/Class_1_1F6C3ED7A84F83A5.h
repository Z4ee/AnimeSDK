#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_359;
class Class_1_D4714BA97EC5BBC2;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_1F6C3ED7A84F83A5_METHOD_1_87AB3CF2308AA394_OFFSET UNITYSDK_OFFSET(0x1139C3F0)
#define CLASS_1_1F6C3ED7A84F83A5__CTOR_OFFSET UNITYSDK_OFFSET(0x1139C360)

inline static constexpr unsigned int Class_1_1F6C3ED7A84F83A5_TypeDefinitionIndex = 50971;

class Class_1_1F6C3ED7A84F83A5 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_359*>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_D4714BA97EC5BBC2*>* Field_1_0; // 0x18

	::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_D4714BA97EC5BBC2*>* a1, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_359*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_D4714BA97EC5BBC2*>*, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_359*>*))((::PBYTE)hIl2Cpp + CLASS_1_1F6C3ED7A84F83A5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_87AB3CF2308AA394(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1F6C3ED7A84F83A5_METHOD_1_87AB3CF2308AA394_OFFSET))(this, a1);
	}
};
