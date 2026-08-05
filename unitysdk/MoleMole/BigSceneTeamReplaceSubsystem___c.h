#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1;
class Class_3_39E7492E16896206;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1279E910)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__CHANGETEAMDATAS_B__38_0_OFFSET UNITYSDK_OFFSET(0x1279E960)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__CHANGETEAMDATAS_B__38_1_OFFSET UNITYSDK_OFFSET(0x1279E980)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1279E950)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__HIDEBATTLEBUDDY_B__43_0_OFFSET UNITYSDK_OFFSET(0x1279EA50)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneTeamReplaceSubsystem___c_TypeDefinitionIndex = 86922;

	class BigSceneTeamReplaceSubsystem___c : public ::System::Object
	{
	public:
		static ::MoleMole::BigSceneTeamReplaceSubsystem___c** StaticGet___9()
		{
			return (::MoleMole::BigSceneTeamReplaceSubsystem___c**)Il2CppClass::FromTypeDefinitionIndex(BigSceneTeamReplaceSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x44820);
		}
		static ::System::Action** StaticGet___9__43_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BigSceneTeamReplaceSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x44828);
		}
		static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1** StaticGet___9__38_1()
		{
			return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1**)Il2CppClass::FromTypeDefinitionIndex(BigSceneTeamReplaceSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x44830);
		}
		static ::System::Func_2<::Class_3_39E7492E16896206*, ::System::UInt32>** StaticGet___9__38_0()
		{
			return (::System::Func_2<::Class_3_39E7492E16896206*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(BigSceneTeamReplaceSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x44838);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _ChangeTeamDatas_b__38_0(::Class_3_39E7492E16896206* info)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_3_39E7492E16896206*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__CHANGETEAMDATAS_B__38_0_OFFSET))(this, info);
		}

		::System::Void _ChangeTeamDatas_b__38_1(::Class_0_16E4307DCC419505_36* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__CHANGETEAMDATAS_B__38_1_OFFSET))(this, msg);
		}

		::System::Void _HideBattleBuddy_b__43_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__HIDEBATTLEBUDDY_B__43_0_OFFSET))(this);
		}
	};
}
