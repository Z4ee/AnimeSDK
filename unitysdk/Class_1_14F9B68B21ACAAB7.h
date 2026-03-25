#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBuffName.h"
#include "unitysdk/System/Object.h"

class Class_1_7686EC5B8E7BB729;
class Class_2_3ABA989E5AECB261;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceBuffConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_14F9B68B21ACAAB7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x167354F0)
#define CLASS_1_14F9B68B21ACAAB7_METHOD_1_218124418542E081_OFFSET UNITYSDK_OFFSET(0x16735A70)
#define CLASS_1_14F9B68B21ACAAB7_METHOD_1_27B9B360CC29697F_OFFSET UNITYSDK_OFFSET(0x167355E0)
#define CLASS_1_14F9B68B21ACAAB7_METHOD_1_34F044103B72BF90_OFFSET UNITYSDK_OFFSET(0x16735DE0)
#define CLASS_1_14F9B68B21ACAAB7_METHOD_1_AE63CEA86E741786_OFFSET UNITYSDK_OFFSET(0x16735290)
#define CLASS_1_14F9B68B21ACAAB7_METHOD_1_BDB7EC2588B532AB_OFFSET UNITYSDK_OFFSET(0x16735530)
#define CLASS_1_14F9B68B21ACAAB7_METHOD_1_F2BDB89D10E940F7_OFFSET UNITYSDK_OFFSET(0x16735990)
#define CLASS_1_14F9B68B21ACAAB7__CTOR_OFFSET UNITYSDK_OFFSET(0x16735400)

inline static constexpr unsigned int Class_1_14F9B68B21ACAAB7_TypeDefinitionIndex = 28940;

class Class_1_14F9B68B21ACAAB7 : public ::System::Object
{
public:
	::Class_2_F3C45F1FC7349B6E* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_7686EC5B8E7BB729*>*>* Field_1_1; // 0x20

	::System::Void _ctor(::Class_2_F3C45F1FC7349B6E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_14F9B68B21ACAAB7__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_14F9B68B21ACAAB7* Method_1_AE63CEA86E741786(::Class_2_F3C45F1FC7349B6E* a1)
	{
		return ((::Class_1_14F9B68B21ACAAB7*(*)(::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_14F9B68B21ACAAB7_METHOD_1_AE63CEA86E741786_OFFSET))(a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14F9B68B21ACAAB7_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_BDB7EC2588B532AB(::Class_2_3ABA989E5AECB261* a1, ::Il2CppArray<::RPG::GameCore::CakeRaceBuffConfig*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3ABA989E5AECB261*, ::Il2CppArray<::RPG::GameCore::CakeRaceBuffConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_14F9B68B21ACAAB7_METHOD_1_BDB7EC2588B532AB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_27B9B360CC29697F(::Class_2_3ABA989E5AECB261* a1, ::RPG::GameCore::CakeRaceBuffConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3ABA989E5AECB261*, ::RPG::GameCore::CakeRaceBuffConfig*))((::PBYTE)hIl2Cpp + CLASS_1_14F9B68B21ACAAB7_METHOD_1_27B9B360CC29697F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14F9B68B21ACAAB7_METHOD_1_218124418542E081_OFFSET))(this);
	}

	::System::Void Method_1_34F044103B72BF90(::System::Int32 a1, ::Il2CppArray<::RPG::GameCore::CakeRaceBuffName>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::RPG::GameCore::CakeRaceBuffName>*))((::PBYTE)hIl2Cpp + CLASS_1_14F9B68B21ACAAB7_METHOD_1_34F044103B72BF90_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_7686EC5B8E7BB729*>* Method_1_F2BDB89D10E940F7(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_7686EC5B8E7BB729*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_14F9B68B21ACAAB7_METHOD_1_F2BDB89D10E940F7_OFFSET))(this, a1);
	}
};
