#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_B39E1AA89D98DED2_Enum_3_B4B78138CF90752C.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/HollowEntityConfig_CampType.h"
#include "unitysdk/MoleMole/HollowEntityConfig_RenderPriority.h"
#include "unitysdk/Share/GridDir.h"

namespace MoleMole { template <typename T1, typename T2> class TwoDiffValue_2; }
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::ChessStateMachine { class OnceTriggerString; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HOLLOWENTITYCONFIG_GET_ATTACK_OFFSET UNITYSDK_OFFSET(0x116245D0)
#define MOLEMOLE_HOLLOWENTITYCONFIG_GET_CAMP_OFFSET UNITYSDK_OFFSET(0x11624630)
#define MOLEMOLE_HOLLOWENTITYCONFIG_GET_CANBATTLE_OFFSET UNITYSDK_OFFSET(0x11624550)
#define MOLEMOLE_HOLLOWENTITYCONFIG_GET_CANBEPUSH_OFFSET UNITYSDK_OFFSET(0x11624470)
#define MOLEMOLE_HOLLOWENTITYCONFIG_GET_CANCOLLIDER_OFFSET UNITYSDK_OFFSET(0x116244B0)
#define MOLEMOLE_HOLLOWENTITYCONFIG_GET_CANMAXDEATHTIME_OFFSET UNITYSDK_OFFSET(0x11624690)
#define MOLEMOLE_HOLLOWENTITYCONFIG_GET_CANMOVE_OFFSET UNITYSDK_OFFSET(0x11624390)
#define MOLEMOLE_HOLLOWENTITYCONFIG_GET_CANPUSH_OFFSET UNITYSDK_OFFSET(0x11624450)
#define MOLEMOLE_HOLLOWENTITYCONFIG_GET_HP_OFFSET UNITYSDK_OFFSET(0x11624570)
#define MOLEMOLE_HOLLOWENTITYCONFIG_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x11624530)
#define MOLEMOLE_HOLLOWENTITYCONFIG_GET_LAYER_OFFSET UNITYSDK_OFFSET(0x116244D0)
#define MOLEMOLE_HOLLOWENTITYCONFIG_GET_MAXDEATHTIME_OFFSET UNITYSDK_OFFSET(0x116246B0)
#define MOLEMOLE_HOLLOWENTITYCONFIG_GET_MOVESTATENAME_OFFSET UNITYSDK_OFFSET(0x116243B0)
#define MOLEMOLE_HOLLOWENTITYCONFIG_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x11624710)
#define MOLEMOLE_HOLLOWENTITYCONFIG_GET_RENDERPRIORITY_OFFSET UNITYSDK_OFFSET(0x11624730)
#define MOLEMOLE_HOLLOWENTITYCONFIG_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x11624490)
#define MOLEMOLE_HOLLOWENTITYCONFIG_SET_CANBATTLE_OFFSET UNITYSDK_OFFSET(0x11624560)
#define MOLEMOLE_HOLLOWENTITYCONFIG_SET_CANBEPUSH_OFFSET UNITYSDK_OFFSET(0x11624480)
#define MOLEMOLE_HOLLOWENTITYCONFIG_SET_CANCOLLIDER_OFFSET UNITYSDK_OFFSET(0x116244C0)
#define MOLEMOLE_HOLLOWENTITYCONFIG_SET_CANMAXDEATHTIME_OFFSET UNITYSDK_OFFSET(0x116246A0)
#define MOLEMOLE_HOLLOWENTITYCONFIG_SET_CANMOVE_OFFSET UNITYSDK_OFFSET(0x116243A0)
#define MOLEMOLE_HOLLOWENTITYCONFIG_SET_CANPUSH_OFFSET UNITYSDK_OFFSET(0x11624460)
#define MOLEMOLE_HOLLOWENTITYCONFIG_SET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x11624540)
#define MOLEMOLE_HOLLOWENTITYCONFIG_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x11624720)
#define MOLEMOLE_HOLLOWENTITYCONFIG_SET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x116244A0)
#define MOLEMOLE_HOLLOWENTITYCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x11624E40)
#define MOLEMOLE_HOLLOWENTITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11624790)

namespace MoleMole
{
	inline static constexpr unsigned int HollowEntityConfig_TypeDefinitionIndex = 70052;

	class HollowEntityConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::Share::GridDir, ::MoleMole::ChessStateMachine::OnceTriggerString*>** StaticGet__moveStateNameEmpty()
		{
			return (::System::Collections::Generic::Dictionary_2<::Share::GridDir, ::MoleMole::ChessStateMachine::OnceTriggerString*>**)Il2CppClass::FromTypeDefinitionIndex(HollowEntityConfig_TypeDefinitionIndex)->GetStaticField(0x46980);
		}
		::System::String* displayName; // 0x58
		::MoleMole::ChessStateMachine::OnceTriggerString* bornTrigger; // 0x60
		::MoleMole::ChessStateMachine::OnceTriggerString* dieTrigger; // 0x68
		::MoleMole::ChessStateMachine::OnceTriggerString* idleTrigger; // 0x70
		::System::Boolean _canMove_k__BackingField; // 0x78
		::System::Collections::Generic::Dictionary_2<::Share::GridDir, ::MoleMole::ChessStateMachine::OnceTriggerString*>* _moveStateNameV2; // 0x80
		::System::Boolean _canPush_k__BackingField; // 0x88
		::System::Boolean _canBePush_k__BackingField; // 0x89
		::System::Int32 _weight_k__BackingField; // 0x8C
		::System::Boolean _canCollider_k__BackingField; // 0x90
		::Class_4_B39E1AA89D98DED2_Enum_3_B4B78138CF90752C _layer; // 0x94
		::System::Boolean _isTrigger_k__BackingField; // 0x98
		::System::Boolean _canBattle_k__BackingField; // 0x99
		::System::Int32 _hp; // 0x9C
		::System::Int32 _attack; // 0xA0
		::MoleMole::HollowEntityConfig_CampType _camp; // 0xA4
		::MoleMole::ChessStateMachine::OnceTriggerString* attackTrigger; // 0xA8
		::MoleMole::ChessStateMachine::OnceTriggerString* beHitTrigger; // 0xB0
		::System::Boolean _canMaxDeathTime_k__BackingField; // 0xB8
		::System::Int32 _maxDeathTime; // 0xBC
		::MoleMole::HollowEntityConfig_RenderPriority _priority_k__BackingField; // 0xC0
		::System::Collections::Generic::List_1<::MoleMole::TwoValue_1<::MoleMole::TwoDiffValue_2<::System::String*, ::System::Single>*>*>* CustomProperties; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWENTITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWENTITYCONFIG__CCTOR_OFFSET))();
		}

		::System::Boolean get_canMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWENTITYCONFIG_GET_CANMOVE_OFFSET))(this);
		}

		::System::Void set_canMove(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWENTITYCONFIG_SET_CANMOVE_OFFSET))(this, value);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::Share::GridDir, ::MoleMole::ChessStateMachine::OnceTriggerString*>* get_moveStateName()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::Share::GridDir, ::MoleMole::ChessStateMachine::OnceTriggerString*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWENTITYCONFIG_GET_MOVESTATENAME_OFFSET))(this);
		}

		::System::Boolean get_canPush()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWENTITYCONFIG_GET_CANPUSH_OFFSET))(this);
		}

		::System::Void set_canPush(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWENTITYCONFIG_SET_CANPUSH_OFFSET))(this, value);
		}

		::System::Boolean get_canBePush()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWENTITYCONFIG_GET_CANBEPUSH_OFFSET))(this);
		}

		::System::Void set_canBePush(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWENTITYCONFIG_SET_CANBEPUSH_OFFSET))(this, value);
		}

		::System::Int32 get_weight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWENTITYCONFIG_GET_WEIGHT_OFFSET))(this);
		}

		::System::Void set_weight(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWENTITYCONFIG_SET_WEIGHT_OFFSET))(this, value);
		}

		::System::Boolean get_canCollider()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWENTITYCONFIG_GET_CANCOLLIDER_OFFSET))(this);
		}

		::System::Void set_canCollider(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWENTITYCONFIG_SET_CANCOLLIDER_OFFSET))(this, value);
		}

		::Class_4_B39E1AA89D98DED2_Enum_3_B4B78138CF90752C get_layer()
		{
			return ((::Class_4_B39E1AA89D98DED2_Enum_3_B4B78138CF90752C(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWENTITYCONFIG_GET_LAYER_OFFSET))(this);
		}

		::System::Boolean get_isTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWENTITYCONFIG_GET_ISTRIGGER_OFFSET))(this);
		}

		::System::Void set_isTrigger(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWENTITYCONFIG_SET_ISTRIGGER_OFFSET))(this, value);
		}

		::System::Boolean get_canBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWENTITYCONFIG_GET_CANBATTLE_OFFSET))(this);
		}

		::System::Void set_canBattle(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWENTITYCONFIG_SET_CANBATTLE_OFFSET))(this, value);
		}

		::System::Int32 get_hp()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWENTITYCONFIG_GET_HP_OFFSET))(this);
		}

		::System::Int32 get_attack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWENTITYCONFIG_GET_ATTACK_OFFSET))(this);
		}

		::MoleMole::HollowEntityConfig_CampType get_camp()
		{
			return ((::MoleMole::HollowEntityConfig_CampType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWENTITYCONFIG_GET_CAMP_OFFSET))(this);
		}

		::System::Boolean get_canMaxDeathTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWENTITYCONFIG_GET_CANMAXDEATHTIME_OFFSET))(this);
		}

		::System::Void set_canMaxDeathTime(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWENTITYCONFIG_SET_CANMAXDEATHTIME_OFFSET))(this, value);
		}

		::System::Int32 get_MaxDeathTime()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWENTITYCONFIG_GET_MAXDEATHTIME_OFFSET))(this);
		}

		::MoleMole::HollowEntityConfig_RenderPriority get_priority()
		{
			return ((::MoleMole::HollowEntityConfig_RenderPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWENTITYCONFIG_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_priority(::MoleMole::HollowEntityConfig_RenderPriority value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowEntityConfig_RenderPriority))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWENTITYCONFIG_SET_PRIORITY_OFFSET))(this, value);
		}

		::System::Int32 get_renderPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWENTITYCONFIG_GET_RENDERPRIORITY_OFFSET))(this);
		}
	};
}
