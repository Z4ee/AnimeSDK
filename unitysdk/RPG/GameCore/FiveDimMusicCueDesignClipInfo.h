#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMUSICCUEDESIGNCLIPINFO_METHOD_2_90136D0DFDA1B2CA_OFFSET UNITYSDK_OFFSET(0x1D0F5830)
#define RPG_GAMECORE_FIVEDIMMUSICCUEDESIGNCLIPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F5A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMusicCueDesignClipInfo_TypeDefinitionIndex = 18608;

	class FiveDimMusicCueDesignClipInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::String* Name; // 0x18
		::System::Int32 TrackIndex; // 0x20
		::System::Single StartTime; // 0x24
		::System::Single Duration; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUSICCUEDESIGNCLIPINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_90136D0DFDA1B2CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMusicCueDesignClipInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMusicCueDesignClipInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUSICCUEDESIGNCLIPINFO_METHOD_2_90136D0DFDA1B2CA_OFFSET))(a1, a2);
		}
	};
}
