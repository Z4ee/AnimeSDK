#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHANGEPROPSTATE_METHOD_3_19B1B2310E88D52A_OFFSET UNITYSDK_OFFSET(0x187C9020)
#define RPG_GAMECORE_CHANGEPROPSTATE_METHOD_3_8969AF821CA7D9D5_OFFSET UNITYSDK_OFFSET(0x187C9090)
#define RPG_GAMECORE_CHANGEPROPSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x187C9060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangePropState_TypeDefinitionIndex = 19411;

	class ChangePropState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEPROPSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_19B1B2310E88D52A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangePropState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangePropState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEPROPSTATE_METHOD_3_19B1B2310E88D52A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8969AF821CA7D9D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangePropState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangePropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEPROPSTATE_METHOD_3_8969AF821CA7D9D5_OFFSET))(a1, a2);
		}
	};
}
