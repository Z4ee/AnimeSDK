#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/LevelGroupAtmosphereLoadCondition.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LEVELGROUPATMOSPHERESAVEDVALUECONDITION_METHOD_3_CFB4B92B38FA3875_OFFSET UNITYSDK_OFFSET(0x1C116DF0)
#define RPG_GAMECORE_LEVELGROUPATMOSPHERESAVEDVALUECONDITION_METHOD_3_F711879EE5A4674C_OFFSET UNITYSDK_OFFSET(0x1C116840)
#define RPG_GAMECORE_LEVELGROUPATMOSPHERESAVEDVALUECONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C116830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupAtmosphereSavedValueCondition_TypeDefinitionIndex = 17020;

	class LevelGroupAtmosphereSavedValueCondition : public ::RPG::GameCore::LevelGroupAtmosphereLoadCondition
	{
	public:
		::System::String* SavedValueName; // 0x10
		::RPG::GameCore::CompareType Operation; // 0x18
		::System::Int16 Value; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPATMOSPHERESAVEDVALUECONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CFB4B92B38FA3875(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelGroupAtmosphereSavedValueCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelGroupAtmosphereSavedValueCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPATMOSPHERESAVEDVALUECONDITION_METHOD_3_CFB4B92B38FA3875_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F711879EE5A4674C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelGroupAtmosphereSavedValueCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelGroupAtmosphereSavedValueCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPATMOSPHERESAVEDVALUECONDITION_METHOD_3_F711879EE5A4674C_OFFSET))(a1, a2);
		}
	};
}
