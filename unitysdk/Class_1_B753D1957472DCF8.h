#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A725E4562D03EA4E_5.h"
#include "unitysdk/System/Object.h"

class Class_1_4A1AD10FD6B58ED3;
class Class_1_9ED35D5F3086FF80;
class Class_1_CDEFF58333D3C03D;
class Class_3_6F28FFD006F2B451;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B753D1957472DCF8_METHOD_1_2B8B70092FE5FFBC_OFFSET UNITYSDK_OFFSET(0x100E16D0)
#define CLASS_1_B753D1957472DCF8_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x100E1630)
#define CLASS_1_B753D1957472DCF8_METHOD_1_98C87C3EDBFA9C52_OFFSET UNITYSDK_OFFSET(0x100E1310)
#define CLASS_1_B753D1957472DCF8_METHOD_1_B01BC89797A3B87C_OFFSET UNITYSDK_OFFSET(0x100E0F40)
#define CLASS_1_B753D1957472DCF8_METHOD_1_C4A9F56CB86E30FA_OFFSET UNITYSDK_OFFSET(0x100E1B70)
#define CLASS_1_B753D1957472DCF8_METHOD_1_D71159EFFB42E102_OFFSET UNITYSDK_OFFSET(0x100E0C10)
#define CLASS_1_B753D1957472DCF8__CTOR_OFFSET UNITYSDK_OFFSET(0x100E0B70)

inline static constexpr unsigned int Class_1_B753D1957472DCF8_TypeDefinitionIndex = 92174;

class Class_1_B753D1957472DCF8 : public ::System::Object
{
public:
	::Class_1_9ED35D5F3086FF80* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_CDEFF58333D3C03D*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B753D1957472DCF8__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_A725E4562D03EA4E_5>* Method_1_D71159EFFB42E102(::Class_3_6F28FFD006F2B451* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_A725E4562D03EA4E_5>*(*)(::PVOID, ::Class_3_6F28FFD006F2B451*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B753D1957472DCF8_METHOD_1_D71159EFFB42E102_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_4A1AD10FD6B58ED3* Method_1_B01BC89797A3B87C(::Class_3_6F28FFD006F2B451* a1, ::System::Int32 a2)
	{
		return ((::Class_1_4A1AD10FD6B58ED3*(*)(::PVOID, ::Class_3_6F28FFD006F2B451*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B753D1957472DCF8_METHOD_1_B01BC89797A3B87C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_98C87C3EDBFA9C52(::Class_3_6F28FFD006F2B451* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_6F28FFD006F2B451*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B753D1957472DCF8_METHOD_1_98C87C3EDBFA9C52_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B753D1957472DCF8_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_2B8B70092FE5FFBC(::Class_3_6F28FFD006F2B451* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_6F28FFD006F2B451*))((::PBYTE)hIl2Cpp + CLASS_1_B753D1957472DCF8_METHOD_1_2B8B70092FE5FFBC_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_A725E4562D03EA4E_5>* Method_1_C4A9F56CB86E30FA(::Class_3_6F28FFD006F2B451* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Collections::Generic::List_1<::System::Int32>* a4)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_A725E4562D03EA4E_5>*(*)(::PVOID, ::Class_3_6F28FFD006F2B451*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_B753D1957472DCF8_METHOD_1_C4A9F56CB86E30FA_OFFSET))(this, a1, a2, a3, a4);
	}
};
