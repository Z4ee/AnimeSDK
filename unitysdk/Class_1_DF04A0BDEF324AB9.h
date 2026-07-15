#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_95;
class Class_1_02F4D434E735F1B9;
class Class_1_714EC10B569D81C0;
class Class_1_F0F5FC8CD22F7E83;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DF04A0BDEF324AB9_METHOD_1_26D7098BCD0806DA_OFFSET UNITYSDK_OFFSET(0x18BF9E20)
#define CLASS_1_DF04A0BDEF324AB9_METHOD_1_47CB292A1024543A_OFFSET UNITYSDK_OFFSET(0x18BF9DD0)
#define CLASS_1_DF04A0BDEF324AB9_METHOD_1_8D0EA04B3A42E544_OFFSET UNITYSDK_OFFSET(0x18BFA4F0)
#define CLASS_1_DF04A0BDEF324AB9_METHOD_1_B234D11B984DCF80_OFFSET UNITYSDK_OFFSET(0x18BFA8B0)
#define CLASS_1_DF04A0BDEF324AB9_METHOD_1_BF237A4DC01A822E_OFFSET UNITYSDK_OFFSET(0x18BFA9E0)

inline static constexpr unsigned int Class_1_DF04A0BDEF324AB9_TypeDefinitionIndex = 39318;

class Class_1_DF04A0BDEF324AB9 : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_95* Method_1_47CB292A1024543A(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_95*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DF04A0BDEF324AB9_METHOD_1_47CB292A1024543A_OFFSET))(a1);
	}

	static ::Class_1_02F4D434E735F1B9* Method_1_26D7098BCD0806DA(::System::String* a1)
	{
		return ((::Class_1_02F4D434E735F1B9*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DF04A0BDEF324AB9_METHOD_1_26D7098BCD0806DA_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Class_1_714EC10B569D81C0*>* Method_1_8D0EA04B3A42E544(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_714EC10B569D81C0*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DF04A0BDEF324AB9_METHOD_1_8D0EA04B3A42E544_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_95* Method_1_B234D11B984DCF80(::System::String* a1, ::Class_1_F0F5FC8CD22F7E83* a2)
	{
		return ((::Class_0_16E4307DCC419505_95*(*)(::System::String*, ::Class_1_F0F5FC8CD22F7E83*))((::PBYTE)hIl2Cpp + CLASS_1_DF04A0BDEF324AB9_METHOD_1_B234D11B984DCF80_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BF237A4DC01A822E(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::Class_1_714EC10B569D81C0*>* a2, ::System::Collections::Generic::IEnumerable_1<::Class_1_714EC10B569D81C0*>* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::Class_1_714EC10B569D81C0*>*, ::System::Collections::Generic::IEnumerable_1<::Class_1_714EC10B569D81C0*>*))((::PBYTE)hIl2Cpp + CLASS_1_DF04A0BDEF324AB9_METHOD_1_BF237A4DC01A822E_OFFSET))(a1, a2, a3);
	}
};
