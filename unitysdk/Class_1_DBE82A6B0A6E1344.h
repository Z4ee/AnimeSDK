#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_359;
class Class_0_16E4307DCC419505_362;
class Class_0_16E4307DCC419505_364;
class Class_1_D4714BA97EC5BBC2_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_DBE82A6B0A6E1344_GET_SKILLROWDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0x10AE4EE0)
#define CLASS_1_DBE82A6B0A6E1344_METHOD_1_3F1A5F0DB7432C33_OFFSET UNITYSDK_OFFSET(0x10AE5290)
#define CLASS_1_DBE82A6B0A6E1344_METHOD_1_87AB3CF2308AA394_OFFSET UNITYSDK_OFFSET(0x10AE5340)
#define CLASS_1_DBE82A6B0A6E1344_METHOD_1_E5D433C7A574E387_OFFSET UNITYSDK_OFFSET(0x10AE5170)
#define CLASS_1_DBE82A6B0A6E1344_SET_SKILLROWDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0x10AE4EF0)
#define CLASS_1_DBE82A6B0A6E1344__CTOR_OFFSET UNITYSDK_OFFSET(0x10AE4F00)

inline static constexpr unsigned int Class_1_DBE82A6B0A6E1344_TypeDefinitionIndex = 41976;

class Class_1_DBE82A6B0A6E1344 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_362* _SkillRowDataProvider_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_364* Field_1_1; // 0x18
	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_359*>* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_D4714BA97EC5BBC2_1*>* Field_1_0; // 0x28

	::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1, ::Class_0_16E4307DCC419505_364* a2, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_359*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::Class_0_16E4307DCC419505_364*, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_359*>*))((::PBYTE)hIl2Cpp + CLASS_1_DBE82A6B0A6E1344__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_362* get_SkillRowDataProvider()
	{
		return ((::Class_0_16E4307DCC419505_362*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBE82A6B0A6E1344_GET_SKILLROWDATAPROVIDER_OFFSET))(this);
	}

	::System::Void set_SkillRowDataProvider(::Class_0_16E4307DCC419505_362* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_362*))((::PBYTE)hIl2Cpp + CLASS_1_DBE82A6B0A6E1344_SET_SKILLROWDATAPROVIDER_OFFSET))(this, value);
	}

	::System::Boolean Method_1_3F1A5F0DB7432C33(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DBE82A6B0A6E1344_METHOD_1_3F1A5F0DB7432C33_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_87AB3CF2308AA394(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DBE82A6B0A6E1344_METHOD_1_87AB3CF2308AA394_OFFSET))(this, a1);
	}

	::System::Void Method_1_E5D433C7A574E387(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DBE82A6B0A6E1344_METHOD_1_E5D433C7A574E387_OFFSET))(this, a1);
	}
};
