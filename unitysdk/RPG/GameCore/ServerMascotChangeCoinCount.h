#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SERVERMASCOTCHANGECOINCOUNT_METHOD_3_11A96AF3651E9E5F_OFFSET UNITYSDK_OFFSET(0x18E06740)
#define RPG_GAMECORE_SERVERMASCOTCHANGECOINCOUNT_METHOD_3_5A2A33E2BDF975CF_OFFSET UNITYSDK_OFFSET(0x18E066B0)
#define RPG_GAMECORE_SERVERMASCOTCHANGECOINCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x18E06710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServerMascotChangeCoinCount_TypeDefinitionIndex = 20241;

	class ServerMascotChangeCoinCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERMASCOTCHANGECOINCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5A2A33E2BDF975CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ServerMascotChangeCoinCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ServerMascotChangeCoinCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERMASCOTCHANGECOINCOUNT_METHOD_3_5A2A33E2BDF975CF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_11A96AF3651E9E5F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ServerMascotChangeCoinCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ServerMascotChangeCoinCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERMASCOTCHANGECOINCOUNT_METHOD_3_11A96AF3651E9E5F_OFFSET))(a1, a2);
		}
	};
}
