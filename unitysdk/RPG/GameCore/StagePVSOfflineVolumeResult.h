#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StagePVSOfflineSamplerResult; }
namespace System { class String; }

#define RPG_GAMECORE_STAGEPVSOFFLINEVOLUMERESULT_METHOD_2_D632BA74E4200C03_OFFSET UNITYSDK_OFFSET(0x1D55BB10)
#define RPG_GAMECORE_STAGEPVSOFFLINEVOLUMERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D55BD10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StagePVSOfflineVolumeResult_TypeDefinitionIndex = 18959;

	class StagePVSOfflineVolumeResult : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* VolumeName; // 0x10
		::Il2CppArray<::RPG::GameCore::StagePVSOfflineSamplerResult*>* AutoGenResults; // 0x18
		::Il2CppArray<::RPG::GameCore::StagePVSOfflineSamplerResult*>* RandomSearchResults; // 0x20
		::Il2CppArray<::RPG::GameCore::StagePVSOfflineSamplerResult*>* CustomResults; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINEVOLUMERESULT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D632BA74E4200C03(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StagePVSOfflineVolumeResult*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StagePVSOfflineVolumeResult*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINEVOLUMERESULT_METHOD_2_D632BA74E4200C03_OFFSET))(a1, a2);
		}
	};
}
