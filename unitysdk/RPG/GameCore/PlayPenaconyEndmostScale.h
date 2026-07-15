#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYPENACONYENDMOSTSCALE_METHOD_3_61D147E37450769A_OFFSET UNITYSDK_OFFSET(0x1BA06170)
#define RPG_GAMECORE_PLAYPENACONYENDMOSTSCALE_METHOD_3_C2024F7DAFA645CD_OFFSET UNITYSDK_OFFSET(0x1BA061B0)
#define RPG_GAMECORE_PLAYPENACONYENDMOSTSCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA061A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayPenaconyEndmostScale_TypeDefinitionIndex = 21021;

	class PlayPenaconyEndmostScale : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single Scale; // 0x18
		::System::Single Time; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYPENACONYENDMOSTSCALE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_61D147E37450769A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayPenaconyEndmostScale*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayPenaconyEndmostScale*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYPENACONYENDMOSTSCALE_METHOD_3_61D147E37450769A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C2024F7DAFA645CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayPenaconyEndmostScale* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayPenaconyEndmostScale*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYPENACONYENDMOSTSCALE_METHOD_3_C2024F7DAFA645CD_OFFSET))(a1, a2);
		}
	};
}
