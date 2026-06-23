#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Singleton_1.h"

class Class_0_16E4307DCC419505_29;
class Class_0_16E4307DCC419505_35;
class Class_1_29356A79D0914A09;
class Class_2_EC06D7B7622E07ED_Class_0_16E7307DCC43CB2C_79;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_EC06D7B7622E07ED_METHOD_2_0545E5B583A15FF9_OFFSET UNITYSDK_OFFSET(0x153A2B60)
#define CLASS_2_EC06D7B7622E07ED_METHOD_2_1ADF78FED633E401_OFFSET UNITYSDK_OFFSET(0x153A26D0)
#define CLASS_2_EC06D7B7622E07ED_METHOD_2_88AD2FF46F46C80C_OFFSET UNITYSDK_OFFSET(0x153A2DA0)
#define CLASS_2_EC06D7B7622E07ED_METHOD_2_8E56DA022A2976DE_OFFSET UNITYSDK_OFFSET(0x153A2570)
#define CLASS_2_EC06D7B7622E07ED_METHOD_2_A054D52A250D3E38_OFFSET UNITYSDK_OFFSET(0x153A2DF0)
#define CLASS_2_EC06D7B7622E07ED_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x153A2470)
#define CLASS_2_EC06D7B7622E07ED_METHOD_2_FE41EBA18C59EB8A_OFFSET UNITYSDK_OFFSET(0x153A2E50)
#define CLASS_2_EC06D7B7622E07ED__CTOR_OFFSET UNITYSDK_OFFSET(0x153A23D0)

inline static constexpr unsigned int Class_2_EC06D7B7622E07ED_TypeDefinitionIndex = 81616;

class Class_2_EC06D7B7622E07ED : public ::Foundation::Singleton_1<::Class_2_EC06D7B7622E07ED*>
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_EC06D7B7622E07ED_Class_0_16E7307DCC43CB2C_79*>* Field_2_1; // 0x18
	::System::Action_1<::Class_0_16E4307DCC419505_29*>* Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC06D7B7622E07ED__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8E56DA022A2976DE(::System::UInt16 a1, ::System::Action_1<::Class_0_16E4307DCC419505_35*>* a2, ::System::Action_1<::Class_0_16E4307DCC419505_35*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Action_1<::Class_0_16E4307DCC419505_35*>*, ::System::Action_1<::Class_0_16E4307DCC419505_35*>*))((::PBYTE)hIl2Cpp + CLASS_2_EC06D7B7622E07ED_METHOD_2_8E56DA022A2976DE_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_2_1ADF78FED633E401(::Class_1_29356A79D0914A09* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_29356A79D0914A09*))((::PBYTE)hIl2Cpp + CLASS_2_EC06D7B7622E07ED_METHOD_2_1ADF78FED633E401_OFFSET))(this, a1);
	}

	::System::Void Method_2_88AD2FF46F46C80C(::System::Action_1<::Class_0_16E4307DCC419505_29*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_0_16E4307DCC419505_29*>*))((::PBYTE)hIl2Cpp + CLASS_2_EC06D7B7622E07ED_METHOD_2_88AD2FF46F46C80C_OFFSET))(this, a1);
	}

	::System::Void Method_2_A054D52A250D3E38(::System::UInt16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_2_EC06D7B7622E07ED_METHOD_2_A054D52A250D3E38_OFFSET))(this, a1);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC06D7B7622E07ED_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_0545E5B583A15FF9(::Class_0_16E4307DCC419505_29* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EC06D7B7622E07ED_METHOD_2_0545E5B583A15FF9_OFFSET))(this, a1, a2);
	}

	::Class_2_EC06D7B7622E07ED_Class_0_16E7307DCC43CB2C_79* Method_2_FE41EBA18C59EB8A(::System::UInt32 a1)
	{
		return ((::Class_2_EC06D7B7622E07ED_Class_0_16E7307DCC43CB2C_79*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_EC06D7B7622E07ED_METHOD_2_FE41EBA18C59EB8A_OFFSET))(this, a1);
	}
};
