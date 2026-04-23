#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_86;
class Class_1_43BD383C98B4C0C5_182;
class Class_1_F9EBB5A401350F78;
class Class_1_F9FBCC956DFCF137_17;
class Class_2_49CAB3DE74280C58;
class Class_2_6AA7CA7493367EF4;
class Class_2_DCFF4DF692D90D03;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_7B51681C9029080E_EXECUTE_OFFSET UNITYSDK_OFFSET(0x95555C0)
#define CLASS_1_7B51681C9029080E_METHOD_1_4CBB81945C52C7F7_OFFSET UNITYSDK_OFFSET(0x9555260)
#define CLASS_1_7B51681C9029080E_METHOD_1_79FB083850EAFF8F_OFFSET UNITYSDK_OFFSET(0x9554FE0)
#define CLASS_1_7B51681C9029080E_METHOD_1_8C53DB7903FE40A3_OFFSET UNITYSDK_OFFSET(0x9555300)
#define CLASS_1_7B51681C9029080E_METHOD_1_A40475C44AA8CEAB_OFFSET UNITYSDK_OFFSET(0x9555390)
#define CLASS_1_7B51681C9029080E_TICK_OFFSET UNITYSDK_OFFSET(0x9555790)
#define CLASS_1_7B51681C9029080E__CTOR_OFFSET UNITYSDK_OFFSET(0x9554F10)

inline static constexpr unsigned int Class_1_7B51681C9029080E_TypeDefinitionIndex = 71244;

class Class_1_7B51681C9029080E : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_86* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* Field_1_0; // 0x18
	::Class_1_F9EBB5A401350F78* Field_1_5; // 0x20
	::System::Collections::Generic::Queue_1<::Class_2_DCFF4DF692D90D03*>* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_182*>* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* Field_1_1; // 0x38

	::System::Void _ctor(::Class_0_16E4307DCC419505_86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_86*))((::PBYTE)hIl2Cpp + CLASS_1_7B51681C9029080E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_79FB083850EAFF8F(::Class_2_6AA7CA7493367EF4* a1, ::RPG::GameCore::ChimeraDuelTeamType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6AA7CA7493367EF4*, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + CLASS_1_7B51681C9029080E_METHOD_1_79FB083850EAFF8F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4CBB81945C52C7F7(::Class_2_49CAB3DE74280C58* a1, ::Class_2_6AA7CA7493367EF4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::Class_2_6AA7CA7493367EF4*))((::PBYTE)hIl2Cpp + CLASS_1_7B51681C9029080E_METHOD_1_4CBB81945C52C7F7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8C53DB7903FE40A3(::Class_2_DCFF4DF692D90D03* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DCFF4DF692D90D03*))((::PBYTE)hIl2Cpp + CLASS_1_7B51681C9029080E_METHOD_1_8C53DB7903FE40A3_OFFSET))(this, a1);
	}

	::System::Void Method_1_A40475C44AA8CEAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B51681C9029080E_METHOD_1_A40475C44AA8CEAB_OFFSET))(this);
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_17* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_17*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_7B51681C9029080E_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7B51681C9029080E_TICK_OFFSET))(this, a1);
	}
};
