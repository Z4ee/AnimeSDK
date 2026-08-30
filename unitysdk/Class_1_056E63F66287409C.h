#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleFlowStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_B765DBF21AEA54A0;
namespace RPG::GameCore { class BaseExpeditionBattleAction; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_056E63F66287409C_GET_STAGETYPE_OFFSET UNITYSDK_OFFSET(0x18A6BA50)
#define CLASS_1_056E63F66287409C_METHOD_1_42C5BADE1C9EFC80_OFFSET UNITYSDK_OFFSET(0x18A6BA60)
#define CLASS_1_056E63F66287409C_METHOD_1_72A6B59B823927A1_OFFSET UNITYSDK_OFFSET(0x18A6C1D0)
#define CLASS_1_056E63F66287409C_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x18A6C160)
#define CLASS_1_056E63F66287409C_METHOD_1_9D31CB6C3824CEC8_OFFSET UNITYSDK_OFFSET(0x18A6C100)
#define CLASS_1_056E63F66287409C__CTOR_OFFSET UNITYSDK_OFFSET(0x18A6BB40)

inline static constexpr unsigned int Class_1_056E63F66287409C_TypeDefinitionIndex = 63966;

class Class_1_056E63F66287409C : public ::System::Object
{
public:
	::Class_1_B765DBF21AEA54A0* CGHHNAEKHIO; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::BaseExpeditionBattleAction*>* LGMJPAADBME; // 0x18
	::RPG::GameCore::ExpeditionBattleFlowStateType _StageType_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::GameCore::ExpeditionBattleFlowStateType a1, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::BaseExpeditionBattleAction*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ExpeditionBattleFlowStateType, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::BaseExpeditionBattleAction*>*))((::PBYTE)hIl2Cpp + CLASS_1_056E63F66287409C__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::ExpeditionBattleFlowStateType get_StageType()
	{
		return ((::RPG::GameCore::ExpeditionBattleFlowStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_056E63F66287409C_GET_STAGETYPE_OFFSET))(this);
	}

	::System::Boolean Method_1_42C5BADE1C9EFC80()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_056E63F66287409C_METHOD_1_42C5BADE1C9EFC80_OFFSET))(this);
	}

	::System::Boolean Method_1_9D31CB6C3824CEC8(::RPG::GameCore::BaseExpeditionBattleAction*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BaseExpeditionBattleAction*&))((::PBYTE)hIl2Cpp + CLASS_1_056E63F66287409C_METHOD_1_9D31CB6C3824CEC8_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_056E63F66287409C_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_1_72A6B59B823927A1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_056E63F66287409C_METHOD_1_72A6B59B823927A1_OFFSET))(this);
	}
};
