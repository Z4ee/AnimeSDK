#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyBuildAreaInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCAA39C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCAA3A00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER___C__GETSHOWINACTIVITYAREAINFOLIST_B__55_0_OFFSET UNITYSDK_OFFSET(0xCAA3A10)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildManager___c_TypeDefinitionIndex = 69380;

	class TrainPartyBuildManager___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*, ::System::Boolean>** StaticGet___9__55_0()
		{
			return (::System::Func_2<::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TrainPartyBuildManager___c_TypeDefinitionIndex)->GetStaticField(0x56620);
		}
		static ::RPG::Client::TrainParty::TrainPartyBuildManager___c** StaticGet___9()
		{
			return (::RPG::Client::TrainParty::TrainPartyBuildManager___c**)Il2CppClass::FromTypeDefinitionIndex(TrainPartyBuildManager___c_TypeDefinitionIndex)->GetStaticField(0x56628);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetShowInActivityAreaInfoList_b__55_0(::RPG::Client::TrainParty::TrainPartyBuildAreaInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER___C__GETSHOWINACTIVITYAREAINFOLIST_B__55_0_OFFSET))(this, a1);
		}
	};
}
