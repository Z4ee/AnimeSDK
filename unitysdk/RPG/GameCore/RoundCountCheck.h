#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROUNDCOUNTCHECK_METHOD_3_84DFC81722F30E0E_OFFSET UNITYSDK_OFFSET(0x18D827C0)
#define RPG_GAMECORE_ROUNDCOUNTCHECK_METHOD_3_BC8E0082199E5059_OFFSET UNITYSDK_OFFSET(0x18D82840)
#define RPG_GAMECORE_ROUNDCOUNTCHECK__CTOR_OFFSET UNITYSDK_OFFSET(0x18D82810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoundCountCheck_TypeDefinitionIndex = 21881;

	class RoundCountCheck : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 TargetRoundCount; // 0x18
		::System::UInt32 TargetTurnCount; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROUNDCOUNTCHECK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_84DFC81722F30E0E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoundCountCheck*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoundCountCheck*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROUNDCOUNTCHECK_METHOD_3_84DFC81722F30E0E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BC8E0082199E5059(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoundCountCheck* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoundCountCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROUNDCOUNTCHECK_METHOD_3_BC8E0082199E5059_OFFSET))(a1, a2);
		}
	};
}
