#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StreamingVolumeComponentData.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STREAMINGSCENEOBJLODSCALEVOLUMECOMPONENTDATA_METHOD_4_4F5CE8ECBBD2B693_OFFSET UNITYSDK_OFFSET(0x1B0B6CF0)
#define RPG_GAMECORE_STREAMINGSCENEOBJLODSCALEVOLUMECOMPONENTDATA_METHOD_4_6E7E724F7791EC7E_OFFSET UNITYSDK_OFFSET(0x1B0B6A20)
#define RPG_GAMECORE_STREAMINGSCENEOBJLODSCALEVOLUMECOMPONENTDATA_METHOD_4_82A3B6C6D358BD20_OFFSET UNITYSDK_OFFSET(0x1B0B62B0)
#define RPG_GAMECORE_STREAMINGSCENEOBJLODSCALEVOLUMECOMPONENTDATA_METHOD_4_D2C950494B18C093_OFFSET UNITYSDK_OFFSET(0x1B41EEA0)
#define RPG_GAMECORE_STREAMINGSCENEOBJLODSCALEVOLUMECOMPONENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B41F200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StreamingSceneObjLodScaleVolumeComponentData_TypeDefinitionIndex = 18376;

	class StreamingSceneObjLodScaleVolumeComponentData : public ::RPG::GameCore::StreamingVolumeComponentData
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Single>* SceneObjLodScale; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* FullSceneObjLodScale; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGSCENEOBJLODSCALEVOLUMECOMPONENTDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4F5CE8ECBBD2B693(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGSCENEOBJLODSCALEVOLUMECOMPONENTDATA_METHOD_4_4F5CE8ECBBD2B693_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_82A3B6C6D358BD20(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGSCENEOBJLODSCALEVOLUMECOMPONENTDATA_METHOD_4_82A3B6C6D358BD20_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6E7E724F7791EC7E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGSCENEOBJLODSCALEVOLUMECOMPONENTDATA_METHOD_4_6E7E724F7791EC7E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D2C950494B18C093(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGSCENEOBJLODSCALEVOLUMECOMPONENTDATA_METHOD_4_D2C950494B18C093_OFFSET))(a1, a2);
		}
	};
}
