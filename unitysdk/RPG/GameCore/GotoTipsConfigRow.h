#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ConditionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GOTOTIPSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1724B8B0)
#define RPG_GAMECORE_GOTOTIPSCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1724BED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GotoTipsConfigRow_TypeDefinitionIndex = 12176;

	class GotoTipsConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::ConditionType ID; // 0x10
		::RPG::Client::TextID Name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOTOTIPSCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GotoTipsConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GotoTipsConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOTOTIPSCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
