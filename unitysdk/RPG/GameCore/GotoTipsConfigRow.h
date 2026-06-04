#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ConditionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GOTOTIPSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x197D3770)
#define RPG_GAMECORE_GOTOTIPSCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x197D3DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GotoTipsConfigRow_TypeDefinitionIndex = 12699;

	class GotoTipsConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Name; // 0x10
		::RPG::GameCore::ConditionType ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOTOTIPSCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GotoTipsConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GotoTipsConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOTOTIPSCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
