#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TEAMMATEATTACKFORMATIONCONFIG_METHOD_2_44E60777AA9E8DAD_OFFSET UNITYSDK_OFFSET(0x19092780)
#define RPG_GAMECORE_TEAMMATEATTACKFORMATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19092920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeammateAttackFormationConfig_TypeDefinitionIndex = 16203;

	class TeammateAttackFormationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 FormationIndexA; // 0x10
		::System::Int32 FormationIndexB; // 0x14
		::System::String* FormationName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMMATEATTACKFORMATIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_44E60777AA9E8DAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeammateAttackFormationConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeammateAttackFormationConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMMATEATTACKFORMATIONCONFIG_METHOD_2_44E60777AA9E8DAD_OFFSET))(a1, a2);
		}
	};
}
