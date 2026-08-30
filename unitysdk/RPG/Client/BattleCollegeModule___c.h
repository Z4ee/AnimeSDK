#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleCollegeGroupData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_BATTLECOLLEGEMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC8F4E80)
#define RPG_CLIENT_BATTLECOLLEGEMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC8F4EB0)
#define RPG_CLIENT_BATTLECOLLEGEMODULE___C__ISALLBATTLECOLLEGEFINISHED_B__7_0_OFFSET UNITYSDK_OFFSET(0xC8F4EC0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleCollegeModule___c_TypeDefinitionIndex = 62948;

	class BattleCollegeModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::BattleCollegeGroupData*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::BattleCollegeGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BattleCollegeModule___c_TypeDefinitionIndex)->GetStaticField(0xA860);
		}
		static ::RPG::Client::BattleCollegeModule___c** StaticGet___9()
		{
			return (::RPG::Client::BattleCollegeModule___c**)Il2CppClass::FromTypeDefinitionIndex(BattleCollegeModule___c_TypeDefinitionIndex)->GetStaticField(0xA868);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsAllBattleCollegeFinished_b__7_0(::RPG::Client::BattleCollegeGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BattleCollegeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE___C__ISALLBATTLECOLLEGEFINISHED_B__7_0_OFFSET))(this, a1);
		}
	};
}
