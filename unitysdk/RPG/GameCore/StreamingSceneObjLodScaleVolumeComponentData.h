#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StreamingVolumeComponentData.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STREAMINGSCENEOBJLODSCALEVOLUMECOMPONENTDATA_METHOD_4_4F5CE8ECBBD2B693_OFFSET UNITYSDK_OFFSET(0x19CC5270)
#define RPG_GAMECORE_STREAMINGSCENEOBJLODSCALEVOLUMECOMPONENTDATA_METHOD_4_82A3B6C6D358BD20_OFFSET UNITYSDK_OFFSET(0x19CC52B0)
#define RPG_GAMECORE_STREAMINGSCENEOBJLODSCALEVOLUMECOMPONENTDATA_METHOD_4_ABCF25C23CA18A7C_OFFSET UNITYSDK_OFFSET(0x19CC53E0)
#define RPG_GAMECORE_STREAMINGSCENEOBJLODSCALEVOLUMECOMPONENTDATA_METHOD_4_F5CD8A98B749FD69_OFFSET UNITYSDK_OFFSET(0x19CC5410)
#define RPG_GAMECORE_STREAMINGSCENEOBJLODSCALEVOLUMECOMPONENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19CC52A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StreamingSceneObjLodScaleVolumeComponentData_TypeDefinitionIndex = 18143;

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

		static ::System::Void Method_4_ABCF25C23CA18A7C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGSCENEOBJLODSCALEVOLUMECOMPONENTDATA_METHOD_4_ABCF25C23CA18A7C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F5CD8A98B749FD69(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGSCENEOBJLODSCALEVOLUMECOMPONENTDATA_METHOD_4_F5CD8A98B749FD69_OFFSET))(a1, a2);
		}
	};
}
