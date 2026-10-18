#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleCompare.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MARBLEBYTEAMONFIELDCOUNT_METHOD_4_757814DBEFCA50F3_OFFSET UNITYSDK_OFFSET(0x1D80DA90)
#define RPG_GAMECORE_MARBLEBYTEAMONFIELDCOUNT_METHOD_4_EA2C97C440CDB8F3_OFFSET UNITYSDK_OFFSET(0x1D80DA30)
#define RPG_GAMECORE_MARBLEBYTEAMONFIELDCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D80DA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByTeamOnFieldCount_TypeDefinitionIndex = 16891;

	class MarbleByTeamOnFieldCount : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x28
		::RPG::GameCore::MarbleCompare CompareType; // 0x2C
		::System::Int32 Value; // 0x30
		::System::String* ValueDynamic; // 0x38
		::System::Boolean RequireCasterOnField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYTEAMONFIELDCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EA2C97C440CDB8F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByTeamOnFieldCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByTeamOnFieldCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYTEAMONFIELDCOUNT_METHOD_4_EA2C97C440CDB8F3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_757814DBEFCA50F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByTeamOnFieldCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByTeamOnFieldCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYTEAMONFIELDCOUNT_METHOD_4_757814DBEFCA50F3_OFFSET))(a1, a2);
		}
	};
}
