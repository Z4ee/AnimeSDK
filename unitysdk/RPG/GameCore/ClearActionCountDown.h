#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLEARACTIONCOUNTDOWN_METHOD_3_24B80B2593869A41_OFFSET UNITYSDK_OFFSET(0x1E347120)
#define RPG_GAMECORE_CLEARACTIONCOUNTDOWN_METHOD_3_43A41CFDECBE72C4_OFFSET UNITYSDK_OFFSET(0x1E347050)
#define RPG_GAMECORE_CLEARACTIONCOUNTDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E347110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearActionCountDown_TypeDefinitionIndex = 22991;

	class ClearActionCountDown : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARACTIONCOUNTDOWN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_43A41CFDECBE72C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearActionCountDown*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearActionCountDown*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARACTIONCOUNTDOWN_METHOD_3_43A41CFDECBE72C4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_24B80B2593869A41(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearActionCountDown* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearActionCountDown*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARACTIONCOUNTDOWN_METHOD_3_24B80B2593869A41_OFFSET))(a1, a2);
		}
	};
}
