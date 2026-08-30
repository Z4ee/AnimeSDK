#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StagePVSOfflineVolumeInfo; }

#define RPG_GAMECORE_STAGEPVSOFFLINEBAKESAMPLERDATA_METHOD_2_E73237E37779ECDD_OFFSET UNITYSDK_OFFSET(0x1D55AC50)
#define RPG_GAMECORE_STAGEPVSOFFLINEBAKESAMPLERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D55ADC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StagePVSOfflineBakeSamplerData_TypeDefinitionIndex = 18954;

	class StagePVSOfflineBakeSamplerData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 DataVersion; // 0x10
		::Il2CppArray<::RPG::GameCore::StagePVSOfflineVolumeInfo*>* VolumeInfos; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINEBAKESAMPLERDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E73237E37779ECDD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StagePVSOfflineBakeSamplerData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StagePVSOfflineBakeSamplerData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINEBAKESAMPLERDATA_METHOD_2_E73237E37779ECDD_OFFSET))(a1, a2);
		}
	};
}
