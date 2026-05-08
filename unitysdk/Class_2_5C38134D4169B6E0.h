#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1B85226610A5D17C.h"

class Class_0_16E4307DCC419505_96;
class Class_2_4404167111A26FF8;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
template <typename T1, typename T2> class Class_1_11D794E1CA66C472;
template <typename T> class Class_1_3DF236F531F5694C;
template <typename T> class Class_2_000597E145D7A42A;
template <typename T> class Class_2_0CA18452022DDC0A;
template <typename T> class Class_2_246E81337537F1CE;
template <typename T> class Class_2_D05FEB32FD372810;
template <typename T> class Class_2_F04E8A84725EA675;
template <typename T> class Class_2_F16D73323D71766B;
template <typename T> class Class_2_F16D73323D71766B_Class_3_B6136C2F127116DF_4;

#define CLASS_2_5C38134D4169B6E0_METHOD_2_19F5EE34A3136E03_OFFSET UNITYSDK_OFFSET(0x1A632970)
#define CLASS_2_5C38134D4169B6E0_METHOD_2_5BB9BC64224DF196_OFFSET UNITYSDK_OFFSET(0x1A632110)
#define CLASS_2_5C38134D4169B6E0_METHOD_2_6173AF17811AED4B_OFFSET UNITYSDK_OFFSET(0x1A632780)
#define CLASS_2_5C38134D4169B6E0_METHOD_2_71669A9BEDC9C792_OFFSET UNITYSDK_OFFSET(0x1A6322B0)
#define CLASS_2_5C38134D4169B6E0__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A62EE40)
#define CLASS_2_5C38134D4169B6E0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A631F70)

inline static constexpr unsigned int Class_2_5C38134D4169B6E0_TypeDefinitionIndex = 32976;

class Class_2_5C38134D4169B6E0 : public ::Class_1_1B85226610A5D17C
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_1; // 0x38
	::System::Boolean Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C38134D4169B6E0__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5C38134D4169B6E0__CTOR_1_OFFSET))(this, a1);
	}

	::Class_2_4404167111A26FF8* Method_2_5BB9BC64224DF196(::System::Func_1<::System::Collections::IEnumerable*>* a1, ::System::String* a2)
	{
		return ((::Class_2_4404167111A26FF8*(*)(::PVOID, ::System::Func_1<::System::Collections::IEnumerable*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5C38134D4169B6E0_METHOD_2_5BB9BC64224DF196_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6173AF17811AED4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C38134D4169B6E0_METHOD_2_6173AF17811AED4B_OFFSET))(this);
	}

	::System::String* Method_2_71669A9BEDC9C792(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5C38134D4169B6E0_METHOD_2_71669A9BEDC9C792_OFFSET))(this, a1);
	}

	::Class_2_5C38134D4169B6E0* Method_2_19F5EE34A3136E03(::System::Boolean a1)
	{
		return ((::Class_2_5C38134D4169B6E0*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5C38134D4169B6E0_METHOD_2_19F5EE34A3136E03_OFFSET))(this, a1);
	}
};
