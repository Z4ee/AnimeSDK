#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimMusicEventInfo; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMUSICCUEINFO_METHOD_2_632778D06A6ACEE9_OFFSET UNITYSDK_OFFSET(0x171FEFF0)
#define RPG_GAMECORE_FIVEDIMMUSICCUEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x171FF1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMusicCueInfo_TypeDefinitionIndex = 17268;

	class FiveDimMusicCueInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* CueName; // 0x10
		::System::Single Time; // 0x18
		::Il2CppArray<::RPG::GameCore::FiveDimMusicEventInfo*>* EventInfos; // 0x20
		::System::String* CueGUID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUSICCUEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_632778D06A6ACEE9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMusicCueInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMusicCueInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUSICCUEINFO_METHOD_2_632778D06A6ACEE9_OFFSET))(a1, a2);
		}
	};
}
