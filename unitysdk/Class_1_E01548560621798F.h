#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleFlowStateType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_829;
class Class_1_811C21B122C8082C;
class Class_1_B765DBF21AEA54A0;
namespace RPG::GameCore { class BaseExpeditionBattleAction; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_E01548560621798F_GET_LEVELINDEX_OFFSET UNITYSDK_OFFSET(0x154D58B0)
#define CLASS_1_E01548560621798F_METHOD_1_2F381734DBBAB430_OFFSET UNITYSDK_OFFSET(0x154D5AA0)
#define CLASS_1_E01548560621798F_METHOD_1_42C5BADE1C9EFC80_OFFSET UNITYSDK_OFFSET(0x154D58C0)
#define CLASS_1_E01548560621798F_METHOD_1_4D38FB50FCAD9609_OFFSET UNITYSDK_OFFSET(0x154D5870)
#define CLASS_1_E01548560621798F_METHOD_1_8AB486D3DF0DF1C3_OFFSET UNITYSDK_OFFSET(0x154D5CB0)
#define CLASS_1_E01548560621798F_METHOD_1_8F697642FBF3BDA7_OFFSET UNITYSDK_OFFSET(0x154D5D20)
#define CLASS_1_E01548560621798F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x154D5C70)
#define CLASS_1_E01548560621798F_METHOD_1_E67FA6A042436B76_OFFSET UNITYSDK_OFFSET(0x154D5AF0)
#define CLASS_1_E01548560621798F__CTOR_OFFSET UNITYSDK_OFFSET(0x154D59A0)

inline static constexpr unsigned int Class_1_E01548560621798F_TypeDefinitionIndex = 63960;

class Class_1_E01548560621798F : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_829* HJOADEMMCLN; // 0x10
	::Class_1_B765DBF21AEA54A0* CGHHNAEKHIO; // 0x18
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_811C21B122C8082C*>* FBJPIMMIOIL; // 0x20
	::System::UInt32 HKAHFHHICEN; // 0x28
	::System::UInt32 _LevelIndex_k__BackingField; // 0x2C
	::RPG::GameCore::ExpeditionBattleFlowStateType ENIIFGJIIBF; // 0x30

	::System::Void _ctor(::RPG::GameCore::ExpeditionBattleFlowStateType a1, ::System::UInt32 a2, ::System::UInt32 a3, ::Class_0_16E4307DCC419505_829* a4, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_811C21B122C8082C*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ExpeditionBattleFlowStateType, ::System::UInt32, ::System::UInt32, ::Class_0_16E4307DCC419505_829*, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_811C21B122C8082C*>*))((::PBYTE)hIl2Cpp + CLASS_1_E01548560621798F__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::GameCore::ExpeditionBattleFlowStateType Method_1_4D38FB50FCAD9609()
	{
		return ((::RPG::GameCore::ExpeditionBattleFlowStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E01548560621798F_METHOD_1_4D38FB50FCAD9609_OFFSET))(this);
	}

	::System::UInt32 get_LevelIndex()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E01548560621798F_GET_LEVELINDEX_OFFSET))(this);
	}

	::System::Boolean Method_1_42C5BADE1C9EFC80()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E01548560621798F_METHOD_1_42C5BADE1C9EFC80_OFFSET))(this);
	}

	::System::Void Method_1_2F381734DBBAB430()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E01548560621798F_METHOD_1_2F381734DBBAB430_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E01548560621798F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_8AB486D3DF0DF1C3(::System::UInt32& a1, ::RPG::GameCore::BaseExpeditionBattleAction*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&, ::RPG::GameCore::BaseExpeditionBattleAction*&))((::PBYTE)hIl2Cpp + CLASS_1_E01548560621798F_METHOD_1_8AB486D3DF0DF1C3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8F697642FBF3BDA7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E01548560621798F_METHOD_1_8F697642FBF3BDA7_OFFSET))(this, a1);
	}

	::System::Void Method_1_E67FA6A042436B76()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E01548560621798F_METHOD_1_E67FA6A042436B76_OFFSET))(this);
	}
};
