#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVMODIFIERLISTENPHOTOGRAPH_METHOD_3_03F7671B4C7DFF8C_OFFSET UNITYSDK_OFFSET(0x194292E0)
#define RPG_GAMECORE_ADVMODIFIERLISTENPHOTOGRAPH_METHOD_3_A107B8A0DCA72F14_OFFSET UNITYSDK_OFFSET(0x19429360)
#define RPG_GAMECORE_ADVMODIFIERLISTENPHOTOGRAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x19429330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvModifierListenPhotograph_TypeDefinitionIndex = 20527;

	class AdvModifierListenPhotograph : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* StartPhotoGraphCallback; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ExitPhotoGraphCallback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVMODIFIERLISTENPHOTOGRAPH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_03F7671B4C7DFF8C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvModifierListenPhotograph*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvModifierListenPhotograph*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVMODIFIERLISTENPHOTOGRAPH_METHOD_3_03F7671B4C7DFF8C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A107B8A0DCA72F14(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvModifierListenPhotograph* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvModifierListenPhotograph*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVMODIFIERLISTENPHOTOGRAPH_METHOD_3_A107B8A0DCA72F14_OFFSET))(a1, a2);
		}
	};
}
