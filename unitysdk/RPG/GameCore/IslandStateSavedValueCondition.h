#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ISLANDSTATESAVEDVALUECONDITION_METHOD_2_062FF7EBE42549AF_OFFSET UNITYSDK_OFFSET(0x172C1BA0)
#define RPG_GAMECORE_ISLANDSTATESAVEDVALUECONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x172C1D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IslandStateSavedValueCondition_TypeDefinitionIndex = 17546;

	class IslandStateSavedValueCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* SavedValueName; // 0x10
		::RPG::GameCore::CompareType Operation; // 0x18
		::System::Int16 Value; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ISLANDSTATESAVEDVALUECONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_062FF7EBE42549AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IslandStateSavedValueCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IslandStateSavedValueCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ISLANDSTATESAVEDVALUECONDITION_METHOD_2_062FF7EBE42549AF_OFFSET))(a1, a2);
		}
	};
}
