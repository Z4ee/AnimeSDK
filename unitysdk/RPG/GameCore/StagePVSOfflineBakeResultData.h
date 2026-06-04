#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StagePVSOfflineLightInfo; }
namespace RPG::GameCore { class StagePVSOfflineSceneItemInfo; }
namespace RPG::GameCore { class StagePVSOfflineVolumeResult; }
namespace System { class String; }

#define RPG_GAMECORE_STAGEPVSOFFLINEBAKERESULTDATA_METHOD_2_A6E2A2CD77D71179_OFFSET UNITYSDK_OFFSET(0x19CACC60)
#define RPG_GAMECORE_STAGEPVSOFFLINEBAKERESULTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19CACED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StagePVSOfflineBakeResultData_TypeDefinitionIndex = 18203;

	class StagePVSOfflineBakeResultData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 DataVersion; // 0x10
		::Il2CppArray<::System::String*>* ObjLod0Paths; // 0x18
		::Il2CppArray<::RPG::GameCore::StagePVSOfflineSceneItemInfo*>* SceneObjInfos; // 0x20
		::Il2CppArray<::RPG::GameCore::StagePVSOfflineLightInfo*>* LightInfos; // 0x28
		::Il2CppArray<::RPG::GameCore::StagePVSOfflineVolumeResult*>* VolumeResult; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINEBAKERESULTDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A6E2A2CD77D71179(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StagePVSOfflineBakeResultData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StagePVSOfflineBakeResultData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINEBAKERESULTDATA_METHOD_2_A6E2A2CD77D71179_OFFSET))(a1, a2);
		}
	};
}
