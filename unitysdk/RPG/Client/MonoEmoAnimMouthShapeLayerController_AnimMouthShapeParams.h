#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_ANIMMOUTHSHAPEPARAMS_GET_FULLPARAMS_OFFSET UNITYSDK_OFFSET(0x9CE85C0)
#define RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_ANIMMOUTHSHAPEPARAMS_GET_MIDDLEPARAMS_OFFSET UNITYSDK_OFFSET(0x9CE8610)
#define RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_ANIMMOUTHSHAPEPARAMS_GET_SMALLPARAMS_OFFSET UNITYSDK_OFFSET(0x9CE8660)
#define RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_ANIMMOUTHSHAPEPARAMS_GET_STOPPARAMS_OFFSET UNITYSDK_OFFSET(0x9CE86B0)
#define RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_ANIMMOUTHSHAPEPARAMS_METHOD_2_0291408F883F68BB_OFFSET UNITYSDK_OFFSET(0x9CE8780)
#define RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_ANIMMOUTHSHAPEPARAMS_METHOD_2_965753FE2B573CAF_OFFSET UNITYSDK_OFFSET(0x9CE8700)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams_TypeDefinitionIndex = 58280;

	struct alignas(4) MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams
	{
		::System::Single Full; // 0x10
		::System::Single Middle; // 0x14
		::System::Single Small; // 0x18
		::System::Single Stop; // 0x1C

		static ::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams get_FullParams()
		{
			return ((::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_ANIMMOUTHSHAPEPARAMS_GET_FULLPARAMS_OFFSET))();
		}

		static ::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams get_MiddleParams()
		{
			return ((::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_ANIMMOUTHSHAPEPARAMS_GET_MIDDLEPARAMS_OFFSET))();
		}

		static ::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams get_SmallParams()
		{
			return ((::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_ANIMMOUTHSHAPEPARAMS_GET_SMALLPARAMS_OFFSET))();
		}

		static ::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams get_StopParams()
		{
			return ((::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_ANIMMOUTHSHAPEPARAMS_GET_STOPPARAMS_OFFSET))();
		}

		static ::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams Method_2_965753FE2B573CAF(::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams a1, ::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams a2)
		{
			return ((::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams(*)(::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams, ::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_ANIMMOUTHSHAPEPARAMS_METHOD_2_965753FE2B573CAF_OFFSET))(a1, a2);
		}

		static ::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams Method_2_0291408F883F68BB(::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams a1, ::System::Single a2)
		{
			return ((::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams(*)(::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_ANIMMOUTHSHAPEPARAMS_METHOD_2_0291408F883F68BB_OFFSET))(a1, a2);
		}
	};
}
