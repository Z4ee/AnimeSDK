#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITWOLFBROPUZZLESTARTUP_METHOD_3_C83AC6124C722FF7_OFFSET UNITYSDK_OFFSET(0x1D6AFF30)
#define RPG_GAMECORE_WAITWOLFBROPUZZLESTARTUP_METHOD_3_FDFA7FF0D59EB8CE_OFFSET UNITYSDK_OFFSET(0x1D6AFF80)
#define RPG_GAMECORE_WAITWOLFBROPUZZLESTARTUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AFF70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitWolfBroPuzzleStartup_TypeDefinitionIndex = 21746;

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

		static ::System::Void Method_3_C83AC6124C722FF7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitWolfBroPuzzleStartup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitWolfBroPuzzleStartup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITWOLFBROPUZZLESTARTUP_METHOD_3_C83AC6124C722FF7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FDFA7FF0D59EB8CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitWolfBroPuzzleStartup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitWolfBroPuzzleStartup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITWOLFBROPUZZLESTARTUP_METHOD_3_FDFA7FF0D59EB8CE_OFFSET))(a1, a2);
		}
	};
}
