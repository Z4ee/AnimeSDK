#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SyncAnimWithBgmChapterConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SYNCANIMWITHBGM_METHOD_3_24816393E1FEC5C1_OFFSET UNITYSDK_OFFSET(0x19CE9080)
#define RPG_GAMECORE_SYNCANIMWITHBGM_METHOD_3_6F5806A55307A664_OFFSET UNITYSDK_OFFSET(0x19CE9000)
#define RPG_GAMECORE_SYNCANIMWITHBGM__CTOR_OFFSET UNITYSDK_OFFSET(0x19CE9050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SyncAnimWithBgm_TypeDefinitionIndex = 21166;

	class SyncAnimWithBgm : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* BGMStateName; // 0x18
		::System::Single BPM; // 0x20
		::Il2CppArray<::RPG::GameCore::SyncAnimWithBgmChapterConfig*>* ChapterConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCANIMWITHBGM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6F5806A55307A664(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SyncAnimWithBgm*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SyncAnimWithBgm*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCANIMWITHBGM_METHOD_3_6F5806A55307A664_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_24816393E1FEC5C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SyncAnimWithBgm* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SyncAnimWithBgm*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCANIMWITHBGM_METHOD_3_24816393E1FEC5C1_OFFSET))(a1, a2);
		}
	};
}
