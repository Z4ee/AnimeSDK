#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMPROCESS_METHOD_3_ABE89A853DBC5449_OFFSET UNITYSDK_OFFSET(0x1D3CC6C0)
#define RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMPROCESS_METHOD_3_DA769E4490658F3F_OFFSET UNITYSDK_OFFSET(0x1D3CC700)
#define RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMPROCESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3CC6F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLC1Dot3AdventureRoomProcess_TypeDefinitionIndex = 22029;

	class RogueDLC1Dot3AdventureRoomProcess : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPrepare; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSettleStart; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSettleResponse; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSettleFinish; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnLoginFinished; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMPROCESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ABE89A853DBC5449(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomProcess*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomProcess*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMPROCESS_METHOD_3_ABE89A853DBC5449_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DA769E4490658F3F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomProcess* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomProcess*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMPROCESS_METHOD_3_DA769E4490658F3F_OFFSET))(a1, a2);
		}
	};
}
