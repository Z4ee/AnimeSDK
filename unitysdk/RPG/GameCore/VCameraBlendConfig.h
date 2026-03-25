#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class VCameraBlend; }

#define RPG_GAMECORE_VCAMERABLENDCONFIG_METHOD_3_6051098174EA81C8_OFFSET UNITYSDK_OFFSET(0x178E9150)
#define RPG_GAMECORE_VCAMERABLENDCONFIG_METHOD_3_7C59C9A4E8F7B161_OFFSET UNITYSDK_OFFSET(0x178E90D0)
#define RPG_GAMECORE_VCAMERABLENDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x178E9120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraBlendConfig_TypeDefinitionIndex = 18566;

	class VCameraBlendConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::VCameraBlend* BlendConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERABLENDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7C59C9A4E8F7B161(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VCameraBlendConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VCameraBlendConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERABLENDCONFIG_METHOD_3_7C59C9A4E8F7B161_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6051098174EA81C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VCameraBlendConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VCameraBlendConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERABLENDCONFIG_METHOD_3_6051098174EA81C8_OFFSET))(a1, a2);
		}
	};
}
