#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ENTERFLIPPERLIGHTDEVICECONTROL_METHOD_3_7F7BEC30B24AB3F1_OFFSET UNITYSDK_OFFSET(0x1719DDB0)
#define RPG_GAMECORE_ENTERFLIPPERLIGHTDEVICECONTROL_METHOD_3_F8F5753BB800AF94_OFFSET UNITYSDK_OFFSET(0x1719DCE0)
#define RPG_GAMECORE_ENTERFLIPPERLIGHTDEVICECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1719DD60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnterFlipperLightDeviceControl_TypeDefinitionIndex = 20540;

	class EnterFlipperLightDeviceControl : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetDevice; // 0x18
		::System::Boolean Op; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERFLIPPERLIGHTDEVICECONTROL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F8F5753BB800AF94(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnterFlipperLightDeviceControl*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnterFlipperLightDeviceControl*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERFLIPPERLIGHTDEVICECONTROL_METHOD_3_F8F5753BB800AF94_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7F7BEC30B24AB3F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnterFlipperLightDeviceControl* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnterFlipperLightDeviceControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERFLIPPERLIGHTDEVICECONTROL_METHOD_3_7F7BEC30B24AB3F1_OFFSET))(a1, a2);
		}
	};
}
