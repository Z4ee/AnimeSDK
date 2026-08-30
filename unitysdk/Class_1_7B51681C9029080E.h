#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_104;
class Class_1_43BD383C98B4C0C5_213;
class Class_1_E518B582305CCAFF;
class Class_1_F9FBCC956DFCF137_27;
class Class_2_B66C1067C0468FBB;
class Class_2_DCFF4DF692D90D03;
class Class_2_FB9CF047C8AEAA83;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_7B51681C9029080E_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15E1FCC0)
#define CLASS_1_7B51681C9029080E_METHOD_1_1303B19CF454BD06_OFFSET UNITYSDK_OFFSET(0x15E1F9A0)
#define CLASS_1_7B51681C9029080E_METHOD_1_4BC86543E53D0696_OFFSET UNITYSDK_OFFSET(0x15E1F5A0)
#define CLASS_1_7B51681C9029080E_METHOD_1_6FE6E0587E8D1F5C_OFFSET UNITYSDK_OFFSET(0x15E1FA30)
#define CLASS_1_7B51681C9029080E_METHOD_1_A1F90F4B49B60010_OFFSET UNITYSDK_OFFSET(0x15E1F8A0)
#define CLASS_1_7B51681C9029080E_TICK_OFFSET UNITYSDK_OFFSET(0x15E1FE90)
#define CLASS_1_7B51681C9029080E__CTOR_OFFSET UNITYSDK_OFFSET(0x15E1F4D0)

inline static constexpr unsigned int Class_1_7B51681C9029080E_TypeDefinitionIndex = 77191;

class Class_1_7B51681C9029080E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* CBIDHFIBBGG; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* ANIMIKECIMK; // 0x18
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_213*>* OJFECHILFHG; // 0x20
	::Class_1_E518B582305CCAFF* HFOFIODMFGB; // 0x28
	::Class_0_16E4307DCC419505_104* KGEIJJIFGOI; // 0x30
	::System::Collections::Generic::Queue_1<::Class_2_DCFF4DF692D90D03*>* LMKKGJFNMGM; // 0x38

	::System::Void _ctor(::Class_0_16E4307DCC419505_104* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_104*))((::PBYTE)hIl2Cpp + CLASS_1_7B51681C9029080E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_4BC86543E53D0696(::Class_2_FB9CF047C8AEAA83* a1, ::RPG::GameCore::ChimeraDuelTeamType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FB9CF047C8AEAA83*, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + CLASS_1_7B51681C9029080E_METHOD_1_4BC86543E53D0696_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A1F90F4B49B60010(::Class_2_B66C1067C0468FBB* a1, ::Class_2_FB9CF047C8AEAA83* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::Class_2_FB9CF047C8AEAA83*))((::PBYTE)hIl2Cpp + CLASS_1_7B51681C9029080E_METHOD_1_A1F90F4B49B60010_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1303B19CF454BD06(::Class_2_DCFF4DF692D90D03* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DCFF4DF692D90D03*))((::PBYTE)hIl2Cpp + CLASS_1_7B51681C9029080E_METHOD_1_1303B19CF454BD06_OFFSET))(this, a1);
	}

	::System::Void Method_1_6FE6E0587E8D1F5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B51681C9029080E_METHOD_1_6FE6E0587E8D1F5C_OFFSET))(this);
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_27* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_27*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_7B51681C9029080E_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7B51681C9029080E_TICK_OFFSET))(this, a1);
	}
};
