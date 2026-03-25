#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SAVEMESSAGE_METHOD_3_5126076E00495685_OFFSET UNITYSDK_OFFSET(0x1769A750)
#define RPG_GAMECORE_SAVEMESSAGE_METHOD_3_A4331D6A922EFAC4_OFFSET UNITYSDK_OFFSET(0x1769A7D0)
#define RPG_GAMECORE_SAVEMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1769A7A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SaveMessage_TypeDefinitionIndex = 19163;

	class SaveMessage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MessageSectionID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SAVEMESSAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5126076E00495685(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SaveMessage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SaveMessage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SAVEMESSAGE_METHOD_3_5126076E00495685_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A4331D6A922EFAC4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SaveMessage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SaveMessage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SAVEMESSAGE_METHOD_3_A4331D6A922EFAC4_OFFSET))(a1, a2);
		}
	};
}
