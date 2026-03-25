#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityRank.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYRANKICONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F11D60)
#define RPG_GAMECORE_ACTIVITYRANKICONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F123E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRankIconRow_TypeDefinitionIndex = 10490;

	class ActivityRankIconRow : public ::System::Object
	{
	public:
		::System::String* CommonRankIconPath; // 0x10
		::RPG::Client::TextID Text; // 0x18
		::RPG::GameCore::ActivityRank ID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRANKICONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityRankIconRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityRankIconRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRANKICONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
