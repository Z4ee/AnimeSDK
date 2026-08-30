#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class VCameraBlend; }

#define RPG_GAMECORE_VCAMERABLENDCONFIG_METHOD_3_0CEA981044B2AAAB_OFFSET UNITYSDK_OFFSET(0x1D625A80)
#define RPG_GAMECORE_VCAMERABLENDCONFIG_METHOD_3_6051098174EA81C8_OFFSET UNITYSDK_OFFSET(0x1D625AC0)
#define RPG_GAMECORE_VCAMERABLENDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D625AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraBlendConfig_TypeDefinitionIndex = 20044;

	class VCameraBlendConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::VCameraBlend* BlendConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERABLENDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0CEA981044B2AAAB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VCameraBlendConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VCameraBlendConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERABLENDCONFIG_METHOD_3_0CEA981044B2AAAB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6051098174EA81C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VCameraBlendConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VCameraBlendConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERABLENDCONFIG_METHOD_3_6051098174EA81C8_OFFSET))(a1, a2);
		}
	};
}
