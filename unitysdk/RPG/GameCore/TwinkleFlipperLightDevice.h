#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TWINKLEFLIPPERLIGHTDEVICE_METHOD_3_2C309C27B5AC71C1_OFFSET UNITYSDK_OFFSET(0x1B87BB00)
#define RPG_GAMECORE_TWINKLEFLIPPERLIGHTDEVICE_METHOD_3_77073F3926B55264_OFFSET UNITYSDK_OFFSET(0x1B87BA60)
#define RPG_GAMECORE_TWINKLEFLIPPERLIGHTDEVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B87BAC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TwinkleFlipperLightDevice_TypeDefinitionIndex = 21528;

	class TwinkleFlipperLightDevice : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* DevicePropTarget; // 0x18
		::RPG::GameCore::DynamicFloat* Interval; // 0x20
		::System::Boolean On; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TWINKLEFLIPPERLIGHTDEVICE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_77073F3926B55264(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TwinkleFlipperLightDevice*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TwinkleFlipperLightDevice*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TWINKLEFLIPPERLIGHTDEVICE_METHOD_3_77073F3926B55264_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2C309C27B5AC71C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TwinkleFlipperLightDevice* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TwinkleFlipperLightDevice*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TWINKLEFLIPPERLIGHTDEVICE_METHOD_3_2C309C27B5AC71C1_OFFSET))(a1, a2);
		}
	};
}
