#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TWINKLEFLIPPERLIGHTDEVICE_METHOD_3_2C309C27B5AC71C1_OFFSET UNITYSDK_OFFSET(0x178DFC40)
#define RPG_GAMECORE_TWINKLEFLIPPERLIGHTDEVICE_METHOD_3_78D73FDE4C79BEED_OFFSET UNITYSDK_OFFSET(0x178DFB60)
#define RPG_GAMECORE_TWINKLEFLIPPERLIGHTDEVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x178DFBE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TwinkleFlipperLightDevice_TypeDefinitionIndex = 20535;

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

		static ::System::Void Method_3_78D73FDE4C79BEED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TwinkleFlipperLightDevice*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TwinkleFlipperLightDevice*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TWINKLEFLIPPERLIGHTDEVICE_METHOD_3_78D73FDE4C79BEED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2C309C27B5AC71C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TwinkleFlipperLightDevice* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TwinkleFlipperLightDevice*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TWINKLEFLIPPERLIGHTDEVICE_METHOD_3_2C309C27B5AC71C1_OFFSET))(a1, a2);
		}
	};
}
