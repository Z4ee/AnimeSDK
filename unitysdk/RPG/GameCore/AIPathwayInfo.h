#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PatrolType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AIPATHWAYINFO_METHOD_2_C21C846FDF7E66F0_OFFSET UNITYSDK_OFFSET(0x185F1AD0)
#define RPG_GAMECORE_AIPATHWAYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x185F1CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIPathwayInfo_TypeDefinitionIndex = 16349;

	class AIPathwayInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean UseOwnerGroup; // 0x10
		::System::UInt32 UseGroup; // 0x14
		::System::UInt32 UseID; // 0x18
		::RPG::GameCore::PatrolType Type; // 0x1C
		::System::UInt32 StartAt; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIPATHWAYINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C21C846FDF7E66F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIPathwayInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIPathwayInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIPATHWAYINFO_METHOD_2_C21C846FDF7E66F0_OFFSET))(a1, a2);
		}
	};
}
