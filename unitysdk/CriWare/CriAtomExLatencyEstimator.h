#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExLatencyEstimator_EstimatorInfo.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIATOMEXLATENCYESTIMATOR_FINALIZEMODULE_OFFSET UNITYSDK_OFFSET(0x164C5D30)
#define CRIWARE_CRIATOMEXLATENCYESTIMATOR_GETCURRENTINFO_OFFSET UNITYSDK_OFFSET(0x164C5D40)
#define CRIWARE_CRIATOMEXLATENCYESTIMATOR_INITIALIZEMODULE_OFFSET UNITYSDK_OFFSET(0x164C5D20)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExLatencyEstimator_TypeDefinitionIndex = 38709;

	class CriAtomExLatencyEstimator : public ::System::Object
	{
	public:
		static ::System::Void InitializeModule()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXLATENCYESTIMATOR_INITIALIZEMODULE_OFFSET))();
		}

		static ::System::Void FinalizeModule()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXLATENCYESTIMATOR_FINALIZEMODULE_OFFSET))();
		}

		static ::CriWare::CriAtomExLatencyEstimator_EstimatorInfo GetCurrentInfo()
		{
			return ((::CriWare::CriAtomExLatencyEstimator_EstimatorInfo(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXLATENCYESTIMATOR_GETCURRENTINFO_OFFSET))();
		}
	};
}
