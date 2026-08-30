#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/QuestFinishType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FINISHTYPECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E0DC4B0)
#define RPG_GAMECORE_FINISHTYPECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0DC610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FinishTypeConfigRow_TypeDefinitionIndex = 14051;

	class FinishTypeConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::QuestFinishType FinishType; // 0x10
		::System::Boolean NeedVerseParam; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHTYPECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FinishTypeConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FinishTypeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHTYPECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
