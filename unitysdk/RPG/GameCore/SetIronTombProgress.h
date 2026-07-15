#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IronTombProgressMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class IronTombNormalModeThresholdConfig; }

#define RPG_GAMECORE_SETIRONTOMBPROGRESS_METHOD_3_0B69D4B14C04122C_OFFSET UNITYSDK_OFFSET(0x1C5FD6F0)
#define RPG_GAMECORE_SETIRONTOMBPROGRESS_METHOD_3_268AF5B414CD4F91_OFFSET UNITYSDK_OFFSET(0x1C5FD6A0)
#define RPG_GAMECORE_SETIRONTOMBPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FD6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetIronTombProgress_TypeDefinitionIndex = 21981;

	class SetIronTombProgress : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::IronTombProgressMode ProgressMode; // 0x18
		::RPG::GameCore::DynamicFloat* Progress; // 0x20
		::System::Single Duration; // 0x28
		::RPG::GameCore::IronTombNormalModeThresholdConfig* NormalModeThresholdConfig; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIRONTOMBPROGRESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_268AF5B414CD4F91(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetIronTombProgress*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetIronTombProgress*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIRONTOMBPROGRESS_METHOD_3_268AF5B414CD4F91_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0B69D4B14C04122C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetIronTombProgress* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetIronTombProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIRONTOMBPROGRESS_METHOD_3_0B69D4B14C04122C_OFFSET))(a1, a2);
		}
	};
}
