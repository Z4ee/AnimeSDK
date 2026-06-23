#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/ChallengeSubTypeMonsterKill_EChallengeSubTypeKillType.h"
#include "unitysdk/System/Object.h"

class Class_1_A71FF9B2461C0AD1_Class_1_733B2C811A129CB8;
class Class_1_A71FF9B2461C0AD1_Class_1_C5BFE2348C1566EE;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A71FF9B2461C0AD1_METHOD_1_3AC8F91835D61B3F_OFFSET UNITYSDK_OFFSET(0x16D33DD0)
#define CLASS_1_A71FF9B2461C0AD1_METHOD_1_3C603185AF9589AB_OFFSET UNITYSDK_OFFSET(0x16D33E60)
#define CLASS_1_A71FF9B2461C0AD1_METHOD_1_6A5306AFA0E6C1F9_OFFSET UNITYSDK_OFFSET(0x16D34590)
#define CLASS_1_A71FF9B2461C0AD1_METHOD_1_706FE83A271C2F34_OFFSET UNITYSDK_OFFSET(0x16D346E0)
#define CLASS_1_A71FF9B2461C0AD1_METHOD_1_D9463631F1837F99_OFFSET UNITYSDK_OFFSET(0x16D340D0)
#define CLASS_1_A71FF9B2461C0AD1_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x16D34570)
#define CLASS_1_A71FF9B2461C0AD1__CTOR_OFFSET UNITYSDK_OFFSET(0x16D33D00)

inline static constexpr unsigned int Class_1_A71FF9B2461C0AD1_TypeDefinitionIndex = 54327;

class Class_1_A71FF9B2461C0AD1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_3 = 0x64; // 0x0
	::System::Collections::Generic::List_1<::Class_1_A71FF9B2461C0AD1_Class_1_C5BFE2348C1566EE*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_A71FF9B2461C0AD1_Class_1_733B2C811A129CB8*>* Field_1_0; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A71FF9B2461C0AD1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3AC8F91835D61B3F(::Class_1_A71FF9B2461C0AD1_Class_1_733B2C811A129CB8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A71FF9B2461C0AD1_Class_1_733B2C811A129CB8*))((::PBYTE)hIl2Cpp + CLASS_1_A71FF9B2461C0AD1_METHOD_1_3AC8F91835D61B3F_OFFSET))(this, a1);
	}

	::MoleMole::Battle::ChallengeSubTypeMonsterKill_EChallengeSubTypeKillType Method_1_3C603185AF9589AB(::Class_1_A71FF9B2461C0AD1_Class_1_733B2C811A129CB8* a1, ::Class_1_A71FF9B2461C0AD1_Class_1_C5BFE2348C1566EE*& a2, ::MoleMole::Battle::ChallengeSubTypeMonsterKill_EChallengeSubTypeKillType a3, ::Class_1_A71FF9B2461C0AD1_Class_1_C5BFE2348C1566EE*& a4, ::System::Boolean a5)
	{
		return ((::MoleMole::Battle::ChallengeSubTypeMonsterKill_EChallengeSubTypeKillType(*)(::PVOID, ::Class_1_A71FF9B2461C0AD1_Class_1_733B2C811A129CB8*, ::Class_1_A71FF9B2461C0AD1_Class_1_C5BFE2348C1566EE*&, ::MoleMole::Battle::ChallengeSubTypeMonsterKill_EChallengeSubTypeKillType, ::Class_1_A71FF9B2461C0AD1_Class_1_C5BFE2348C1566EE*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A71FF9B2461C0AD1_METHOD_1_3C603185AF9589AB_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A71FF9B2461C0AD1_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Void Method_1_6A5306AFA0E6C1F9(::Class_1_A71FF9B2461C0AD1_Class_1_C5BFE2348C1566EE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A71FF9B2461C0AD1_Class_1_C5BFE2348C1566EE*))((::PBYTE)hIl2Cpp + CLASS_1_A71FF9B2461C0AD1_METHOD_1_6A5306AFA0E6C1F9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_706FE83A271C2F34(::Class_1_A71FF9B2461C0AD1_Class_1_733B2C811A129CB8*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A71FF9B2461C0AD1_Class_1_733B2C811A129CB8*&))((::PBYTE)hIl2Cpp + CLASS_1_A71FF9B2461C0AD1_METHOD_1_706FE83A271C2F34_OFFSET))(this, a1);
	}

	static ::MoleMole::Battle::ChallengeSubTypeMonsterKill_EChallengeSubTypeKillType Method_1_D9463631F1837F99(::System::Collections::Generic::IEnumerable_1<::System::String*>* a1)
	{
		return ((::MoleMole::Battle::ChallengeSubTypeMonsterKill_EChallengeSubTypeKillType(*)(::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_A71FF9B2461C0AD1_METHOD_1_D9463631F1837F99_OFFSET))(a1);
	}
};
