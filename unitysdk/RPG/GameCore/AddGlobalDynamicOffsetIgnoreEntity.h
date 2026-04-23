#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADDGLOBALDYNAMICOFFSETIGNOREENTITY_METHOD_3_4C8DF3AB0EF33FE7_OFFSET UNITYSDK_OFFSET(0x1863F320)
#define RPG_GAMECORE_ADDGLOBALDYNAMICOFFSETIGNOREENTITY_METHOD_3_DC625F6680ADA24E_OFFSET UNITYSDK_OFFSET(0x1863F3A0)
#define RPG_GAMECORE_ADDGLOBALDYNAMICOFFSETIGNOREENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1863F370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddGlobalDynamicOffsetIgnoreEntity_TypeDefinitionIndex = 21393;

	class AddGlobalDynamicOffsetIgnoreEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsIgnore; // 0x18
		::System::Boolean OnlyIgnoreGlobalDynamicOffset; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGLOBALDYNAMICOFFSETIGNOREENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4C8DF3AB0EF33FE7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddGlobalDynamicOffsetIgnoreEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddGlobalDynamicOffsetIgnoreEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGLOBALDYNAMICOFFSETIGNOREENTITY_METHOD_3_4C8DF3AB0EF33FE7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DC625F6680ADA24E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddGlobalDynamicOffsetIgnoreEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddGlobalDynamicOffsetIgnoreEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGLOBALDYNAMICOFFSETIGNOREENTITY_METHOD_3_DC625F6680ADA24E_OFFSET))(a1, a2);
		}
	};
}
