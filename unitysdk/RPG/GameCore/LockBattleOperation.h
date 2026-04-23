#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleOperationType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_LOCKBATTLEOPERATION_METHOD_3_38D11BDB07730332_OFFSET UNITYSDK_OFFSET(0x18A77BC0)
#define RPG_GAMECORE_LOCKBATTLEOPERATION_METHOD_3_C3862A681EBD482D_OFFSET UNITYSDK_OFFSET(0x18A77B40)
#define RPG_GAMECORE_LOCKBATTLEOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x18A77B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockBattleOperation_TypeDefinitionIndex = 22249;

	class LockBattleOperation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsLock; // 0x18
		::Il2CppArray<::RPG::GameCore::BattleOperationType>* OperationWhiteList; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnClickLockButton; // 0x28
		::RPG::GameCore::DynamicFloat* ParamInt; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKBATTLEOPERATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C3862A681EBD482D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockBattleOperation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockBattleOperation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKBATTLEOPERATION_METHOD_3_C3862A681EBD482D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_38D11BDB07730332(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockBattleOperation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockBattleOperation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKBATTLEOPERATION_METHOD_3_38D11BDB07730332_OFFSET))(a1, a2);
		}
	};
}
