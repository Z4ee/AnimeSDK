#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackTotalDamageSumAlgo.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYATTACKDAMAGEDATA_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1E819870)
#define RPG_GAMECORE_SETDYNAMICVALUEBYATTACKDAMAGEDATA_METHOD_4_46AA7ECDD53029DC_OFFSET UNITYSDK_OFFSET(0x1E819610)
#define RPG_GAMECORE_SETDYNAMICVALUEBYATTACKDAMAGEDATA_METHOD_4_BC02C2C1238B0549_OFFSET UNITYSDK_OFFSET(0x1E819650)
#define RPG_GAMECORE_SETDYNAMICVALUEBYATTACKDAMAGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E819640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByAttackDamageData_TypeDefinitionIndex = 23326;

	class SetDynamicValueByAttackDamageData : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::AttackTotalDamageSumAlgo SumAlgorithm; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYATTACKDAMAGEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_46AA7ECDD53029DC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByAttackDamageData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByAttackDamageData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYATTACKDAMAGEDATA_METHOD_4_46AA7ECDD53029DC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BC02C2C1238B0549(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByAttackDamageData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByAttackDamageData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYATTACKDAMAGEDATA_METHOD_4_BC02C2C1238B0549_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYATTACKDAMAGEDATA_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
