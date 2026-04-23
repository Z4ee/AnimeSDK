#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REMOVEASSISTAVATAR_METHOD_3_6A58B51F1BC718C1_OFFSET UNITYSDK_OFFSET(0x18CA2920)
#define RPG_GAMECORE_REMOVEASSISTAVATAR_METHOD_3_F63A31B6F5BE6DD5_OFFSET UNITYSDK_OFFSET(0x18CA2A30)
#define RPG_GAMECORE_REMOVEASSISTAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x18CA2A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveAssistAvatar_TypeDefinitionIndex = 19506;

	class RemoveAssistAvatar : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEASSISTAVATAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6A58B51F1BC718C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveAssistAvatar*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveAssistAvatar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEASSISTAVATAR_METHOD_3_6A58B51F1BC718C1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F63A31B6F5BE6DD5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveAssistAvatar* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveAssistAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEASSISTAVATAR_METHOD_3_F63A31B6F5BE6DD5_OFFSET))(a1, a2);
		}
	};
}
