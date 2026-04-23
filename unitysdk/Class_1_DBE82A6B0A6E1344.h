#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_367;
class Class_0_16E4307DCC419505_369;
class Class_0_16E4307DCC419505_371;
class Class_1_D4714BA97EC5BBC2_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_DBE82A6B0A6E1344_GET_SKILLROWDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0x12963760)
#define CLASS_1_DBE82A6B0A6E1344_METHOD_1_3F1A5F0DB7432C33_OFFSET UNITYSDK_OFFSET(0x12963B10)
#define CLASS_1_DBE82A6B0A6E1344_METHOD_1_87AB3CF2308AA394_OFFSET UNITYSDK_OFFSET(0x12963BC0)
#define CLASS_1_DBE82A6B0A6E1344_METHOD_1_E5D433C7A574E387_OFFSET UNITYSDK_OFFSET(0x129639F0)
#define CLASS_1_DBE82A6B0A6E1344_SET_SKILLROWDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0x12963770)
#define CLASS_1_DBE82A6B0A6E1344__CTOR_OFFSET UNITYSDK_OFFSET(0x12963780)

inline static constexpr unsigned int Class_1_DBE82A6B0A6E1344_TypeDefinitionIndex = 47949;

class Class_1_DBE82A6B0A6E1344 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_369*>* Field_1_2; // 0x10
	::Class_0_16E4307DCC419505_371* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_367* _SkillRowDataProvider_k__BackingField; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_D4714BA97EC5BBC2_1*>* Field_1_0; // 0x28

	::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1, ::Class_0_16E4307DCC419505_371* a2, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_369*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::Class_0_16E4307DCC419505_371*, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_369*>*))((::PBYTE)hIl2Cpp + CLASS_1_DBE82A6B0A6E1344__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_367* get_SkillRowDataProvider()
	{
		return ((::Class_0_16E4307DCC419505_367*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBE82A6B0A6E1344_GET_SKILLROWDATAPROVIDER_OFFSET))(this);
	}

	::System::Void set_SkillRowDataProvider(::Class_0_16E4307DCC419505_367* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_367*))((::PBYTE)hIl2Cpp + CLASS_1_DBE82A6B0A6E1344_SET_SKILLROWDATAPROVIDER_OFFSET))(this, value);
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
