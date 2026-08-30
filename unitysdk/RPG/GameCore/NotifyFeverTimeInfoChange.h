#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FeverTimePeriodType.h"
#include "unitysdk/RPG/GameCore/FeverTimeToastType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_NOTIFYFEVERTIMEINFOCHANGE_METHOD_3_5E33D3BB38ACE999_OFFSET UNITYSDK_OFFSET(0x1CE90A20)
#define RPG_GAMECORE_NOTIFYFEVERTIMEINFOCHANGE_METHOD_3_78EA6196961A1A20_OFFSET UNITYSDK_OFFSET(0x1CE909E0)
#define RPG_GAMECORE_NOTIFYFEVERTIMEINFOCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE90A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NotifyFeverTimeInfoChange_TypeDefinitionIndex = 22989;

	class NotifyFeverTimeInfoChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FeverTimePeriodType PeriodType; // 0x18
		::RPG::GameCore::DynamicFloat* CurProgress; // 0x20
		::RPG::GameCore::DynamicFloat* MaxProgress; // 0x28
		::RPG::GameCore::DynamicFloat* ExtraCount; // 0x30
		::System::Boolean IsLimitReached; // 0x38
		::RPG::GameCore::FeverTimeToastType ToastType; // 0x3C
		::RPG::GameCore::DynamicFloat* ToastDelta; // 0x40
		::RPG::Client::TextID ToastTextID; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYFEVERTIMEINFOCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_78EA6196961A1A20(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NotifyFeverTimeInfoChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NotifyFeverTimeInfoChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYFEVERTIMEINFOCHANGE_METHOD_3_78EA6196961A1A20_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5E33D3BB38ACE999(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NotifyFeverTimeInfoChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NotifyFeverTimeInfoChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTIFYFEVERTIMEINFOCHANGE_METHOD_3_5E33D3BB38ACE999_OFFSET))(a1, a2);
		}
	};
}
