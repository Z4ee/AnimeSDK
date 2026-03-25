#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MARBLESEALSKILLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17399300)
#define RPG_GAMECORE_MARBLESEALSKILLCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17399670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSealSkillConfigRow_TypeDefinitionIndex = 10890;

	class MarbleSealSkillConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* SkillParamList; // 0x18
		::RPG::Client::TextID SkillDesc; // 0x20
		::System::UInt32 Level; // 0x30
		::System::UInt32 ID; // 0x34
		::System::UInt32 GroupID; // 0x38
		::System::UInt32 SkillHintType; // 0x3C
		::RPG::Client::TextID SkillName; // 0x40

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
