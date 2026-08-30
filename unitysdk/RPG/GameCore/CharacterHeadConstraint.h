#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHARACTERHEADCONSTRAINT_METHOD_2_EEE7245AC9EB9767_OFFSET UNITYSDK_OFFSET(0x1CF96E20)
#define RPG_GAMECORE_CHARACTERHEADCONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF96F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterHeadConstraint_TypeDefinitionIndex = 20625;

	class CharacterHeadConstraint : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single YawMax; // 0x10
		::System::Single PitchMax; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHEADCONSTRAINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EEE7245AC9EB9767(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterHeadConstraint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterHeadConstraint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHEADCONSTRAINT_METHOD_2_EEE7245AC9EB9767_OFFSET))(a1, a2);
		}
	};
}
