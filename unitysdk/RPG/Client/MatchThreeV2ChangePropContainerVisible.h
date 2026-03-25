#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_MATCHTHREEV2CHANGEPROPCONTAINERVISIBLE_METHOD_3_0CE87EFF075956C4_OFFSET UNITYSDK_OFFSET(0x16E8AFD0)
#define RPG_CLIENT_MATCHTHREEV2CHANGEPROPCONTAINERVISIBLE_METHOD_3_F3278A475339E135_OFFSET UNITYSDK_OFFSET(0x16E8B050)
#define RPG_CLIENT_MATCHTHREEV2CHANGEPROPCONTAINERVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x16E8B020)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2ChangePropContainerVisible_TypeDefinitionIndex = 9952;

	class MatchThreeV2ChangePropContainerVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean isVisible; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHANGEPROPCONTAINERVISIBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0CE87EFF075956C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::MatchThreeV2ChangePropContainerVisible*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::MatchThreeV2ChangePropContainerVisible*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHANGEPROPCONTAINERVISIBLE_METHOD_3_0CE87EFF075956C4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F3278A475339E135(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::MatchThreeV2ChangePropContainerVisible* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::MatchThreeV2ChangePropContainerVisible*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHANGEPROPCONTAINERVISIBLE_METHOD_3_F3278A475339E135_OFFSET))(a1, a2);
		}
	};
}
