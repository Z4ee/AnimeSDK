#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADDGLOBALDYNAMICOFFSETIGNOREENTITY_METHOD_3_535FC3AB56A358DF_OFFSET UNITYSDK_OFFSET(0x1D6A11B0)
#define RPG_GAMECORE_ADDGLOBALDYNAMICOFFSETIGNOREENTITY_METHOD_3_DC625F6680ADA24E_OFFSET UNITYSDK_OFFSET(0x1D6A1200)
#define RPG_GAMECORE_ADDGLOBALDYNAMICOFFSETIGNOREENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A11F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddGlobalDynamicOffsetIgnoreEntity_TypeDefinitionIndex = 22261;

	class AddGlobalDynamicOffsetIgnoreEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsIgnore; // 0x18
		::System::Boolean OnlyIgnoreGlobalDynamicOffset; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGLOBALDYNAMICOFFSETIGNOREENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_535FC3AB56A358DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddGlobalDynamicOffsetIgnoreEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddGlobalDynamicOffsetIgnoreEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGLOBALDYNAMICOFFSETIGNOREENTITY_METHOD_3_535FC3AB56A358DF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DC625F6680ADA24E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddGlobalDynamicOffsetIgnoreEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddGlobalDynamicOffsetIgnoreEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGLOBALDYNAMICOFFSETIGNOREENTITY_METHOD_3_DC625F6680ADA24E_OFFSET))(a1, a2);
		}
	};
}
