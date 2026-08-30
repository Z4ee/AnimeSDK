#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SERVERMASCOTCHANGECOINCOUNT_METHOD_3_11A96AF3651E9E5F_OFFSET UNITYSDK_OFFSET(0x1D4DDF00)
#define RPG_GAMECORE_SERVERMASCOTCHANGECOINCOUNT_METHOD_3_7AF30EAF529139DB_OFFSET UNITYSDK_OFFSET(0x1D4DDEB0)
#define RPG_GAMECORE_SERVERMASCOTCHANGECOINCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4DDEF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServerMascotChangeCoinCount_TypeDefinitionIndex = 21022;

	class ServerMascotChangeCoinCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERMASCOTCHANGECOINCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7AF30EAF529139DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ServerMascotChangeCoinCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ServerMascotChangeCoinCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERMASCOTCHANGECOINCOUNT_METHOD_3_7AF30EAF529139DB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_11A96AF3651E9E5F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ServerMascotChangeCoinCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ServerMascotChangeCoinCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERMASCOTCHANGECOINCOUNT_METHOD_3_11A96AF3651E9E5F_OFFSET))(a1, a2);
		}
	};
}
