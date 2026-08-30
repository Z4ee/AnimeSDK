#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimRenderingItemStateMappingConfig; }
namespace RPG::GameCore { class FiveDimSurfaceBakedInfo; }
namespace RPG::GameCore { class FiveDimViewBakedInfo; }
namespace RPG::GameCore { class MeshBound; }
namespace RPG::GameCore { class StatisticsBakedInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_FIVEDIMBAKEDLEVELCONFIG_METHOD_2_D7A4FCA0587A890A_OFFSET UNITYSDK_OFFSET(0x1E0E28E0)
#define RPG_GAMECORE_FIVEDIMBAKEDLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0E2C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimBakedLevelConfig_TypeDefinitionIndex = 16549;

	class FiveDimBakedLevelConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FiveDimViewBakedInfo*>* ViewBakedInfos; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FiveDimSurfaceBakedInfo*>* SurfaceBakedInfos; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FiveDimViewBakedInfo*>* ViewBakedInfosByInstance; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FiveDimSurfaceBakedInfo*>* SurfaceBakedInfosByInstance; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FiveDimRenderingItemStateMappingConfig*>* RenderingItemStateMappingBakedInfos; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* GravityFieldRingBakedRadiusByInstance; // 0x38
		::RPG::GameCore::StatisticsBakedInfo* StatisticsBakedInfo; // 0x40
		::RPG::GameCore::MeshBound* LevelBound; // 0x48
		::System::Boolean DelayLoad; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBAKEDLEVELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D7A4FCA0587A890A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBakedLevelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBakedLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBAKEDLEVELCONFIG_METHOD_2_D7A4FCA0587A890A_OFFSET))(a1, a2);
		}
	};
}
