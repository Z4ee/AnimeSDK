#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleCollegeAimData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_BATTLECOLLEGEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9195200)
#define RPG_CLIENT_BATTLECOLLEGEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9195240)
#define RPG_CLIENT_BATTLECOLLEGEDATA___C__GETFIRSTUNFINISHEDAIMDATA_B__4_0_OFFSET UNITYSDK_OFFSET(0x9195250)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleCollegeData___c_TypeDefinitionIndex = 51027;

	class BattleCollegeData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::BattleCollegeData___c** StaticGet___9()
		{
			return (::RPG::Client::BattleCollegeData___c**)Il2CppClass::FromTypeDefinitionIndex(BattleCollegeData___c_TypeDefinitionIndex)->GetStaticField(0x405B0);
		}
		static ::System::Func_2<::RPG::Client::BattleCollegeAimData*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::Client::BattleCollegeAimData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BattleCollegeData___c_TypeDefinitionIndex)->GetStaticField(0x405B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetFirstUnfinishedAimData_b__4_0(::RPG::Client::BattleCollegeAimData* aimData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BattleCollegeAimData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEDATA___C__GETFIRSTUNFINISHEDAIMDATA_B__4_0_OFFSET))(this, aimData);
		}
	};
}
