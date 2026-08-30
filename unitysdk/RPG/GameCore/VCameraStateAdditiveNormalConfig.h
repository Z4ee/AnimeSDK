#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/VCameraState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class VCameraNormalConfig; }

#define RPG_GAMECORE_VCAMERASTATEADDITIVENORMALCONFIG_METHOD_2_7600745D5554DA06_OFFSET UNITYSDK_OFFSET(0x1D629020)
#define RPG_GAMECORE_VCAMERASTATEADDITIVENORMALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D62B020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraStateAdditiveNormalConfig_TypeDefinitionIndex = 16252;

	class VCameraStateAdditiveNormalConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ExportToJson; // 0x10
		::RPG::GameCore::VCameraState CameraState; // 0x14
		::System::Boolean NeedClear; // 0x18
		::RPG::GameCore::VCameraNormalConfig* AdditiveNormalConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERASTATEADDITIVENORMALCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7600745D5554DA06(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VCameraStateAdditiveNormalConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VCameraStateAdditiveNormalConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERASTATEADDITIVENORMALCONFIG_METHOD_2_7600745D5554DA06_OFFSET))(a1, a2);
		}
	};
}
