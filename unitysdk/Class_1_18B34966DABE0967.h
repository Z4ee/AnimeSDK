#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleFlowStateType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_829;
class Class_0_16E4307DCC419505_837;
class Class_0_16E4307DCC419505_838;
class Class_0_16E4307DCC419505_839;
class Class_1_19A7374627019A7F;
class Class_1_811C21B122C8082C;
namespace RPG::GameCore { class BaseExpeditionBattleAction; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_18B34966DABE0967_METHOD_1_82549CBA77FC82D4_OFFSET UNITYSDK_OFFSET(0x190FAB20)
#define CLASS_1_18B34966DABE0967_METHOD_1_A689ACC98C01A872_OFFSET UNITYSDK_OFFSET(0x190FB440)
#define CLASS_1_18B34966DABE0967_METHOD_1_CA47AD39FB9240D4_OFFSET UNITYSDK_OFFSET(0x190FA1A0)
#define CLASS_1_18B34966DABE0967__CCTOR_OFFSET UNITYSDK_OFFSET(0x190FB6F0)
#define CLASS_1_18B34966DABE0967__CTOR_OFFSET UNITYSDK_OFFSET(0x190FA190)

inline static constexpr unsigned int Class_1_18B34966DABE0967_TypeDefinitionIndex = 63968;

class Class_1_18B34966DABE0967 : public ::System::Object
{
public:
	static ::Il2CppArray<::RPG::GameCore::ExpeditionBattleFlowStateType>** StaticGet_OIHBECGKGPH()
	{
		return (::Il2CppArray<::RPG::GameCore::ExpeditionBattleFlowStateType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_18B34966DABE0967_TypeDefinitionIndex)->GetStaticField(0x15390);
	}
	::Class_0_16E4307DCC419505_839* ICIKOFLGOLL; // 0x10
	::Class_0_16E4307DCC419505_829* HJOADEMMCLN; // 0x18
	::Class_0_16E4307DCC419505_838* PMIJOPOIDML; // 0x20

	::System::Void _ctor(::Class_0_16E4307DCC419505_829* a1, ::Class_0_16E4307DCC419505_839* a2, ::Class_0_16E4307DCC419505_838* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_829*, ::Class_0_16E4307DCC419505_839*, ::Class_0_16E4307DCC419505_838*))((::PBYTE)hIl2Cpp + CLASS_1_18B34966DABE0967__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_18B34966DABE0967__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::Class_1_19A7374627019A7F*>* Method_1_CA47AD39FB9240D4(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_811C21B122C8082C*>* a3)
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::Class_1_19A7374627019A7F*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_811C21B122C8082C*>*))((::PBYTE)hIl2Cpp + CLASS_1_18B34966DABE0967_METHOD_1_CA47AD39FB9240D4_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ExpeditionBattleFlowStateType, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::BaseExpeditionBattleAction*>*>*>* Method_1_82549CBA77FC82D4(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_811C21B122C8082C*>* a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ExpeditionBattleFlowStateType, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::BaseExpeditionBattleAction*>*>*>*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_811C21B122C8082C*>*))((::PBYTE)hIl2Cpp + CLASS_1_18B34966DABE0967_METHOD_1_82549CBA77FC82D4_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_837* Method_1_A689ACC98C01A872(::RPG::GameCore::ExpeditionBattleFlowStateType a1, ::System::UInt32 a2, ::Class_1_811C21B122C8082C* a3)
	{
		return ((::Class_0_16E4307DCC419505_837*(*)(::PVOID, ::RPG::GameCore::ExpeditionBattleFlowStateType, ::System::UInt32, ::Class_1_811C21B122C8082C*))((::PBYTE)hIl2Cpp + CLASS_1_18B34966DABE0967_METHOD_1_A689ACC98C01A872_OFFSET))(this, a1, a2, a3);
	}
};
