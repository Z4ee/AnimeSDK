#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CREATEMONSTERINGROUP_METHOD_3_9E87037E165AF638_OFFSET UNITYSDK_OFFSET(0x19682CA0)
#define RPG_GAMECORE_CREATEMONSTERINGROUP_METHOD_3_E50691D86145C3AF_OFFSET UNITYSDK_OFFSET(0x19682D10)
#define RPG_GAMECORE_CREATEMONSTERINGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x19682CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateMonsterInGroup_TypeDefinitionIndex = 19223;

	class CreateMonsterInGroup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEMONSTERINGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9E87037E165AF638(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateMonsterInGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateMonsterInGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEMONSTERINGROUP_METHOD_3_9E87037E165AF638_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E50691D86145C3AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateMonsterInGroup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateMonsterInGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEMONSTERINGROUP_METHOD_3_E50691D86145C3AF_OFFSET))(a1, a2);
		}
	};
}
