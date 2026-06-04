#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenIncidentType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_B1429A4347DAE014;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHIPPLENINCIDENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x193EDBD0)
#define RPG_GAMECORE_ACTIVITYHIPPLENINCIDENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x193EDE50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenIncidentRow_TypeDefinitionIndex = 11137;

	class ActivityHipplenIncidentRow : public ::System::Object
	{
	public:
		::System::String* PerformanceJsonConfigPath; // 0x10
		::Il2CppArray<::System::UInt32>* ExpectedBasicList; // 0x18
		::Il2CppArray<::Class_1_B1429A4347DAE014*>* EffectList; // 0x20
		::Il2CppArray<::System::Single>* ExpectedRatioProbability; // 0x28
		::RPG::GameCore::HipplenIncidentType Type; // 0x30
		::System::UInt32 ID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENINCIDENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityHipplenIncidentRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityHipplenIncidentRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENINCIDENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
