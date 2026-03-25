#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelSkillEffectScope.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x170A5DD0)
#define RPG_GAMECORE_CHIMERADUELSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x170A62A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelSkillRow_TypeDefinitionIndex = 10423;

	class ChimeraDuelSkillRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* AdditionalTriggerConditionList; // 0x10
		::Il2CppArray<::System::UInt32>* TriggerEventList; // 0x18
		::System::String* AbilityJsonPath; // 0x20
		::Il2CppArray<::System::Single>* ParamList; // 0x28
		::System::UInt32 Priority; // 0x30
		::RPG::GameCore::ChimeraDuelSkillEffectScope Type; // 0x34
		::System::UInt32 SkillID; // 0x38
		::System::UInt32 SkillCD; // 0x3C
		::RPG::Client::TextID PlainDescription; // 0x40
		::System::Boolean HasDisplay; // 0x50
		::System::Boolean IsImmediate; // 0x51
		::RPG::Client::TextID Description; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSKILLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChimeraDuelSkillRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSKILLROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
