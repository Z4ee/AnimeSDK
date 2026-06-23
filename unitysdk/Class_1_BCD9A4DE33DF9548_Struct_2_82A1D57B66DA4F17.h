#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_A85DD0CF7A2118D1.h"
#include "unitysdk/System/ValueType.h"

class Class_1_0653B4DCF7808BED;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BCD9A4DE33DF9548_STRUCT_2_82A1D57B66DA4F17_METHOD_2_C60DFBE55AB81B46_OFFSET UNITYSDK_OFFSET(0x12FB7220)

inline static constexpr unsigned int Class_1_BCD9A4DE33DF9548_Struct_2_82A1D57B66DA4F17_TypeDefinitionIndex = 87443;

struct alignas(8) Class_1_BCD9A4DE33DF9548_Struct_2_82A1D57B66DA4F17
{
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::Struct_2_A85DD0CF7A2118D1>*>* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_0653B4DCF7808BED*>* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_0653B4DCF7808BED*>* Field_2_2; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_3; // 0x28

	static ::Class_1_BCD9A4DE33DF9548_Struct_2_82A1D57B66DA4F17 Method_2_C60DFBE55AB81B46()
	{
		return ((::Class_1_BCD9A4DE33DF9548_Struct_2_82A1D57B66DA4F17(*)())((::PBYTE)hIl2Cpp + CLASS_1_BCD9A4DE33DF9548_STRUCT_2_82A1D57B66DA4F17_METHOD_2_C60DFBE55AB81B46_OFFSET))();
	}
};
