#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GLOBALMAININTENSITYEFFECT_METHOD_3_08237A1ABF92B2D3_OFFSET UNITYSDK_OFFSET(0x1D144970)
#define RPG_GAMECORE_GLOBALMAININTENSITYEFFECT_METHOD_3_859BC91E7336CC8A_OFFSET UNITYSDK_OFFSET(0x1D144930)
#define RPG_GAMECORE_GLOBALMAININTENSITYEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D144960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GlobalMainIntensityEffect_TypeDefinitionIndex = 23458;

	class GlobalMainIntensityEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsRevert; // 0x18
		::System::Boolean IsDurable; // 0x19
		::System::Single TargetIntensity; // 0x1C
		::System::Single FadeDuration; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMAININTENSITYEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_859BC91E7336CC8A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GlobalMainIntensityEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GlobalMainIntensityEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMAININTENSITYEFFECT_METHOD_3_859BC91E7336CC8A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_08237A1ABF92B2D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GlobalMainIntensityEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GlobalMainIntensityEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMAININTENSITYEFFECT_METHOD_3_08237A1ABF92B2D3_OFFSET))(a1, a2);
		}
	};
}
