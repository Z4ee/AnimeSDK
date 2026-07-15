#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConsiderationAxisConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHECKCURRENTAIPHASEAXIS_METHOD_3_528DD7560B2ECB77_OFFSET UNITYSDK_OFFSET(0x1B72D5A0)
#define RPG_GAMECORE_CHECKCURRENTAIPHASEAXIS_METHOD_3_8FD17B09EF06DB82_OFFSET UNITYSDK_OFFSET(0x1B72D560)
#define RPG_GAMECORE_CHECKCURRENTAIPHASEAXIS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B72D590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckCurrentAIPhaseAxis_TypeDefinitionIndex = 14895;

	class CheckCurrentAIPhaseAxis : public ::RPG::GameCore::ConsiderationAxisConfig
	{
	public:
		::System::String* CurrentPhaseRef; // 0x10
		::System::String* TargetPhaseName; // 0x18
		::RPG::GameCore::FixPoint CheckScore; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKCURRENTAIPHASEAXIS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8FD17B09EF06DB82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckCurrentAIPhaseAxis*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckCurrentAIPhaseAxis*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKCURRENTAIPHASEAXIS_METHOD_3_8FD17B09EF06DB82_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_528DD7560B2ECB77(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckCurrentAIPhaseAxis* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckCurrentAIPhaseAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKCURRENTAIPHASEAXIS_METHOD_3_528DD7560B2ECB77_OFFSET))(a1, a2);
		}
	};
}
