#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GETGAPSECONDSFORSYNCWITHBGM_METHOD_3_761FA8CC22AD826B_OFFSET UNITYSDK_OFFSET(0x1C5BB060)
#define RPG_GAMECORE_GETGAPSECONDSFORSYNCWITHBGM_METHOD_3_F7A1D71D3B452B01_OFFSET UNITYSDK_OFFSET(0x1C5BB020)
#define RPG_GAMECORE_GETGAPSECONDSFORSYNCWITHBGM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5BB050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GetGapSecondsForSyncWithBgm_TypeDefinitionIndex = 22012;

	class GetGapSecondsForSyncWithBgm : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FixPoint SecondsPerBeat; // 0x18
		::RPG::GameCore::FixPoint MaxGapTime; // 0x20
		::RPG::GameCore::FixPoint TimeToSyncBeat; // 0x28
		::RPG::GameCore::DynamicValueContextScope DVContextScope; // 0x30
		::System::String* StateDelayDynamicKey; // 0x38
		::System::String* GapTimeDynamicKey; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GETGAPSECONDSFORSYNCWITHBGM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F7A1D71D3B452B01(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GetGapSecondsForSyncWithBgm*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GetGapSecondsForSyncWithBgm*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GETGAPSECONDSFORSYNCWITHBGM_METHOD_3_F7A1D71D3B452B01_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_761FA8CC22AD826B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GetGapSecondsForSyncWithBgm* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GetGapSecondsForSyncWithBgm*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GETGAPSECONDSFORSYNCWITHBGM_METHOD_3_761FA8CC22AD826B_OFFSET))(a1, a2);
		}
	};
}
