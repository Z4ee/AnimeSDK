#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETPROGRESS_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x18E1DA10)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETPROGRESS_METHOD_4_0C621928E42A7E4E_OFFSET UNITYSDK_OFFSET(0x18E1D730)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETPROGRESS_METHOD_4_9A2EB539ED1C2F52_OFFSET UNITYSDK_OFFSET(0x18E1D800)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x18E1D7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByBattleTargetProgress_TypeDefinitionIndex = 22134;

	class SetDynamicValueByBattleTargetProgress : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::DynamicFloat* BattleTargetID; // 0x18
		::System::String* CurrentProgressKey; // 0x20
		::System::String* TotalProgressKey; // 0x28
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETPROGRESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0C621928E42A7E4E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByBattleTargetProgress*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByBattleTargetProgress*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETPROGRESS_METHOD_4_0C621928E42A7E4E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9A2EB539ED1C2F52(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByBattleTargetProgress* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByBattleTargetProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETPROGRESS_METHOD_4_9A2EB539ED1C2F52_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETPROGRESS_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
