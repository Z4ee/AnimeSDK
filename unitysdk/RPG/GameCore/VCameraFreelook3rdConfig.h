#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class VCameraFloatChangeParam; }
namespace RPG::GameCore { class VCameraFreelook3rdBaseChangeParam; }
namespace RPG::GameCore { class VCameraVector3ChangeParam; }

#define RPG_GAMECORE_VCAMERAFREELOOK3RDCONFIG_METHOD_2_3EE7CD93788F55D2_OFFSET UNITYSDK_OFFSET(0x190E97F0)
#define RPG_GAMECORE_VCAMERAFREELOOK3RDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x190EBF90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraFreelook3rdConfig_TypeDefinitionIndex = 15528;

	class VCameraFreelook3rdConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ExportToJson; // 0x10
		::RPG::GameCore::VCameraFreelook3rdBaseChangeParam* BaseChangeParam; // 0x18
		::RPG::GameCore::VCameraFloatChangeParam* FOVChangeParam; // 0x20
		::RPG::GameCore::VCameraFloatChangeParam* ZoomChangeParam; // 0x28
		::RPG::GameCore::VCameraFloatChangeParam* AxisYChangeParam; // 0x30
		::RPG::GameCore::VCameraVector3ChangeParam* DampChangeParam; // 0x38
		::System::Int32 DampChangeParamPriority; // 0x40
		::RPG::GameCore::VCameraVector3ChangeParam* LookAtOffsetChangeParam; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERAFREELOOK3RDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3EE7CD93788F55D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VCameraFreelook3rdConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VCameraFreelook3rdConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERAFREELOOK3RDCONFIG_METHOD_2_3EE7CD93788F55D2_OFFSET))(a1, a2);
		}
	};
}
