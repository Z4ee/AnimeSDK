#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMPROCESS_METHOD_3_4F63129483793E8D_OFFSET UNITYSDK_OFFSET(0x18CFCF40)
#define RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMPROCESS_METHOD_3_F0F2BDD767BBE57D_OFFSET UNITYSDK_OFFSET(0x18CFCEC0)
#define RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMPROCESS__CTOR_OFFSET UNITYSDK_OFFSET(0x18CFCF10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLC1Dot3AdventureRoomProcess_TypeDefinitionIndex = 21154;

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

		static ::System::Void Method_3_F0F2BDD767BBE57D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomProcess*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomProcess*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMPROCESS_METHOD_3_F0F2BDD767BBE57D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4F63129483793E8D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomProcess* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomProcess*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMPROCESS_METHOD_3_4F63129483793E8D_OFFSET))(a1, a2);
		}
	};
}
