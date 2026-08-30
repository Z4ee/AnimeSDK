#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATCHANIMATIONGRAPHMASKLAYERCONFIG_BATCHANIMATIONNPCMASKANIMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19F1F5B0)

namespace RPG::Client
{
	inline static constexpr unsigned int BatchAnimationGraphMaskLayerConfig_BatchAnimationNPCMaskAnimConfig_TypeDefinitionIndex = 60151;

	class BatchAnimationGraphMaskLayerConfig_BatchAnimationNPCMaskAnimConfig : public ::System::Object
	{
	public:
		::System::String* BaseAnim; // 0x10
		::System::String* MaskAnim; // 0x18
		::System::String* MaskBoneMask; // 0x20
		::System::Single RandomWeight; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* PossessionList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONGRAPHMASKLAYERCONFIG_BATCHANIMATIONNPCMASKANIMCONFIG__CTOR_OFFSET))(this);
		}
	};
}
