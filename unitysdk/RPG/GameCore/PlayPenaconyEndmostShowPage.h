#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLAYPENACONYENDMOSTSHOWPAGE_METHOD_3_94D2FDC4C4A58D19_OFFSET UNITYSDK_OFFSET(0x18C10A20)
#define RPG_GAMECORE_PLAYPENACONYENDMOSTSHOWPAGE_METHOD_3_9D6A08083FCFEBCB_OFFSET UNITYSDK_OFFSET(0x18C109A0)
#define RPG_GAMECORE_PLAYPENACONYENDMOSTSHOWPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18C109F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayPenaconyEndmostShowPage_TypeDefinitionIndex = 20679;

	class PlayPenaconyEndmostShowPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 ID; // 0x18
		::System::Int32 OffsetX; // 0x1C
		::System::Int32 OffsetY; // 0x20
		::System::Single Scale; // 0x24
		::Il2CppArray<::System::UInt32>* CustomHideEndMostIDs; // 0x28
		::System::String* DisplayPath; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYPENACONYENDMOSTSHOWPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9D6A08083FCFEBCB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayPenaconyEndmostShowPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayPenaconyEndmostShowPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYPENACONYENDMOSTSHOWPAGE_METHOD_3_9D6A08083FCFEBCB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_94D2FDC4C4A58D19(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayPenaconyEndmostShowPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayPenaconyEndmostShowPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYPENACONYENDMOSTSHOWPAGE_METHOD_3_94D2FDC4C4A58D19_OFFSET))(a1, a2);
		}
	};
}
