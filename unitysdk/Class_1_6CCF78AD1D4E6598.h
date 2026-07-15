#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_9.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_719;
class Class_1_00C1046829D4D237;
class Class_1_AC56FA381B2C219F;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6CCF78AD1D4E6598_METHOD_1_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x179A06E0)
#define CLASS_1_6CCF78AD1D4E6598_METHOD_1_5A46002292B34489_1_OFFSET UNITYSDK_OFFSET(0x179A1350)
#define CLASS_1_6CCF78AD1D4E6598_METHOD_1_5A46002292B34489_OFFSET UNITYSDK_OFFSET(0x179A0E00)
#define CLASS_1_6CCF78AD1D4E6598_METHOD_1_684F14C3B7AFA31D_OFFSET UNITYSDK_OFFSET(0x179A0190)
#define CLASS_1_6CCF78AD1D4E6598_METHOD_1_691B689398153E3B_OFFSET UNITYSDK_OFFSET(0x179A0C60)
#define CLASS_1_6CCF78AD1D4E6598_METHOD_1_8962B7573AD48AE2_OFFSET UNITYSDK_OFFSET(0x179A0770)
#define CLASS_1_6CCF78AD1D4E6598_METHOD_1_BBCDDD8B5CBD2605_OFFSET UNITYSDK_OFFSET(0x1799F2B0)
#define CLASS_1_6CCF78AD1D4E6598_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x179A0590)
#define CLASS_1_6CCF78AD1D4E6598_METHOD_1_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x1799F430)
#define CLASS_1_6CCF78AD1D4E6598__CTOR_OFFSET UNITYSDK_OFFSET(0x179A18B0)

inline static constexpr unsigned int Class_1_6CCF78AD1D4E6598_TypeDefinitionIndex = 72471;

class Class_1_6CCF78AD1D4E6598 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_00C1046829D4D237*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::Enum_3_71AA90D596A09AC8_9, ::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::Enum_3_71AA90D596A09AC8_9, ::Class_1_AC56FA381B2C219F*>* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CCF78AD1D4E6598__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_719* Method_1_BBCDDD8B5CBD2605(::Enum_3_71AA90D596A09AC8_9 a1)
	{
		return ((::Class_0_16E4307DCC419505_719*(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_9))((::PBYTE)hIl2Cpp + CLASS_1_6CCF78AD1D4E6598_METHOD_1_BBCDDD8B5CBD2605_OFFSET))(this, a1);
	}

	::System::Void Method_1_684F14C3B7AFA31D(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_00C1046829D4D237*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_00C1046829D4D237*>*))((::PBYTE)hIl2Cpp + CLASS_1_6CCF78AD1D4E6598_METHOD_1_684F14C3B7AFA31D_OFFSET))(this, a1);
	}

	::System::Void Method_1_0AB718BEE9EA06D7(::Class_1_00C1046829D4D237* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_00C1046829D4D237*))((::PBYTE)hIl2Cpp + CLASS_1_6CCF78AD1D4E6598_METHOD_1_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::System::Void Method_1_8962B7573AD48AE2(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6CCF78AD1D4E6598_METHOD_1_8962B7573AD48AE2_OFFSET))(this, a1);
	}

	::Class_1_00C1046829D4D237* Method_1_691B689398153E3B(::Enum_3_71AA90D596A09AC8_9 a1)
	{
		return ((::Class_1_00C1046829D4D237*(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_9))((::PBYTE)hIl2Cpp + CLASS_1_6CCF78AD1D4E6598_METHOD_1_691B689398153E3B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* Method_1_5A46002292B34489(::Enum_3_71AA90D596A09AC8_9 a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_9))((::PBYTE)hIl2Cpp + CLASS_1_6CCF78AD1D4E6598_METHOD_1_5A46002292B34489_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* Method_1_5A46002292B34489_1(::Enum_3_71AA90D596A09AC8_9 a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_9))((::PBYTE)hIl2Cpp + CLASS_1_6CCF78AD1D4E6598_METHOD_1_5A46002292B34489_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CCF78AD1D4E6598_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_1_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CCF78AD1D4E6598_METHOD_1_E693A0026D178D8E_OFFSET))(this);
	}
};
