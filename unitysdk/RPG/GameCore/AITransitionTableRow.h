#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AITRANSITIONTABLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16E92390)
#define RPG_GAMECORE_AITRANSITIONTABLEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16E924E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AITransitionTableRow_TypeDefinitionIndex = 14184;

	class AITransitionTableRow : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* FromDecision; // 0x10
		::Il2CppArray<::System::String*>* AvailableDecisions; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AITRANSITIONTABLEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AITransitionTableRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AITransitionTableRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AITRANSITIONTABLEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
