#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCoreEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_A9BB9C9E4D3134C4;
class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
class Class_3_98C806684F7CC372_11;
namespace RPG::GameCore { class CakeRaceActionBase; }
namespace RPG::GameCore { class CakeRaceBuffConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7686EC5B8E7BB729_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x189E7410)
#define CLASS_1_7686EC5B8E7BB729_METHOD_1_31A1CE8857F61A59_OFFSET UNITYSDK_OFFSET(0x189E7490)
#define CLASS_1_7686EC5B8E7BB729_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x189E7590)
#define CLASS_1_7686EC5B8E7BB729_METHOD_1_39FD7185C859CEAD_OFFSET UNITYSDK_OFFSET(0x189E7F10)
#define CLASS_1_7686EC5B8E7BB729_METHOD_1_44080F76BF87EB77_OFFSET UNITYSDK_OFFSET(0x189E8580)
#define CLASS_1_7686EC5B8E7BB729_METHOD_1_47FB2F9821EEF960_OFFSET UNITYSDK_OFFSET(0x189E8520)
#define CLASS_1_7686EC5B8E7BB729_METHOD_1_5850F314E4208D9D_OFFSET UNITYSDK_OFFSET(0x189E8440)
#define CLASS_1_7686EC5B8E7BB729_METHOD_1_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0x189E7960)
#define CLASS_1_7686EC5B8E7BB729_METHOD_1_AFC8215C57A0845A_OFFSET UNITYSDK_OFFSET(0x189E7650)
#define CLASS_1_7686EC5B8E7BB729_METHOD_1_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0x189E8130)
#define CLASS_1_7686EC5B8E7BB729_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x189E7480)
#define CLASS_1_7686EC5B8E7BB729_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x189E7610)
#define CLASS_1_7686EC5B8E7BB729_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x189E75D0)
#define CLASS_1_7686EC5B8E7BB729__CTOR_OFFSET UNITYSDK_OFFSET(0x189E74A0)

inline static constexpr unsigned int Class_1_7686EC5B8E7BB729_TypeDefinitionIndex = 35071;

class Class_1_7686EC5B8E7BB729 : public ::System::Object
{
public:
	::RPG::GameCore::CakeRaceBuffConfig* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceCoreEventType, ::System::Collections::Generic::List_1<::Class_3_98C806684F7CC372_11*>*>* Field_1_1; // 0x18
	::Class_2_F3C45F1FC7349B6E* Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x28
	::System::UInt64 Field_1_4; // 0x30

	::System::Void _ctor(::Class_2_21AD365C113DC484* a1, ::RPG::GameCore::CakeRaceBuffConfig* a2, ::Class_2_F3C45F1FC7349B6E* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::RPG::GameCore::CakeRaceBuffConfig*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_7686EC5B8E7BB729__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7686EC5B8E7BB729_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7686EC5B8E7BB729_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::RPG::GameCore::CakeRaceBuffConfig* Method_1_31A1CE8857F61A59()
	{
		return ((::RPG::GameCore::CakeRaceBuffConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7686EC5B8E7BB729_METHOD_1_31A1CE8857F61A59_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7686EC5B8E7BB729_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7686EC5B8E7BB729_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7686EC5B8E7BB729_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_AFC8215C57A0845A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7686EC5B8E7BB729_METHOD_1_AFC8215C57A0845A_OFFSET))(this);
	}

	::System::Void Method_1_39FD7185C859CEAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7686EC5B8E7BB729_METHOD_1_39FD7185C859CEAD_OFFSET))(this);
	}

	::System::Void Method_1_5850F314E4208D9D(::RPG::GameCore::CakeRaceBuffConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceBuffConfig*))((::PBYTE)hIl2Cpp + CLASS_1_7686EC5B8E7BB729_METHOD_1_5850F314E4208D9D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_47FB2F9821EEF960(::RPG::GameCore::CakeRaceCoreEventType a1, ::Class_1_A9BB9C9E4D3134C4* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CakeRaceCoreEventType, ::Class_1_A9BB9C9E4D3134C4*))((::PBYTE)hIl2Cpp + CLASS_1_7686EC5B8E7BB729_METHOD_1_47FB2F9821EEF960_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_44080F76BF87EB77(::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>* a1, ::Class_1_A9BB9C9E4D3134C4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>*, ::Class_1_A9BB9C9E4D3134C4*))((::PBYTE)hIl2Cpp + CLASS_1_7686EC5B8E7BB729_METHOD_1_44080F76BF87EB77_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7686EC5B8E7BB729_METHOD_1_6A0EBEECA245A27C_OFFSET))(this);
	}

	::System::Void Method_1_B06F516E4459C742()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7686EC5B8E7BB729_METHOD_1_B06F516E4459C742_OFFSET))(this);
	}
};
