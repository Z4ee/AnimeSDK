#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHECKISMAGICROGUEAUTODRESSOPEN_METHOD_3_C15F99A378853062_OFFSET UNITYSDK_OFFSET(0x17075740)
#define RPG_GAMECORE_CHECKISMAGICROGUEAUTODRESSOPEN_METHOD_3_D61B20C629EA6626_OFFSET UNITYSDK_OFFSET(0x170756C0)
#define RPG_GAMECORE_CHECKISMAGICROGUEAUTODRESSOPEN__CTOR_OFFSET UNITYSDK_OFFSET(0x17075710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckIsMagicRogueAutoDressOpen_TypeDefinitionIndex = 22335;

	class CheckIsMagicRogueAutoDressOpen : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnOpen; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnClose; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKISMAGICROGUEAUTODRESSOPEN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D61B20C629EA6626(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckIsMagicRogueAutoDressOpen*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckIsMagicRogueAutoDressOpen*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKISMAGICROGUEAUTODRESSOPEN_METHOD_3_D61B20C629EA6626_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C15F99A378853062(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckIsMagicRogueAutoDressOpen* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckIsMagicRogueAutoDressOpen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKISMAGICROGUEAUTODRESSOPEN_METHOD_3_C15F99A378853062_OFFSET))(a1, a2);
		}
	};
}
