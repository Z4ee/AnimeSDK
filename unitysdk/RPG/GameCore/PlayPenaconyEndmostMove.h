#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYPENACONYENDMOSTMOVE_METHOD_3_1EAA24470C4B7649_OFFSET UNITYSDK_OFFSET(0x1D34ACD0)
#define RPG_GAMECORE_PLAYPENACONYENDMOSTMOVE_METHOD_3_C7D193E17F4B471C_OFFSET UNITYSDK_OFFSET(0x1D34AD10)
#define RPG_GAMECORE_PLAYPENACONYENDMOSTMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D34AD00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayPenaconyEndmostMove_TypeDefinitionIndex = 21580;

	class PlayPenaconyEndmostMove : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 ID; // 0x18
		::System::Int32 OffsetX; // 0x1C
		::System::Int32 OffsetY; // 0x20
		::System::Single Time; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYPENACONYENDMOSTMOVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1EAA24470C4B7649(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayPenaconyEndmostMove*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayPenaconyEndmostMove*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYPENACONYENDMOSTMOVE_METHOD_3_1EAA24470C4B7649_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C7D193E17F4B471C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayPenaconyEndmostMove* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayPenaconyEndmostMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYPENACONYENDMOSTMOVE_METHOD_3_C7D193E17F4B471C_OFFSET))(a1, a2);
		}
	};
}
