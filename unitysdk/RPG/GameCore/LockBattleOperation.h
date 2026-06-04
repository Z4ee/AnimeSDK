#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleOperationType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_LOCKBATTLEOPERATION_METHOD_3_A45C83D506FBA5BF_OFFSET UNITYSDK_OFFSET(0x198AB0A0)
#define RPG_GAMECORE_LOCKBATTLEOPERATION_METHOD_3_FACA45671BD6E5AE_OFFSET UNITYSDK_OFFSET(0x198AB120)
#define RPG_GAMECORE_LOCKBATTLEOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x198AB0F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockBattleOperation_TypeDefinitionIndex = 22008;

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

		static ::System::Void Method_3_A45C83D506FBA5BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockBattleOperation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockBattleOperation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKBATTLEOPERATION_METHOD_3_A45C83D506FBA5BF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FACA45671BD6E5AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockBattleOperation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockBattleOperation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKBATTLEOPERATION_METHOD_3_FACA45671BD6E5AE_OFFSET))(a1, a2);
		}
	};
}
