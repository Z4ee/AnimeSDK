#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPCREATEDBATTLEEVENT_METHOD_3_47D924735506932E_OFFSET UNITYSDK_OFFSET(0x19D12D90)
#define RPG_GAMECORE_TARGETMAPCREATEDBATTLEEVENT_METHOD_3_4DF4965030F2B6C9_OFFSET UNITYSDK_OFFSET(0x19D12DD0)
#define RPG_GAMECORE_TARGETMAPCREATEDBATTLEEVENT_METHOD_3_89B37CFD8F3B084F_OFFSET UNITYSDK_OFFSET(0x19D12D30)
#define RPG_GAMECORE_TARGETMAPCREATEDBATTLEEVENT_METHOD_3_BFCB717AF3AAC8C2_OFFSET UNITYSDK_OFFSET(0x19D12C70)
#define RPG_GAMECORE_TARGETMAPCREATEDBATTLEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19D12D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapCreatedBattleEvent_TypeDefinitionIndex = 22614;

	class TargetMapCreatedBattleEvent : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCREATEDBATTLEEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BFCB717AF3AAC8C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapCreatedBattleEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapCreatedBattleEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCREATEDBATTLEEVENT_METHOD_3_BFCB717AF3AAC8C2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_89B37CFD8F3B084F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapCreatedBattleEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapCreatedBattleEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCREATEDBATTLEEVENT_METHOD_3_89B37CFD8F3B084F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_47D924735506932E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCreatedBattleEvent*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCreatedBattleEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCREATEDBATTLEEVENT_METHOD_3_47D924735506932E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4DF4965030F2B6C9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCreatedBattleEvent* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCreatedBattleEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCREATEDBATTLEEVENT_METHOD_3_4DF4965030F2B6C9_OFFSET))(a1, a2);
		}
	};
}
