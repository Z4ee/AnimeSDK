#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_CHALLENGEGENERALCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B7106E0)
#define RPG_GAMECORE_CHALLENGEGENERALCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B710D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeGeneralConfigRow_TypeDefinitionIndex = 12447;

	class ChallengeGeneralConfigRow : public ::System::Object
	{
	public:
		::System::String* TabImgPath; // 0x10
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* GuideConditions; // 0x18
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* PreConditions; // 0x20
		::RPG::GameCore::ChallengeGroupType ChallengeGroupType; // 0x28
		::System::UInt32 EarlyAccessContentID; // 0x2C
		::System::UInt32 GotoID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGENERALCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChallengeGeneralConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChallengeGeneralConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGENERALCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
