#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicStringList; }

#define RPG_GAMECORE_INITFLIPPERLIGHTDEVICE_METHOD_3_2F02B865DE09D6AC_OFFSET UNITYSDK_OFFSET(0x1D21D750)
#define RPG_GAMECORE_INITFLIPPERLIGHTDEVICE_METHOD_3_6BA956175BD6AFE2_OFFSET UNITYSDK_OFFSET(0x1D21D7A0)
#define RPG_GAMECORE_INITFLIPPERLIGHTDEVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D21D790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InitFlipperLightDevice_TypeDefinitionIndex = 22090;

	class InitFlipperLightDevice : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicStringList* PointList; // 0x18
		::RPG::GameCore::DynamicStringList* MappingList; // 0x20
		::System::Boolean Static; // 0x28
		::RPG::GameCore::DynamicFloat* OverrideLightTurnOnTime; // 0x30
		::RPG::GameCore::DynamicFloat* OverrideLightRotateSpeed; // 0x38
		::RPG::GameCore::DynamicFloat* OverrideLightBeamRangeDistance; // 0x40
		::RPG::GameCore::DynamicFloat* OverrideLightBeamFadeStartDistance; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITFLIPPERLIGHTDEVICE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2F02B865DE09D6AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InitFlipperLightDevice*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InitFlipperLightDevice*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITFLIPPERLIGHTDEVICE_METHOD_3_2F02B865DE09D6AC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6BA956175BD6AFE2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InitFlipperLightDevice* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InitFlipperLightDevice*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITFLIPPERLIGHTDEVICE_METHOD_3_6BA956175BD6AFE2_OFFSET))(a1, a2);
		}
	};
}
