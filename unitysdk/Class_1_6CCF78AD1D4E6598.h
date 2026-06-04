#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_9.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_684;
class Class_1_4AF393E7839B85AC;
class Class_1_AC56FA381B2C219F;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6CCF78AD1D4E6598_METHOD_1_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x13B22CB0)
#define CLASS_1_6CCF78AD1D4E6598_METHOD_1_0BF63477FF35C0E1_OFFSET UNITYSDK_OFFSET(0x13B22D40)
#define CLASS_1_6CCF78AD1D4E6598_METHOD_1_40E03D354D1ACC85_OFFSET UNITYSDK_OFFSET(0x13B21C40)
#define CLASS_1_6CCF78AD1D4E6598_METHOD_1_5A46002292B34489_1_OFFSET UNITYSDK_OFFSET(0x13B23780)
#define CLASS_1_6CCF78AD1D4E6598_METHOD_1_5A46002292B34489_OFFSET UNITYSDK_OFFSET(0x13B23230)
#define CLASS_1_6CCF78AD1D4E6598_METHOD_1_691B689398153E3B_OFFSET UNITYSDK_OFFSET(0x13B23090)
#define CLASS_1_6CCF78AD1D4E6598_METHOD_1_BBCDDD8B5CBD2605_OFFSET UNITYSDK_OFFSET(0x13B21AC0)
#define CLASS_1_6CCF78AD1D4E6598_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x13B22B60)
#define CLASS_1_6CCF78AD1D4E6598_METHOD_1_CAC610F2B9224832_OFFSET UNITYSDK_OFFSET(0x13B228A0)
#define CLASS_1_6CCF78AD1D4E6598__CTOR_OFFSET UNITYSDK_OFFSET(0x13B23CE0)

inline static constexpr unsigned int Class_1_6CCF78AD1D4E6598_TypeDefinitionIndex = 70958;

class Class_1_6CCF78AD1D4E6598 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Enum_3_71AA90D596A09AC8_9, ::Class_1_AC56FA381B2C219F*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::Enum_3_71AA90D596A09AC8_9, ::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4AF393E7839B85AC*>* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CCF78AD1D4E6598__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_684* Method_1_BBCDDD8B5CBD2605(::Enum_3_71AA90D596A09AC8_9 a1)
	{
		return ((::Class_0_16E4307DCC419505_684*(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_9))((::PBYTE)hIl2Cpp + CLASS_1_6CCF78AD1D4E6598_METHOD_1_BBCDDD8B5CBD2605_OFFSET))(this, a1);
	}

	::System::Void Method_1_CAC610F2B9224832(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4AF393E7839B85AC*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4AF393E7839B85AC*>*))((::PBYTE)hIl2Cpp + CLASS_1_6CCF78AD1D4E6598_METHOD_1_CAC610F2B9224832_OFFSET))(this, a1);
	}

	::System::Void Method_1_0AB718BEE9EA06D7(::Class_1_4AF393E7839B85AC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AF393E7839B85AC*))((::PBYTE)hIl2Cpp + CLASS_1_6CCF78AD1D4E6598_METHOD_1_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::System::Void Method_1_0BF63477FF35C0E1(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6CCF78AD1D4E6598_METHOD_1_0BF63477FF35C0E1_OFFSET))(this, a1);
	}

	::Class_1_4AF393E7839B85AC* Method_1_691B689398153E3B(::Enum_3_71AA90D596A09AC8_9 a1)
	{
		return ((::Class_1_4AF393E7839B85AC*(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_9))((::PBYTE)hIl2Cpp + CLASS_1_6CCF78AD1D4E6598_METHOD_1_691B689398153E3B_OFFSET))(this, a1);
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

	::System::Void Method_1_40E03D354D1ACC85()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CCF78AD1D4E6598_METHOD_1_40E03D354D1ACC85_OFFSET))(this);
	}
};
