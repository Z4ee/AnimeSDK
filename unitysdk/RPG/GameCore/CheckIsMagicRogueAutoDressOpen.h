#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHECKISMAGICROGUEAUTODRESSOPEN_METHOD_3_9C9054A237E70128_OFFSET UNITYSDK_OFFSET(0x19618240)
#define RPG_GAMECORE_CHECKISMAGICROGUEAUTODRESSOPEN_METHOD_3_B7A1BB06CC3389F0_OFFSET UNITYSDK_OFFSET(0x196182C0)
#define RPG_GAMECORE_CHECKISMAGICROGUEAUTODRESSOPEN__CTOR_OFFSET UNITYSDK_OFFSET(0x19618290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckIsMagicRogueAutoDressOpen_TypeDefinitionIndex = 22969;

	class CheckIsMagicRogueAutoDressOpen : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnOpen; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnClose; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKISMAGICROGUEAUTODRESSOPEN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9C9054A237E70128(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckIsMagicRogueAutoDressOpen*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckIsMagicRogueAutoDressOpen*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKISMAGICROGUEAUTODRESSOPEN_METHOD_3_9C9054A237E70128_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B7A1BB06CC3389F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckIsMagicRogueAutoDressOpen* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckIsMagicRogueAutoDressOpen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKISMAGICROGUEAUTODRESSOPEN_METHOD_3_B7A1BB06CC3389F0_OFFSET))(a1, a2);
		}
	};
}
