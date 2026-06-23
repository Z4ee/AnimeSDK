#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C;
class Class_3_39E7492E16896206_2;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13FF02A0)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__CHANGETEAMDATAS_B__40_0_OFFSET UNITYSDK_OFFSET(0x13FF02F0)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__CHANGETEAMDATAS_B__40_1_OFFSET UNITYSDK_OFFSET(0x13FF0310)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13FF02E0)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__HIDEBATTLEBUDDY_B__45_0_OFFSET UNITYSDK_OFFSET(0x13FF03E0)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneTeamReplaceSubsystem___c_TypeDefinitionIndex = 44356;

	class BigSceneTeamReplaceSubsystem___c : public ::System::Object
	{
	public:
		static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C** StaticGet___9__40_1()
		{
			return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(BigSceneTeamReplaceSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x497D0);
		}
		static ::System::Func_2<::Class_3_39E7492E16896206_2*, ::System::UInt32>** StaticGet___9__40_0()
		{
			return (::System::Func_2<::Class_3_39E7492E16896206_2*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(BigSceneTeamReplaceSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x497D8);
		}
		static ::MoleMole::BigSceneTeamReplaceSubsystem___c** StaticGet___9()
		{
			return (::MoleMole::BigSceneTeamReplaceSubsystem___c**)Il2CppClass::FromTypeDefinitionIndex(BigSceneTeamReplaceSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x497E0);
		}
		static ::System::Action** StaticGet___9__45_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BigSceneTeamReplaceSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x497E8);
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

		::System::Void _ChangeTeamDatas_b__40_1(::Class_0_16E4307DCC419505_29* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__CHANGETEAMDATAS_B__40_1_OFFSET))(this, msg);
		}

		::System::Void _HideBattleBuddy_b__45_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__HIDEBATTLEBUDDY_B__45_0_OFFSET))(this);
		}
	};
}
