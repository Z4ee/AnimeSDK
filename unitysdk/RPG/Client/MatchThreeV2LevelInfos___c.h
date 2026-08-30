#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeV2LevelData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MATCHTHREEV2LEVELINFOS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C99AE20)
#define RPG_CLIENT_MATCHTHREEV2LEVELINFOS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C99AE50)
#define RPG_CLIENT_MATCHTHREEV2LEVELINFOS___C__GETREQUIREDSUBMISSIONIDS_B__7_0_OFFSET UNITYSDK_OFFSET(0x1C99AE60)
#define RPG_CLIENT_MATCHTHREEV2LEVELINFOS___C__GETREQUIREDSUBMISSIONIDS_B__7_1_OFFSET UNITYSDK_OFFSET(0x1C99AE80)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2LevelInfos___c_TypeDefinitionIndex = 66049;

	class MatchThreeV2LevelInfos___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::MatchThreeV2LevelData*, ::System::UInt32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::MatchThreeV2LevelData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2LevelInfos___c_TypeDefinitionIndex)->GetStaticField(0x660C0);
		}
		static ::RPG::Client::MatchThreeV2LevelInfos___c** StaticGet___9()
		{
			return (::RPG::Client::MatchThreeV2LevelInfos___c**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2LevelInfos___c_TypeDefinitionIndex)->GetStaticField(0x660C8);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2LevelInfos___c_TypeDefinitionIndex)->GetStaticField(0x660D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELINFOS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELINFOS___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetRequiredSubMissionIDs_b__7_0(::RPG::Client::MatchThreeV2LevelData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MatchThreeV2LevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELINFOS___C__GETREQUIREDSUBMISSIONIDS_B__7_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetRequiredSubMissionIDs_b__7_1(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2LEVELINFOS___C__GETREQUIREDSUBMISSIONIDS_B__7_1_OFFSET))(this, a1);
		}
	};
}
