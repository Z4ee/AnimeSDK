#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MARBLESEALSKILLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18AA7360)
#define RPG_GAMECORE_MARBLESEALSKILLCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18AA76D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSealSkillConfigRow_TypeDefinitionIndex = 11294;

	class MarbleSealSkillConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* SkillParamList; // 0x18
		::System::UInt32 SkillHintType; // 0x20
		::System::UInt32 GroupID; // 0x24
		::RPG::Client::TextID SkillName; // 0x28
		::RPG::Client::TextID SkillDesc; // 0x38
		::System::UInt32 ID; // 0x48
		::System::UInt32 Level; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALSKILLCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MarbleSealSkillConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleSealSkillConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALSKILLCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
