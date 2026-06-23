#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_5DA2E7556103D5A3_401;
namespace System { class String; }

#define MOLEMOLE_UIHADALZONE_COMMON_RATINGROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x171FB510)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_Common_RatingRowContext_TypeDefinitionIndex = 83405;

	class UIHadalZone_Common_RatingRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* TaskText; // 0x28
		::Class_1_5DA2E7556103D5A3_401* entranceTemplate; // 0x30
		::System::Int32 rankingSeconds; // 0x38
		::System::Int32 rankingNonTimedThredshold; // 0x3C
		::System::Boolean isTimeType; // 0x40
		::System::Boolean isFinished; // 0x41
		::System::Boolean isPlayAnimAuto; // 0x42
		::System::Boolean isLose; // 0x43
		::System::Int32 maxRankingSeconds; // 0x44
		::MoleMole::Level::RatingType rankingType; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_COMMON_RATINGROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
