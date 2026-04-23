#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GAMECORECONFIGPATHINFO_METHOD_2_8CEC2AC6B4B6A1D6_OFFSET UNITYSDK_OFFSET(0x18947E30)
#define RPG_GAMECORE_GAMECORECONFIGPATHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18951ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameCoreConfigPathInfo_TypeDefinitionIndex = 16220;

	class GameCoreConfigPathInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* DirectoryPaths; // 0x10
		::Il2CppArray<::System::String*>* FilePaths; // 0x18
		::Il2CppArray<::System::String*>* WhiteDirectoryPaths; // 0x20
		::Il2CppArray<::System::String*>* WhiteFilePaths; // 0x28
		::Il2CppArray<::System::String*>* FightDirectoryPaths; // 0x30
		::Il2CppArray<::System::String*>* FightFilePaths; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGPATHINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8CEC2AC6B4B6A1D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GameCoreConfigPathInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GameCoreConfigPathInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGPATHINFO_METHOD_2_8CEC2AC6B4B6A1D6_OFFSET))(a1, a2);
		}
	};
}
