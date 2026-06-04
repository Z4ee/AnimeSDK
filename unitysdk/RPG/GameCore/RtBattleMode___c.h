#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_17628DBDBD20BE6F;
class Class_1_D9413DC99216F54F;
namespace System { template <typename T> class Action_1; }

#define RPG_GAMECORE_RTBATTLEMODE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCE957F0)
#define RPG_GAMECORE_RTBATTLEMODE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCE95830)
#define RPG_GAMECORE_RTBATTLEMODE___C__ONPREINIT_B__83_0_OFFSET UNITYSDK_OFFSET(0xCE95840)
#define RPG_GAMECORE_RTBATTLEMODE___C__ONPREINIT_B__83_1_OFFSET UNITYSDK_OFFSET(0xCE95860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleMode___c_TypeDefinitionIndex = 50718;

	class RtBattleMode___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_D9413DC99216F54F*>** StaticGet___9__83_0()
		{
			return (::System::Action_1<::Class_1_D9413DC99216F54F*>**)Il2CppClass::FromTypeDefinitionIndex(RtBattleMode___c_TypeDefinitionIndex)->GetStaticField(0x68970);
		}
		static ::RPG::GameCore::RtBattleMode___c** StaticGet___9()
		{
			return (::RPG::GameCore::RtBattleMode___c**)Il2CppClass::FromTypeDefinitionIndex(RtBattleMode___c_TypeDefinitionIndex)->GetStaticField(0x68978);
		}
		static ::System::Action_1<::Class_1_17628DBDBD20BE6F*>** StaticGet___9__83_1()
		{
			return (::System::Action_1<::Class_1_17628DBDBD20BE6F*>**)Il2CppClass::FromTypeDefinitionIndex(RtBattleMode___c_TypeDefinitionIndex)->GetStaticField(0x68980);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnPreInit_b__83_0(::Class_1_D9413DC99216F54F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D9413DC99216F54F*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE___C__ONPREINIT_B__83_0_OFFSET))(this, a1);
		}

		::System::Void _OnPreInit_b__83_1(::Class_1_17628DBDBD20BE6F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_17628DBDBD20BE6F*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE___C__ONPREINIT_B__83_1_OFFSET))(this, a1);
		}
	};
}
