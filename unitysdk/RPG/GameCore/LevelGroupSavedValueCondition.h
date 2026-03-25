#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LEVELGROUPSAVEDVALUECONDITION_METHOD_2_CCD757E74709368D_OFFSET UNITYSDK_OFFSET(0x1733A210)
#define RPG_GAMECORE_LEVELGROUPSAVEDVALUECONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1733A390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupSavedValueCondition_TypeDefinitionIndex = 15802;

	class LevelGroupSavedValueCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* SavedValueName; // 0x10
		::RPG::GameCore::CompareType Operation; // 0x18
		::System::Int16 Value; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPSAVEDVALUECONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CCD757E74709368D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelGroupSavedValueCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelGroupSavedValueCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPSAVEDVALUECONDITION_METHOD_2_CCD757E74709368D_OFFSET))(a1, a2);
		}
	};
}
