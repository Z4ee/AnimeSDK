#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRAVITYBALLPUZZLESTART_METHOD_3_21F2AD781525EBDA_OFFSET UNITYSDK_OFFSET(0x1724CFD0)
#define RPG_GAMECORE_GRAVITYBALLPUZZLESTART_METHOD_3_45930929D7A53C26_OFFSET UNITYSDK_OFFSET(0x1724D0E0)
#define RPG_GAMECORE_GRAVITYBALLPUZZLESTART__CTOR_OFFSET UNITYSDK_OFFSET(0x1724D0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GravityBallPuzzleStart_TypeDefinitionIndex = 18673;

	class GravityBallPuzzleStart : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLPUZZLESTART__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_21F2AD781525EBDA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GravityBallPuzzleStart*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GravityBallPuzzleStart*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLPUZZLESTART_METHOD_3_21F2AD781525EBDA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_45930929D7A53C26(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GravityBallPuzzleStart* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GravityBallPuzzleStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLPUZZLESTART_METHOD_3_45930929D7A53C26_OFFSET))(a1, a2);
		}
	};
}
