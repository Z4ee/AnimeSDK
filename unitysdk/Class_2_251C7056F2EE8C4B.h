#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Singleton_1.h"

class Class_0_16E4307DCC419505_34;
class Class_0_16E4307DCC419505_36;
class Class_1_29356A79D0914A09;
class Class_2_251C7056F2EE8C4B_Class_0_16E7307DCC43CB2C_20;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_251C7056F2EE8C4B_METHOD_2_0284F1D77D50E3ED_OFFSET UNITYSDK_OFFSET(0x16490C50)
#define CLASS_2_251C7056F2EE8C4B_METHOD_2_09722E48744DF1F2_OFFSET UNITYSDK_OFFSET(0x164908C0)
#define CLASS_2_251C7056F2EE8C4B_METHOD_2_4916D20B06AD3334_OFFSET UNITYSDK_OFFSET(0x16490420)
#define CLASS_2_251C7056F2EE8C4B_METHOD_2_88AD2FF46F46C80C_OFFSET UNITYSDK_OFFSET(0x16490DB0)
#define CLASS_2_251C7056F2EE8C4B_METHOD_2_A054D52A250D3E38_OFFSET UNITYSDK_OFFSET(0x16490B10)
#define CLASS_2_251C7056F2EE8C4B_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x16490320)
#define CLASS_2_251C7056F2EE8C4B_METHOD_2_FE41EBA18C59EB8A_OFFSET UNITYSDK_OFFSET(0x16490B70)
#define CLASS_2_251C7056F2EE8C4B__CTOR_OFFSET UNITYSDK_OFFSET(0x16490280)

inline static constexpr unsigned int Class_2_251C7056F2EE8C4B_TypeDefinitionIndex = 52059;

class Class_2_251C7056F2EE8C4B : public ::Foundation::Singleton_1<::Class_2_251C7056F2EE8C4B*>
{
public:
	::System::Action_1<::Class_0_16E4307DCC419505_36*>* Field_2_6; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_251C7056F2EE8C4B_Class_0_16E7307DCC43CB2C_20*>* Field_2_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_251C7056F2EE8C4B__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_2_4916D20B06AD3334(::Class_1_29356A79D0914A09* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_29356A79D0914A09*))((::PBYTE)hIl2Cpp + CLASS_2_251C7056F2EE8C4B_METHOD_2_4916D20B06AD3334_OFFSET))(this, a1);
	}

	::System::Void Method_2_A054D52A250D3E38(::System::UInt16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_2_251C7056F2EE8C4B_METHOD_2_A054D52A250D3E38_OFFSET))(this, a1);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_251C7056F2EE8C4B_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_09722E48744DF1F2(::Class_0_16E4307DCC419505_36* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_251C7056F2EE8C4B_METHOD_2_09722E48744DF1F2_OFFSET))(this, a1, a2);
	}

	::Class_2_251C7056F2EE8C4B_Class_0_16E7307DCC43CB2C_20* Method_2_FE41EBA18C59EB8A(::System::UInt32 a1)
	{
		return ((::Class_2_251C7056F2EE8C4B_Class_0_16E7307DCC43CB2C_20*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_251C7056F2EE8C4B_METHOD_2_FE41EBA18C59EB8A_OFFSET))(this, a1);
	}

	::System::Void Method_2_0284F1D77D50E3ED(::System::UInt16 a1, ::System::Action_1<::Class_0_16E4307DCC419505_34*>* a2, ::System::Action_1<::Class_0_16E4307DCC419505_34*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Action_1<::Class_0_16E4307DCC419505_34*>*, ::System::Action_1<::Class_0_16E4307DCC419505_34*>*))((::PBYTE)hIl2Cpp + CLASS_2_251C7056F2EE8C4B_METHOD_2_0284F1D77D50E3ED_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_88AD2FF46F46C80C(::System::Action_1<::Class_0_16E4307DCC419505_36*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_0_16E4307DCC419505_36*>*))((::PBYTE)hIl2Cpp + CLASS_2_251C7056F2EE8C4B_METHOD_2_88AD2FF46F46C80C_OFFSET))(this, a1);
	}
};
