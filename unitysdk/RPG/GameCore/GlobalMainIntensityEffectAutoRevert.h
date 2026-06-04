#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GLOBALMAININTENSITYEFFECTAUTOREVERT_METHOD_3_062B4C9387FBEBD4_OFFSET UNITYSDK_OFFSET(0x197D05B0)
#define RPG_GAMECORE_GLOBALMAININTENSITYEFFECTAUTOREVERT_METHOD_3_F5823287AD12521F_OFFSET UNITYSDK_OFFSET(0x197D0630)
#define RPG_GAMECORE_GLOBALMAININTENSITYEFFECTAUTOREVERT__CTOR_OFFSET UNITYSDK_OFFSET(0x197D0600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GlobalMainIntensityEffectAutoRevert_TypeDefinitionIndex = 21276;

	class GlobalMainIntensityEffectAutoRevert : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single FadeIn; // 0x18
		::System::Single FadeOut; // 0x1C
		::System::Single Duration; // 0x20
		::System::Single TargetIntensity; // 0x24
		::System::Boolean ByEntity; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMAININTENSITYEFFECTAUTOREVERT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_062B4C9387FBEBD4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GlobalMainIntensityEffectAutoRevert*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GlobalMainIntensityEffectAutoRevert*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMAININTENSITYEFFECTAUTOREVERT_METHOD_3_062B4C9387FBEBD4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F5823287AD12521F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GlobalMainIntensityEffectAutoRevert* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GlobalMainIntensityEffectAutoRevert*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMAININTENSITYEFFECTAUTOREVERT_METHOD_3_F5823287AD12521F_OFFSET))(a1, a2);
		}
	};
}
