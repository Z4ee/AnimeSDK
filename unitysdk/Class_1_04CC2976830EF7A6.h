#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleBranchComparer.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_830;
class Class_1_B21BB5859936C97D;
namespace RPG::GameCore { class BaseExpeditionBattleAction; }
namespace RPG::GameCore { class BaseExpeditionBattleNode; }
namespace RPG::GameCore { class ExpeditionBattleLoopNode; }
namespace RPG::GameCore { class ExpeditionBattleNodeContainer; }
namespace RPG::GameCore { class ExpeditionBattleRandomBranchNode; }
namespace RPG::GameCore { class ExpeditionBattleSwitchBranchNode; }
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_04CC2976830EF7A6_METHOD_1_4D8C7CD3B471C319_OFFSET UNITYSDK_OFFSET(0x188F6610)
#define CLASS_1_04CC2976830EF7A6_METHOD_1_563EACEF48A855C3_OFFSET UNITYSDK_OFFSET(0x188F6AE0)
#define CLASS_1_04CC2976830EF7A6_METHOD_1_7DCA1AAABC49DD72_OFFSET UNITYSDK_OFFSET(0x188F5BA0)
#define CLASS_1_04CC2976830EF7A6_METHOD_1_9E69AD914B2C07D6_OFFSET UNITYSDK_OFFSET(0x188F5F70)
#define CLASS_1_04CC2976830EF7A6_METHOD_1_B09F39C87C08DA51_OFFSET UNITYSDK_OFFSET(0x188F5CA0)
#define CLASS_1_04CC2976830EF7A6_METHOD_1_CD8BA4F6118858BB_OFFSET UNITYSDK_OFFSET(0x188F6090)
#define CLASS_1_04CC2976830EF7A6_METHOD_1_DB10906847925BB2_OFFSET UNITYSDK_OFFSET(0x188F66B0)
#define CLASS_1_04CC2976830EF7A6_METHOD_1_F60D5ED03004F4C6_OFFSET UNITYSDK_OFFSET(0x188F6760)
#define CLASS_1_04CC2976830EF7A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x188F6BF0)
#define CLASS_1_04CC2976830EF7A6__CTOR_OFFSET UNITYSDK_OFFSET(0x188F5B90)

inline static constexpr unsigned int Class_1_04CC2976830EF7A6_TypeDefinitionIndex = 63946;

class Class_1_04CC2976830EF7A6 : public ::System::Object
{
public:
	static ::System::Random** StaticGet_OLEEIPHBJKB()
	{
		return (::System::Random**)Il2CppClass::FromTypeDefinitionIndex(Class_1_04CC2976830EF7A6_TypeDefinitionIndex)->GetStaticField(0x666F0);
	}
	::Class_0_16E4307DCC419505_830* ALOAMPOJALJ; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_830* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_830*))((::PBYTE)hIl2Cpp + CLASS_1_04CC2976830EF7A6__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_04CC2976830EF7A6__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::BaseExpeditionBattleAction*>* Method_1_7DCA1AAABC49DD72(::RPG::GameCore::ExpeditionBattleNodeContainer* a1, ::Class_1_B21BB5859936C97D* a2)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::BaseExpeditionBattleAction*>*(*)(::PVOID, ::RPG::GameCore::ExpeditionBattleNodeContainer*, ::Class_1_B21BB5859936C97D*))((::PBYTE)hIl2Cpp + CLASS_1_04CC2976830EF7A6_METHOD_1_7DCA1AAABC49DD72_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B09F39C87C08DA51(::RPG::GameCore::BaseExpeditionBattleNode* a1, ::Class_1_B21BB5859936C97D* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseExpeditionBattleAction*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseExpeditionBattleNode*, ::Class_1_B21BB5859936C97D*, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseExpeditionBattleAction*>*))((::PBYTE)hIl2Cpp + CLASS_1_04CC2976830EF7A6_METHOD_1_B09F39C87C08DA51_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_DB10906847925BB2(::Il2CppArray<::RPG::GameCore::BaseExpeditionBattleNode*>* a1, ::Class_1_B21BB5859936C97D* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseExpeditionBattleAction*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::BaseExpeditionBattleNode*>*, ::Class_1_B21BB5859936C97D*, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseExpeditionBattleAction*>*))((::PBYTE)hIl2Cpp + CLASS_1_04CC2976830EF7A6_METHOD_1_DB10906847925BB2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9E69AD914B2C07D6(::RPG::GameCore::ExpeditionBattleSwitchBranchNode* a1, ::Class_1_B21BB5859936C97D* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseExpeditionBattleAction*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ExpeditionBattleSwitchBranchNode*, ::Class_1_B21BB5859936C97D*, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseExpeditionBattleAction*>*))((::PBYTE)hIl2Cpp + CLASS_1_04CC2976830EF7A6_METHOD_1_9E69AD914B2C07D6_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_F60D5ED03004F4C6(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::ExpeditionBattleBranchComparer a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::ExpeditionBattleBranchComparer))((::PBYTE)hIl2Cpp + CLASS_1_04CC2976830EF7A6_METHOD_1_F60D5ED03004F4C6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CD8BA4F6118858BB(::RPG::GameCore::ExpeditionBattleRandomBranchNode* a1, ::Class_1_B21BB5859936C97D* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseExpeditionBattleAction*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ExpeditionBattleRandomBranchNode*, ::Class_1_B21BB5859936C97D*, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseExpeditionBattleAction*>*))((::PBYTE)hIl2Cpp + CLASS_1_04CC2976830EF7A6_METHOD_1_CD8BA4F6118858BB_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Double Method_1_563EACEF48A855C3(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Double(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_04CC2976830EF7A6_METHOD_1_563EACEF48A855C3_OFFSET))(a1);
	}

	::System::Void Method_1_4D8C7CD3B471C319(::RPG::GameCore::ExpeditionBattleLoopNode* a1, ::Class_1_B21BB5859936C97D* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseExpeditionBattleAction*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ExpeditionBattleLoopNode*, ::Class_1_B21BB5859936C97D*, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseExpeditionBattleAction*>*))((::PBYTE)hIl2Cpp + CLASS_1_04CC2976830EF7A6_METHOD_1_4D8C7CD3B471C319_OFFSET))(this, a1, a2, a3);
	}
};
