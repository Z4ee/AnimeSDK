#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingIconType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGPOLICYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C389330)
#define RPG_GAMECORE_CHENLINGPOLICYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C389740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingPolicyRow_TypeDefinitionIndex = 10681;

	class ChenLingPolicyRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RelatedCardList; // 0x10
		::System::String* IconPath; // 0x18
		::Il2CppArray<::System::UInt32>* SkillSoldierList; // 0x20
		::System::UInt32 SkillID; // 0x28
		::RPG::GameCore::ChenLingIconType IconType; // 0x2C
		::System::UInt32 ID; // 0x30
		::System::UInt32 Weight; // 0x34
		::RPG::Client::TextID Name; // 0x38
		::RPG::Client::TextID Desc; // 0x48
		::System::UInt32 EffectID; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGPOLICYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingPolicyRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingPolicyRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGPOLICYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
