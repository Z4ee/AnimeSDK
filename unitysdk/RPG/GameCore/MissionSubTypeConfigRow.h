#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MainMissionSubType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MISSIONSUBTYPECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AF6CF10)
#define RPG_GAMECORE_MISSIONSUBTYPECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF6D550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionSubTypeConfigRow_TypeDefinitionIndex = 13627;

	class MissionSubTypeConfigRow : public ::System::Object
	{
	public:
		::System::String* ShowIconPath; // 0x10
		::RPG::GameCore::MainMissionSubType Type; // 0x18
		::System::UInt32 TypePriority; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONSUBTYPECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MissionSubTypeConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MissionSubTypeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONSUBTYPECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
