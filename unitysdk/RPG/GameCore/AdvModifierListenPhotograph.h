#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVMODIFIERLISTENPHOTOGRAPH_METHOD_3_B42DE3B710F2DFCE_OFFSET UNITYSDK_OFFSET(0x16F33620)
#define RPG_GAMECORE_ADVMODIFIERLISTENPHOTOGRAPH_METHOD_3_F95FB9A08E0340E2_OFFSET UNITYSDK_OFFSET(0x16F335A0)
#define RPG_GAMECORE_ADVMODIFIERLISTENPHOTOGRAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x16F335F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvModifierListenPhotograph_TypeDefinitionIndex = 19913;

	class AdvModifierListenPhotograph : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* StartPhotoGraphCallback; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ExitPhotoGraphCallback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVMODIFIERLISTENPHOTOGRAPH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F95FB9A08E0340E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvModifierListenPhotograph*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvModifierListenPhotograph*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVMODIFIERLISTENPHOTOGRAPH_METHOD_3_F95FB9A08E0340E2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B42DE3B710F2DFCE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvModifierListenPhotograph* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvModifierListenPhotograph*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVMODIFIERLISTENPHOTOGRAPH_METHOD_3_B42DE3B710F2DFCE_OFFSET))(a1, a2);
		}
	};
}
