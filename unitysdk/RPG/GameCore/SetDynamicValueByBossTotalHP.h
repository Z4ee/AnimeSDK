#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYBOSSTOTALHP_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1E81AE50)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBOSSTOTALHP_METHOD_4_1FC70F2CD80EBE8C_OFFSET UNITYSDK_OFFSET(0x1E81AC00)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBOSSTOTALHP_METHOD_4_EAB6ABE7F7E6995D_OFFSET UNITYSDK_OFFSET(0x1E81ABB0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBOSSTOTALHP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E81ABF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByBossTotalHP_TypeDefinitionIndex = 22515;

	class SetDynamicValueByBossTotalHP : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TargetEvaluator* BossTargetType; // 0x28
		::System::Boolean CalcAllWaveBoss; // 0x30
		::RPG::GameCore::MonsterRank MinRank; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBOSSTOTALHP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EAB6ABE7F7E6995D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByBossTotalHP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByBossTotalHP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBOSSTOTALHP_METHOD_4_EAB6ABE7F7E6995D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1FC70F2CD80EBE8C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByBossTotalHP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByBossTotalHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBOSSTOTALHP_METHOD_4_1FC70F2CD80EBE8C_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBOSSTOTALHP_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
