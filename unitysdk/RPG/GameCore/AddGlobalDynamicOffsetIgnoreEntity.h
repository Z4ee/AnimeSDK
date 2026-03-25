#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADDGLOBALDYNAMICOFFSETIGNOREENTITY_METHOD_3_0DF8316F6E3A4359_OFFSET UNITYSDK_OFFSET(0x16F1D230)
#define RPG_GAMECORE_ADDGLOBALDYNAMICOFFSETIGNOREENTITY_METHOD_3_80104E0B49051E60_OFFSET UNITYSDK_OFFSET(0x16F1D1B0)
#define RPG_GAMECORE_ADDGLOBALDYNAMICOFFSETIGNOREENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x16F1D200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddGlobalDynamicOffsetIgnoreEntity_TypeDefinitionIndex = 20696;

	class AddGlobalDynamicOffsetIgnoreEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsIgnore; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGLOBALDYNAMICOFFSETIGNOREENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_80104E0B49051E60(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddGlobalDynamicOffsetIgnoreEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddGlobalDynamicOffsetIgnoreEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGLOBALDYNAMICOFFSETIGNOREENTITY_METHOD_3_80104E0B49051E60_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0DF8316F6E3A4359(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddGlobalDynamicOffsetIgnoreEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddGlobalDynamicOffsetIgnoreEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGLOBALDYNAMICOFFSETIGNOREENTITY_METHOD_3_0DF8316F6E3A4359_OFFSET))(a1, a2);
		}
	};
}
