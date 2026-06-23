#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/NPCCrowd/AI/AttractorCommonConfig.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCCROWD_AI_ALLATTRACTORSCONFIGASSETSO__CTOR_OFFSET UNITYSDK_OFFSET(0x10296C70)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AllAttractorsConfigAssetSO_TypeDefinitionIndex = 40455;

	class AllAttractorsConfigAssetSO : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::NPCCrowd::AI::AttractorCommonConfig config; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetPath>* attractorsPath; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ALLATTRACTORSCONFIGASSETSO__CTOR_OFFSET))(this);
		}
	};
}
