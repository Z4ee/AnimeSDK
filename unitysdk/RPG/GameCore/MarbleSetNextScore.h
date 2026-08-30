#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLESETNEXTSCORE_METHOD_3_4A6E79A774318A5D_OFFSET UNITYSDK_OFFSET(0x1D4B2DD0)
#define RPG_GAMECORE_MARBLESETNEXTSCORE_METHOD_3_91C543712B5A9531_OFFSET UNITYSDK_OFFSET(0x1D4B2D00)
#define RPG_GAMECORE_MARBLESETNEXTSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B2DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSetNextScore_TypeDefinitionIndex = 16674;

	class MarbleSetNextScore : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::UInt32 Score; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETNEXTSCORE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_91C543712B5A9531(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleSetNextScore*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleSetNextScore*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETNEXTSCORE_METHOD_3_91C543712B5A9531_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4A6E79A774318A5D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleSetNextScore* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleSetNextScore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETNEXTSCORE_METHOD_3_4A6E79A774318A5D_OFFSET))(a1, a2);
		}
	};
}
