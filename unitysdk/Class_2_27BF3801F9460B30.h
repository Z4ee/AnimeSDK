#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Enum_3_106B415829838DC6.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"

class Class_1_6B9BA8441E94A95A;
class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIBossChallengeBadgeWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_0_16E4307DCC419505_159;

#define CLASS_2_27BF3801F9460B30_METHOD_2_232B95B04DC4572E_OFFSET UNITYSDK_OFFSET(0x15FF2D80)
#define CLASS_2_27BF3801F9460B30_METHOD_2_359889089C129707_OFFSET UNITYSDK_OFFSET(0x15FF2F90)
#define CLASS_2_27BF3801F9460B30_METHOD_2_388634609260F1BB_OFFSET UNITYSDK_OFFSET(0x15FF2D30)
#define CLASS_2_27BF3801F9460B30_METHOD_2_603A06DE63EB7219_OFFSET UNITYSDK_OFFSET(0x15FF2760)
#define CLASS_2_27BF3801F9460B30_METHOD_2_A44A18C9451109E4_OFFSET UNITYSDK_OFFSET(0x15FF2A80)
#define CLASS_2_27BF3801F9460B30_METHOD_2_C97A111C1B66A79B_OFFSET UNITYSDK_OFFSET(0x15FF2D20)
#define CLASS_2_27BF3801F9460B30_METHOD_2_D96E81564749906A_OFFSET UNITYSDK_OFFSET(0x15FF2D10)
#define CLASS_2_27BF3801F9460B30__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF2C70)

inline static constexpr unsigned int Class_2_27BF3801F9460B30_TypeDefinitionIndex = 63405;

class Class_2_27BF3801F9460B30 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::Class_0_16E4307DCC419505_159<::Enum_3_106B415829838DC6>* Field_2_1; // 0x50
	::System::Collections::Generic::List_1<::MoleMole::UIBossChallengeBadgeWidgetController*>* Field_2_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27BF3801F9460B30__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_603A06DE63EB7219(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_27BF3801F9460B30_METHOD_2_603A06DE63EB7219_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_159<::Enum_3_106B415829838DC6>* Method_2_D96E81564749906A()
	{
		return ((::Class_0_16E4307DCC419505_159<::Enum_3_106B415829838DC6>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27BF3801F9460B30_METHOD_2_D96E81564749906A_OFFSET))(this);
	}

	::System::Void Method_2_C97A111C1B66A79B(::Class_0_16E4307DCC419505_159<::Enum_3_106B415829838DC6>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_159<::Enum_3_106B415829838DC6>*))((::PBYTE)hIl2Cpp + CLASS_2_27BF3801F9460B30_METHOD_2_C97A111C1B66A79B_OFFSET))(this, a1);
	}

	::System::Void Method_2_388634609260F1BB(::Struct_2_C8629618711DF8B3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + CLASS_2_27BF3801F9460B30_METHOD_2_388634609260F1BB_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_232B95B04DC4572E()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27BF3801F9460B30_METHOD_2_232B95B04DC4572E_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_6B9BA8441E94A95A*>* Method_2_359889089C129707(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_6B9BA8441E94A95A*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_27BF3801F9460B30_METHOD_2_359889089C129707_OFFSET))(this, a1);
	}

	::System::Void Method_2_A44A18C9451109E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27BF3801F9460B30_METHOD_2_A44A18C9451109E4_OFFSET))(this);
	}
};
