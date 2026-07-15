#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADVPLAYERENTERALERTDEVICETRIGGER_METHOD_3_8C0B16DEC69F5EF4_OFFSET UNITYSDK_OFFSET(0x1BE28350)
#define RPG_GAMECORE_ADVPLAYERENTERALERTDEVICETRIGGER_METHOD_3_E30F046FFD8AFFCF_OFFSET UNITYSDK_OFFSET(0x1BE28390)
#define RPG_GAMECORE_ADVPLAYERENTERALERTDEVICETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE28380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvPlayerEnterAlertDeviceTrigger_TypeDefinitionIndex = 19550;

	class AdvPlayerEnterAlertDeviceTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERENTERALERTDEVICETRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8C0B16DEC69F5EF4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPlayerEnterAlertDeviceTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPlayerEnterAlertDeviceTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERENTERALERTDEVICETRIGGER_METHOD_3_8C0B16DEC69F5EF4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E30F046FFD8AFFCF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPlayerEnterAlertDeviceTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPlayerEnterAlertDeviceTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERENTERALERTDEVICETRIGGER_METHOD_3_E30F046FFD8AFFCF_OFFSET))(a1, a2);
		}
	};
}
