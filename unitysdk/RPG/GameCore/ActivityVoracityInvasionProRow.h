#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYVORACITYINVASIONPROROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D356DA0)
#define RPG_GAMECORE_ACTIVITYVORACITYINVASIONPROROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D356F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityVoracityInvasionProRow_TypeDefinitionIndex = 12542;

	class ActivityVoracityInvasionProRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID ProgressDes; // 0x10
		::System::Single ActivityProgress; // 0x20
		::System::UInt32 RedPoint; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYVORACITYINVASIONPROROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityVoracityInvasionProRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityVoracityInvasionProRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYVORACITYINVASIONPROROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
