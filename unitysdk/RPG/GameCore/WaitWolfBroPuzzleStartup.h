#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITWOLFBROPUZZLESTARTUP_METHOD_3_1E60118EDB88E0EE_OFFSET UNITYSDK_OFFSET(0x179088B0)
#define RPG_GAMECORE_WAITWOLFBROPUZZLESTARTUP_METHOD_3_FFFDD2D9CB6F36ED_OFFSET UNITYSDK_OFFSET(0x17908940)
#define RPG_GAMECORE_WAITWOLFBROPUZZLESTARTUP__CTOR_OFFSET UNITYSDK_OFFSET(0x17908910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitWolfBroPuzzleStartup_TypeDefinitionIndex = 20169;

	class WaitWolfBroPuzzleStartup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single Timeout; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* SuccessSequence; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FailSequence; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITWOLFBROPUZZLESTARTUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1E60118EDB88E0EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitWolfBroPuzzleStartup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitWolfBroPuzzleStartup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITWOLFBROPUZZLESTARTUP_METHOD_3_1E60118EDB88E0EE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FFFDD2D9CB6F36ED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitWolfBroPuzzleStartup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitWolfBroPuzzleStartup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITWOLFBROPUZZLESTARTUP_METHOD_3_FFFDD2D9CB6F36ED_OFFSET))(a1, a2);
		}
	};
}
