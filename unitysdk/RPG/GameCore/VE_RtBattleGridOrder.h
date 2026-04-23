#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_VE_RTBATTLEGRIDORDER_METHOD_3_667F0CD27C914E5F_OFFSET UNITYSDK_OFFSET(0x190EE410)
#define RPG_GAMECORE_VE_RTBATTLEGRIDORDER_METHOD_3_C6367DEAC0E72D04_OFFSET UNITYSDK_OFFSET(0x190EE3D0)
#define RPG_GAMECORE_VE_RTBATTLEGRIDORDER__CTOR_OFFSET UNITYSDK_OFFSET(0x190EE400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtBattleGridOrder_TypeDefinitionIndex = 23271;

	class VE_RtBattleGridOrder : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEGRIDORDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C6367DEAC0E72D04(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtBattleGridOrder*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtBattleGridOrder*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEGRIDORDER_METHOD_3_C6367DEAC0E72D04_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_667F0CD27C914E5F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtBattleGridOrder* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtBattleGridOrder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEGRIDORDER_METHOD_3_667F0CD27C914E5F_OFFSET))(a1, a2);
		}
	};
}
