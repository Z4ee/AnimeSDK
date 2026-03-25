#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FinishActionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FINISHACTIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x171D7520)
#define RPG_GAMECORE_FINISHACTIONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x171D7680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FinishActionConfigRow_TypeDefinitionIndex = 12962;

	class FinishActionConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::FinishActionType FinishActionType; // 0x10
		::System::Boolean NeedVerseParam; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHACTIONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::FinishActionConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FinishActionConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHACTIONCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
