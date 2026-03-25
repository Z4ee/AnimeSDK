#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLEARACTIONCOUNTDOWN_METHOD_3_24B80B2593869A41_OFFSET UNITYSDK_OFFSET(0x170B1620)
#define RPG_GAMECORE_CLEARACTIONCOUNTDOWN_METHOD_3_ED4FD0769637654D_OFFSET UNITYSDK_OFFSET(0x170B1510)
#define RPG_GAMECORE_CLEARACTIONCOUNTDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x170B15F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearActionCountDown_TypeDefinitionIndex = 21485;

	class ClearActionCountDown : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARACTIONCOUNTDOWN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ED4FD0769637654D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearActionCountDown*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearActionCountDown*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARACTIONCOUNTDOWN_METHOD_3_ED4FD0769637654D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_24B80B2593869A41(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearActionCountDown* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearActionCountDown*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARACTIONCOUNTDOWN_METHOD_3_24B80B2593869A41_OFFSET))(a1, a2);
		}
	};
}
