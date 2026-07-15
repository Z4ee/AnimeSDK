#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EFootIKMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_UPDATEMONSTERFOOTIKMODE_METHOD_3_08A25BE316AA0B29_OFFSET UNITYSDK_OFFSET(0x1B885630)
#define RPG_GAMECORE_UPDATEMONSTERFOOTIKMODE_METHOD_3_C3E51B37E7CF5FEC_OFFSET UNITYSDK_OFFSET(0x1B8855F0)
#define RPG_GAMECORE_UPDATEMONSTERFOOTIKMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B885620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UpdateMonsterFootIKMode_TypeDefinitionIndex = 21608;

	class UpdateMonsterFootIKMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean FromHitAngle; // 0x18
		::RPG::GameCore::EFootIKMode NewIKMode; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UPDATEMONSTERFOOTIKMODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C3E51B37E7CF5FEC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UpdateMonsterFootIKMode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UpdateMonsterFootIKMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UPDATEMONSTERFOOTIKMODE_METHOD_3_C3E51B37E7CF5FEC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_08A25BE316AA0B29(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UpdateMonsterFootIKMode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UpdateMonsterFootIKMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UPDATEMONSTERFOOTIKMODE_METHOD_3_08A25BE316AA0B29_OFFSET))(a1, a2);
		}
	};
}
