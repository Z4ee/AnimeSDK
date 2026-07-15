#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ENTERFLIPPERLIGHTDEVICECONTROL_METHOD_3_7F7BEC30B24AB3F1_OFFSET UNITYSDK_OFFSET(0x1C052900)
#define RPG_GAMECORE_ENTERFLIPPERLIGHTDEVICECONTROL_METHOD_3_CD6384A8D70CA69D_OFFSET UNITYSDK_OFFSET(0x1C052860)
#define RPG_GAMECORE_ENTERFLIPPERLIGHTDEVICECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0528C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnterFlipperLightDeviceControl_TypeDefinitionIndex = 21533;

	class EnterFlipperLightDeviceControl : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetDevice; // 0x18
		::System::Boolean Op; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERFLIPPERLIGHTDEVICECONTROL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CD6384A8D70CA69D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnterFlipperLightDeviceControl*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnterFlipperLightDeviceControl*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERFLIPPERLIGHTDEVICECONTROL_METHOD_3_CD6384A8D70CA69D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7F7BEC30B24AB3F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnterFlipperLightDeviceControl* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnterFlipperLightDeviceControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERFLIPPERLIGHTDEVICECONTROL_METHOD_3_7F7BEC30B24AB3F1_OFFSET))(a1, a2);
		}
	};
}
