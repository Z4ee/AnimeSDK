#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3189E4EEDC668935.h"

class Class_0_16E4307DCC419505_120;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_4_F2737B159687C735_METHOD_4_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1C54F010)
#define CLASS_4_F2737B159687C735_METHOD_4_25DE23AE3CF58E32_OFFSET UNITYSDK_OFFSET(0x1C54F3C0)
#define CLASS_4_F2737B159687C735_METHOD_4_2A4234AD72DD56B2_OFFSET UNITYSDK_OFFSET(0x1C54F1D0)
#define CLASS_4_F2737B159687C735__CTOR_OFFSET UNITYSDK_OFFSET(0x1C54F070)

inline static constexpr unsigned int Class_4_F2737B159687C735_TypeDefinitionIndex = 41768;

class Class_4_F2737B159687C735 : public ::Class_3_3189E4EEDC668935
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* EMMGFCKKBPK; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* FPHIDLKGMDD; // 0x20

	::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_4_F2737B159687C735__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F2737B159687C735_METHOD_4_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_4_2A4234AD72DD56B2(::Class_0_16E4307DCC419505_120* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_120*))((::PBYTE)hIl2Cpp + CLASS_4_F2737B159687C735_METHOD_4_2A4234AD72DD56B2_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_25DE23AE3CF58E32(::Class_0_16E4307DCC419505_120* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_120*))((::PBYTE)hIl2Cpp + CLASS_4_F2737B159687C735_METHOD_4_25DE23AE3CF58E32_OFFSET))(this, a1);
	}
};
