#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SERVERSETSTABLEMOVABLE_METHOD_3_CB56E846288FCB0B_OFFSET UNITYSDK_OFFSET(0x18E06A50)
#define RPG_GAMECORE_SERVERSETSTABLEMOVABLE_METHOD_3_DA4D2F108E6953DB_OFFSET UNITYSDK_OFFSET(0x18E06AE0)
#define RPG_GAMECORE_SERVERSETSTABLEMOVABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E06AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServerSetStableMovable_TypeDefinitionIndex = 20057;

	class ServerSetStableMovable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERSETSTABLEMOVABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CB56E846288FCB0B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ServerSetStableMovable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ServerSetStableMovable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERSETSTABLEMOVABLE_METHOD_3_CB56E846288FCB0B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DA4D2F108E6953DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ServerSetStableMovable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ServerSetStableMovable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERSETSTABLEMOVABLE_METHOD_3_DA4D2F108E6953DB_OFFSET))(a1, a2);
		}
	};
}
