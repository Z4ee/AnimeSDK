#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_SWITCHOVERRIDECONTROLLER_METHOD_3_A7D50C8CA9209F66_OFFSET UNITYSDK_OFFSET(0x17797BB0)
#define RPG_GAMECORE_SWITCHOVERRIDECONTROLLER_METHOD_3_B109BFD407E4A86F_OFFSET UNITYSDK_OFFSET(0x17797C30)
#define RPG_GAMECORE_SWITCHOVERRIDECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17797C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchOverrideController_TypeDefinitionIndex = 20957;

	class SwitchOverrideController : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsReset; // 0x18
		::RPG::GameCore::DynamicString* Name; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHOVERRIDECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A7D50C8CA9209F66(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchOverrideController*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchOverrideController*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHOVERRIDECONTROLLER_METHOD_3_A7D50C8CA9209F66_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B109BFD407E4A86F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchOverrideController* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchOverrideController*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHOVERRIDECONTROLLER_METHOD_3_B109BFD407E4A86F_OFFSET))(a1, a2);
		}
	};
}
