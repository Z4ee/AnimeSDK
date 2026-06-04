#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWGUIDEEVOLVETALK_METHOD_3_6C776FA3A13698A0_OFFSET UNITYSDK_OFFSET(0x19C7C3D0)
#define RPG_GAMECORE_SHOWGUIDEEVOLVETALK_METHOD_3_997526CEF10C7817_OFFSET UNITYSDK_OFFSET(0x19C7C350)
#define RPG_GAMECORE_SHOWGUIDEEVOLVETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x19C7C3A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowGuideEvolveTalk_TypeDefinitionIndex = 23001;

	class ShowGuideEvolveTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* TalkIDList; // 0x18
		::System::UInt32 Season; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDEEVOLVETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_997526CEF10C7817(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowGuideEvolveTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowGuideEvolveTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDEEVOLVETALK_METHOD_3_997526CEF10C7817_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6C776FA3A13698A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowGuideEvolveTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowGuideEvolveTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDEEVOLVETALK_METHOD_3_6C776FA3A13698A0_OFFSET))(a1, a2);
		}
	};
}
