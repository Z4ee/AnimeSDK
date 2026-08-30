#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PenaconyEndmostSimpleTalkData; }

#define RPG_GAMECORE_PLAYPENACONYENDMOSTSIMPLETALK_METHOD_3_09F201307237FC54_OFFSET UNITYSDK_OFFSET(0x1D7A7470)
#define RPG_GAMECORE_PLAYPENACONYENDMOSTSIMPLETALK_METHOD_3_D89A2F6C61552967_OFFSET UNITYSDK_OFFSET(0x1D7A7430)
#define RPG_GAMECORE_PLAYPENACONYENDMOSTSIMPLETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A7460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayPenaconyEndmostSimpleTalk_TypeDefinitionIndex = 21578;

	class PlayPenaconyEndmostSimpleTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PenaconyEndmostSimpleTalkData*>* SimpleTalkList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYPENACONYENDMOSTSIMPLETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D89A2F6C61552967(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayPenaconyEndmostSimpleTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayPenaconyEndmostSimpleTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYPENACONYENDMOSTSIMPLETALK_METHOD_3_D89A2F6C61552967_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_09F201307237FC54(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayPenaconyEndmostSimpleTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayPenaconyEndmostSimpleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYPENACONYENDMOSTSIMPLETALK_METHOD_3_09F201307237FC54_OFFSET))(a1, a2);
		}
	};
}
