#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STAGEAUTOGENCONFIG_METHOD_2_0D7A7B70E0FAA5FE_OFFSET UNITYSDK_OFFSET(0x177639B0)
#define RPG_GAMECORE_STAGEAUTOGENCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17763C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageAutoGenConfig_TypeDefinitionIndex = 17551;

	class StageAutoGenConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean CullingDataIsNew; // 0x10
		::System::Boolean UseIRIVolumeReuse; // 0x11
		::System::Int32 LightBlockSceneHash; // 0x14
		::System::String* PVSMetaDataPath; // 0x18
		::System::Int32 PVSSamplerVersion; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEAUTOGENCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0D7A7B70E0FAA5FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageAutoGenConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageAutoGenConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEAUTOGENCONFIG_METHOD_2_0D7A7B70E0FAA5FE_OFFSET))(a1, a2);
		}
	};
}
