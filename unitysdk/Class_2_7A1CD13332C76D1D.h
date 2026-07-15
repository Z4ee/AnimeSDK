#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD611945730E269E.h"

class Class_0_16E4307DCC419505_1243;
class Class_2_DCFF4DF692D90D03;
namespace RPG::Client::Prop { class DuelChimeraProxy; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7A1CD13332C76D1D_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x170C2E70)
#define CLASS_2_7A1CD13332C76D1D_METHOD_2_3B729D391B38ACB5_1_OFFSET UNITYSDK_OFFSET(0x170C23B0)
#define CLASS_2_7A1CD13332C76D1D_METHOD_2_3B729D391B38ACB5_OFFSET UNITYSDK_OFFSET(0x170C18F0)
#define CLASS_2_7A1CD13332C76D1D_METHOD_2_5AC73B2038F65598_OFFSET UNITYSDK_OFFSET(0x170C14E0)
#define CLASS_2_7A1CD13332C76D1D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x170C1480)
#define CLASS_2_7A1CD13332C76D1D__CTOR_OFFSET UNITYSDK_OFFSET(0x170C1470)

inline static constexpr unsigned int Class_2_7A1CD13332C76D1D_TypeDefinitionIndex = 74287;

class Class_2_7A1CD13332C76D1D : public ::Class_1_FD611945730E269E
{
public:
	::Class_0_16E4307DCC419505_1243* Field_2_0; // 0x18
	::Class_2_DCFF4DF692D90D03* Field_2_1; // 0x20

	::System::Void _ctor(::Class_2_DCFF4DF692D90D03* a1, ::Class_0_16E4307DCC419505_1243* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DCFF4DF692D90D03*, ::Class_0_16E4307DCC419505_1243*))((::PBYTE)hIl2Cpp + CLASS_2_7A1CD13332C76D1D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A1CD13332C76D1D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_5AC73B2038F65598(::Class_2_DCFF4DF692D90D03* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DCFF4DF692D90D03*))((::PBYTE)hIl2Cpp + CLASS_2_7A1CD13332C76D1D_METHOD_2_5AC73B2038F65598_OFFSET))(this, a1);
	}

	::System::Void Method_2_3B729D391B38ACB5(::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7A1CD13332C76D1D_METHOD_2_3B729D391B38ACB5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3B729D391B38ACB5_1(::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7A1CD13332C76D1D_METHOD_2_3B729D391B38ACB5_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7A1CD13332C76D1D_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}
};
