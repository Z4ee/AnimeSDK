#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_OPENRAID_METHOD_3_166BD1B92EED31B4_OFFSET UNITYSDK_OFFSET(0x18BC5E40)
#define RPG_GAMECORE_OPENRAID_METHOD_3_FE8C92DF8C8FB525_OFFSET UNITYSDK_OFFSET(0x18BC5EC0)
#define RPG_GAMECORE_OPENRAID__CTOR_OFFSET UNITYSDK_OFFSET(0x18BC5E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenRaid_TypeDefinitionIndex = 20456;

	class OpenRaid : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 RaidID; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x20
		::System::Boolean IsSkipUI; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENRAID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_166BD1B92EED31B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenRaid*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenRaid*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENRAID_METHOD_3_166BD1B92EED31B4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FE8C92DF8C8FB525(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenRaid* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenRaid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENRAID_METHOD_3_FE8C92DF8C8FB525_OFFSET))(a1, a2);
		}
	};
}
