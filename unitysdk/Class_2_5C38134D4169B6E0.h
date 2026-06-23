#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C3735B7FBAD6404D.h"

class Class_0_16E4307DCC419505_142;
class Class_2_4404167111A26FF8;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
template <typename T1, typename T2> class Class_1_6BC0A76BA49068FE;
template <typename T> class Class_1_4BC87A1432B12C4C;
template <typename T> class Class_2_000597E145D7A42A;
template <typename T> class Class_2_246E81337537F1CE;
template <typename T> class Class_2_27110FADB294B5B7;
template <typename T> class Class_2_848E2C93C81F23DF;
template <typename T> class Class_2_A1EA4E1DB6FD66C8;
template <typename T> class Class_2_F16D73323D71766B;
template <typename T> class Class_2_F16D73323D71766B_Class_3_B6136C2F127116DF_4;

#define CLASS_2_5C38134D4169B6E0_METHOD_2_5BB9BC64224DF196_OFFSET UNITYSDK_OFFSET(0x1C90F660)
#define CLASS_2_5C38134D4169B6E0_METHOD_2_71669A9BEDC9C792_OFFSET UNITYSDK_OFFSET(0x1C90F800)
#define CLASS_2_5C38134D4169B6E0_METHOD_2_ED65AE7582736594_OFFSET UNITYSDK_OFFSET(0x1C90FDE0)
#define CLASS_2_5C38134D4169B6E0__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C90F5C0)
#define CLASS_2_5C38134D4169B6E0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C90F530)

inline static constexpr unsigned int Class_2_5C38134D4169B6E0_TypeDefinitionIndex = 34577;

class Class_2_5C38134D4169B6E0 : public ::Class_1_C3735B7FBAD6404D
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_1; // 0x18
	::System::Boolean Field_2_0; // 0x20

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

	::System::Void Method_2_ED65AE7582736594()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C38134D4169B6E0_METHOD_2_ED65AE7582736594_OFFSET))(this);
	}

	::System::String* Method_2_71669A9BEDC9C792(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5C38134D4169B6E0_METHOD_2_71669A9BEDC9C792_OFFSET))(this, a1);
	}
};
