#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLAYVIDEO_METHOD_3_1BDF90B2EDB7B6F8_OFFSET UNITYSDK_OFFSET(0x1D7A97D0)
#define RPG_GAMECORE_PLAYVIDEO_METHOD_3_9852B344A9FDE03D_OFFSET UNITYSDK_OFFSET(0x1D7A9780)
#define RPG_GAMECORE_PLAYVIDEO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A97C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayVideo_TypeDefinitionIndex = 20639;

	class PlayVideo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 VideoID; // 0x18
		::System::String* OverrideCaptionPath; // 0x20
		::System::Boolean IsMuteBGM; // 0x28
		::System::Boolean MuteBGMWithFadeOut; // 0x29
		::System::Boolean IsLoop; // 0x2A
		::System::Boolean WithoutChangeAudio; // 0x2B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYVIDEO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9852B344A9FDE03D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayVideo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayVideo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYVIDEO_METHOD_3_9852B344A9FDE03D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1BDF90B2EDB7B6F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayVideo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayVideo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYVIDEO_METHOD_3_1BDF90B2EDB7B6F8_OFFSET))(a1, a2);
		}
	};
}
