#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_MAZECHARACTERMOVECONFIG_METHOD_2_EF65A3EAFDF27FD1_OFFSET UNITYSDK_OFFSET(0x1AF47C20)
#define RPG_GAMECORE_MAZECHARACTERMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF47D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeCharacterMoveConfig_TypeDefinitionIndex = 16918;

	class MazeCharacterMoveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnStartRushMove; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEndRushMove; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECHARACTERMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EF65A3EAFDF27FD1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MazeCharacterMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazeCharacterMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECHARACTERMOVECONFIG_METHOD_2_EF65A3EAFDF27FD1_OFFSET))(a1, a2);
		}
	};
}
