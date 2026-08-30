#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimVCameraBlendHint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/VCameraBlendType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FloatCurve; }

#define RPG_GAMECORE_FIVEDIMVCAMERABLENDCONFIG_METHOD_2_02E8DBF4CDCFC6EA_OFFSET UNITYSDK_OFFSET(0x1DCA79D0)
#define RPG_GAMECORE_FIVEDIMVCAMERABLENDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA9D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimVCameraBlendConfig_TypeDefinitionIndex = 18406;

	class FiveDimVCameraBlendConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::VCameraBlendType BlendType; // 0x10
		::System::Single BlendTime; // 0x14
		::RPG::GameCore::FiveDimVCameraBlendHint BlendHint; // 0x18
		::RPG::GameCore::FloatCurve* CustomCurve; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMVCAMERABLENDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_02E8DBF4CDCFC6EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimVCameraBlendConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimVCameraBlendConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMVCAMERABLENDCONFIG_METHOD_2_02E8DBF4CDCFC6EA_OFFSET))(a1, a2);
		}
	};
}
