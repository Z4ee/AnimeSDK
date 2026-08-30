#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StagePVSOfflineSamplerInfo; }
namespace System { class String; }

#define RPG_GAMECORE_STAGEPVSOFFLINEVOLUMEINFO_METHOD_2_FD7E5B02D054F4F8_OFFSET UNITYSDK_OFFSET(0x1CAE94B0)
#define RPG_GAMECORE_STAGEPVSOFFLINEVOLUMEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAE96B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StagePVSOfflineVolumeInfo_TypeDefinitionIndex = 18952;

	class StagePVSOfflineVolumeInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* VolumeName; // 0x10
		::Il2CppArray<::RPG::GameCore::StagePVSOfflineSamplerInfo*>* AutoGenSamplers; // 0x18
		::Il2CppArray<::RPG::GameCore::StagePVSOfflineSamplerInfo*>* RandomSearchSamplers; // 0x20
		::Il2CppArray<::RPG::GameCore::StagePVSOfflineSamplerInfo*>* CustomSamplers; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINEVOLUMEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FD7E5B02D054F4F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StagePVSOfflineVolumeInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StagePVSOfflineVolumeInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINEVOLUMEINFO_METHOD_2_FD7E5B02D054F4F8_OFFSET))(a1, a2);
		}
	};
}
