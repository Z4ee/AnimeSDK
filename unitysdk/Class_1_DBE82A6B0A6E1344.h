#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_444;
class Class_0_16E4307DCC419505_446;
class Class_0_16E4307DCC419505_448;
class Class_1_C85C4DAB350DD5FC_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_DBE82A6B0A6E1344_GET_SKILLROWDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0x1819B200)
#define CLASS_1_DBE82A6B0A6E1344_METHOD_1_06934619F4D05213_OFFSET UNITYSDK_OFFSET(0x1819B700)
#define CLASS_1_DBE82A6B0A6E1344_METHOD_1_389486378BEF2498_OFFSET UNITYSDK_OFFSET(0x1819B670)
#define CLASS_1_DBE82A6B0A6E1344_METHOD_1_4CA8B5F8462FA46F_OFFSET UNITYSDK_OFFSET(0x1819BD50)
#define CLASS_1_DBE82A6B0A6E1344_METHOD_1_E5D433C7A574E387_OFFSET UNITYSDK_OFFSET(0x1819B550)
#define CLASS_1_DBE82A6B0A6E1344_SET_SKILLROWDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0x1819B210)
#define CLASS_1_DBE82A6B0A6E1344__CTOR_OFFSET UNITYSDK_OFFSET(0x1819B220)

inline static constexpr unsigned int Class_1_DBE82A6B0A6E1344_TypeDefinitionIndex = 52233;

class Class_1_DBE82A6B0A6E1344 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_C85C4DAB350DD5FC_1*>* IEHKMMAEDMH; // 0x10
	::Class_0_16E4307DCC419505_444* _SkillRowDataProvider_k__BackingField; // 0x18
	::Class_0_16E4307DCC419505_448* MPKAFBADCAI; // 0x20
	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_446*>* KBEMHKFOKOF; // 0x28

	::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1, ::Class_0_16E4307DCC419505_448* a2, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_446*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::Class_0_16E4307DCC419505_448*, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_446*>*))((::PBYTE)hIl2Cpp + CLASS_1_DBE82A6B0A6E1344__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_444* get_SkillRowDataProvider()
	{
		return ((::Class_0_16E4307DCC419505_444*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBE82A6B0A6E1344_GET_SKILLROWDATAPROVIDER_OFFSET))(this);
	}

	::System::Void set_SkillRowDataProvider(::Class_0_16E4307DCC419505_444* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_444*))((::PBYTE)hIl2Cpp + CLASS_1_DBE82A6B0A6E1344_SET_SKILLROWDATAPROVIDER_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_389486378BEF2498(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DBE82A6B0A6E1344_METHOD_1_389486378BEF2498_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_06934619F4D05213(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DBE82A6B0A6E1344_METHOD_1_06934619F4D05213_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Method_1_4CA8B5F8462FA46F()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBE82A6B0A6E1344_METHOD_1_4CA8B5F8462FA46F_OFFSET))(this);
	}

	::System::Void Method_1_E5D433C7A574E387(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DBE82A6B0A6E1344_METHOD_1_E5D433C7A574E387_OFFSET))(this, a1);
	}
};
