#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C;
class Class_3_39E7492E16896206_2;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x141D7150)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__CHANGETEAMDATAS_B__40_0_OFFSET UNITYSDK_OFFSET(0x141D71A0)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__CHANGETEAMDATAS_B__40_1_OFFSET UNITYSDK_OFFSET(0x141D71C0)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x141D7190)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__HIDEBATTLEBUDDY_B__45_0_OFFSET UNITYSDK_OFFSET(0x141D7290)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneTeamReplaceSubsystem___c_TypeDefinitionIndex = 65582;

	class BigSceneTeamReplaceSubsystem___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_3_39E7492E16896206_2*, ::System::UInt32>** StaticGet___9__40_0()
		{
			return (::System::Func_2<::Class_3_39E7492E16896206_2*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(BigSceneTeamReplaceSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x430D0);
		}
		static ::MoleMole::BigSceneTeamReplaceSubsystem___c** StaticGet___9()
		{
			return (::MoleMole::BigSceneTeamReplaceSubsystem___c**)Il2CppClass::FromTypeDefinitionIndex(BigSceneTeamReplaceSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x430D8);
		}
		static ::System::Action** StaticGet___9__45_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BigSceneTeamReplaceSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x430E0);
		}
		static ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C** StaticGet___9__40_1()
		{
			return (::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(BigSceneTeamReplaceSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x430E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _ChangeTeamDatas_b__40_0(::Class_3_39E7492E16896206_2* info)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_3_39E7492E16896206_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__CHANGETEAMDATAS_B__40_0_OFFSET))(this, info);
		}

		::System::Void _ChangeTeamDatas_b__40_1(::Class_0_16E4307DCC419505_11* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__CHANGETEAMDATAS_B__40_1_OFFSET))(this, msg);
		}

		::System::Void _HideBattleBuddy_b__45_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__HIDEBATTLEBUDDY_B__45_0_OFFSET))(this);
		}
	};
}
