#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_CREATEBATTLETARGET_METHOD_3_847C54109A37DF66_OFFSET UNITYSDK_OFFSET(0x19681AE0)
#define RPG_GAMECORE_CREATEBATTLETARGET_METHOD_3_CE8740B6AD3BED22_OFFSET UNITYSDK_OFFSET(0x19681B60)
#define RPG_GAMECORE_CREATEBATTLETARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x19681B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateBattleTarget_TypeDefinitionIndex = 21922;

	class CreateBattleTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* BattleTargetID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLETARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_847C54109A37DF66(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateBattleTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateBattleTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLETARGET_METHOD_3_847C54109A37DF66_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CE8740B6AD3BED22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateBattleTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateBattleTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLETARGET_METHOD_3_CE8740B6AD3BED22_OFFSET))(a1, a2);
		}
	};
}
