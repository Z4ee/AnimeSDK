#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_289;
class Class_0_16E4307DCC419505_290;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
template <typename T> class Class_0_16E4307DCC41950C_21;

#define CLASS_1_1A1C02861C9E4CC1_METHOD_1_239041C3652AD136_OFFSET UNITYSDK_OFFSET(0x1E34BD50)
#define CLASS_1_1A1C02861C9E4CC1_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1E34BB20)
#define CLASS_1_1A1C02861C9E4CC1_METHOD_1_68259CDE5658E964_OFFSET UNITYSDK_OFFSET(0x1E34BBC0)
#define CLASS_1_1A1C02861C9E4CC1_METHOD_1_7F2D5FFE10207A9C_OFFSET UNITYSDK_OFFSET(0x1E34BC40)
#define CLASS_1_1A1C02861C9E4CC1_METHOD_1_F022240BD49C933E_OFFSET UNITYSDK_OFFSET(0x1E34BA30)
#define CLASS_1_1A1C02861C9E4CC1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E34B9A0)

inline static constexpr unsigned int Class_1_1A1C02861C9E4CC1_TypeDefinitionIndex = 43926;

class Class_1_1A1C02861C9E4CC1 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_289*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A1C02861C9E4CC1__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_289* Method_1_F022240BD49C933E(::System::Type* a1)
	{
		return ((::Class_0_16E4307DCC419505_289*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_1A1C02861C9E4CC1_METHOD_1_F022240BD49C933E_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A1C02861C9E4CC1_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_289*>* Method_1_68259CDE5658E964()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_289*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A1C02861C9E4CC1_METHOD_1_68259CDE5658E964_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_289* Method_1_7F2D5FFE10207A9C(::Class_0_16E4307DCC419505_290* a1)
	{
		return ((::Class_0_16E4307DCC419505_289*(*)(::PVOID, ::Class_0_16E4307DCC419505_290*))((::PBYTE)hIl2Cpp + CLASS_1_1A1C02861C9E4CC1_METHOD_1_7F2D5FFE10207A9C_OFFSET))(this, a1);
	}

	::System::Void Method_1_239041C3652AD136(::Class_0_16E4307DCC419505_290* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_290*))((::PBYTE)hIl2Cpp + CLASS_1_1A1C02861C9E4CC1_METHOD_1_239041C3652AD136_OFFSET))(this, a1);
	}
};
