#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeSpeakerPolicy.h"
#include "unitysdk/RPG/GameCore/CakeValidAreaType.h"
#include "unitysdk/System/Object.h"

class Class_1_3745C69C00F04B7D_2;
class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKEDIALOGUERULEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18766460)
#define RPG_GAMECORE_CAKEDIALOGUERULEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x187666F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeDialogueRuleRow_TypeDefinitionIndex = 12221;

	class CakeDialogueRuleRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::CakeValidAreaType>* TypeList; // 0x10
		::Il2CppArray<::Class_1_3745C69C00F04B7D_2*>* CakeRequirementList; // 0x18
		::Il2CppArray<::System::UInt32>* CakeDialogueList; // 0x20
		::System::UInt32 ID; // 0x28
		::RPG::GameCore::CakeSpeakerPolicy SpeakerPolicy; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKEDIALOGUERULEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::CakeDialogueRuleRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeDialogueRuleRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKEDIALOGUERULEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
