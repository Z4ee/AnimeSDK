#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/Application/MechCraftGameSessionState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1499;
class Class_0_16E4307DCC419505_1538;
class Class_0_16E4307DCC419505_1540;
class Class_1_D501FC103C8A2714;
class Class_1_E240B71398B174A9;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { class Exception; }

#define CLASS_1_E777D0504F5995FF_GET_STATE_OFFSET UNITYSDK_OFFSET(0x158FE0F0)
#define CLASS_1_E777D0504F5995FF_METHOD_1_041E825C43075021_OFFSET UNITYSDK_OFFSET(0x158FDA50)
#define CLASS_1_E777D0504F5995FF_METHOD_1_06DFD38DB162A566_OFFSET UNITYSDK_OFFSET(0x158FD470)
#define CLASS_1_E777D0504F5995FF_METHOD_1_27EC2C099D14356D_OFFSET UNITYSDK_OFFSET(0x158FDD80)
#define CLASS_1_E777D0504F5995FF_METHOD_1_3AE2D05F86AD3482_OFFSET UNITYSDK_OFFSET(0x158FDEB0)
#define CLASS_1_E777D0504F5995FF_METHOD_1_41CF9B9431532A25_OFFSET UNITYSDK_OFFSET(0x158FD280)
#define CLASS_1_E777D0504F5995FF_METHOD_1_89C03AF435ED2C78_OFFSET UNITYSDK_OFFSET(0x158FD9D0)
#define CLASS_1_E777D0504F5995FF_METHOD_1_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x158FDF60)
#define CLASS_1_E777D0504F5995FF_METHOD_1_D6ABE0D0D0C8D678_OFFSET UNITYSDK_OFFSET(0x158FD680)
#define CLASS_1_E777D0504F5995FF_SET_STATE_OFFSET UNITYSDK_OFFSET(0x158FE100)
#define CLASS_1_E777D0504F5995FF__CTOR_OFFSET UNITYSDK_OFFSET(0x158FD250)

inline static constexpr unsigned int Class_1_E777D0504F5995FF_TypeDefinitionIndex = 80229;

class Class_1_E777D0504F5995FF : public ::System::Object
{
public:
	::Class_1_E240B71398B174A9* DEMEBGGDHEH; // 0x10
	::Class_0_16E4307DCC419505_1540* DLGHMDCBAPI; // 0x18
	::Class_1_D501FC103C8A2714* GJALMBBNNOF; // 0x20
	::Class_0_16E4307DCC419505_1499* JGJPOOFDENC; // 0x28
	::Class_0_16E4307DCC419505_1538* KEBOELMIGNB; // 0x30
	::RPG::Client::MechCraft::Application::MechCraftGameSessionState _State_k__BackingField; // 0x38

	::System::Void _ctor(::Class_0_16E4307DCC419505_1538* a1, ::Class_0_16E4307DCC419505_1540* a2, ::Class_1_E240B71398B174A9* a3, ::Class_0_16E4307DCC419505_1499* a4, ::Class_1_D501FC103C8A2714* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1538*, ::Class_0_16E4307DCC419505_1540*, ::Class_1_E240B71398B174A9*, ::Class_0_16E4307DCC419505_1499*, ::Class_1_D501FC103C8A2714*))((::PBYTE)hIl2Cpp + CLASS_1_E777D0504F5995FF__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_41CF9B9431532A25()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E777D0504F5995FF_METHOD_1_41CF9B9431532A25_OFFSET))(this);
	}

	::System::Void Method_1_06DFD38DB162A566(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E777D0504F5995FF_METHOD_1_06DFD38DB162A566_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_D6ABE0D0D0C8D678()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E777D0504F5995FF_METHOD_1_D6ABE0D0D0C8D678_OFFSET))(this);
	}

	::System::Void Method_1_89C03AF435ED2C78()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E777D0504F5995FF_METHOD_1_89C03AF435ED2C78_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_041E825C43075021()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E777D0504F5995FF_METHOD_1_041E825C43075021_OFFSET))(this);
	}

	::System::Void Method_1_27EC2C099D14356D(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_E777D0504F5995FF_METHOD_1_27EC2C099D14356D_OFFSET))(this, a1);
	}

	::System::Void Method_1_3AE2D05F86AD3482(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E777D0504F5995FF_METHOD_1_3AE2D05F86AD3482_OFFSET))(this, a1);
	}

	::System::Void Method_1_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E777D0504F5995FF_METHOD_1_9E38127F40B34F1F_OFFSET))(this);
	}

	::RPG::Client::MechCraft::Application::MechCraftGameSessionState get_State()
	{
		return ((::RPG::Client::MechCraft::Application::MechCraftGameSessionState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E777D0504F5995FF_GET_STATE_OFFSET))(this);
	}

	::System::Void set_State(::RPG::Client::MechCraft::Application::MechCraftGameSessionState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::Application::MechCraftGameSessionState))((::PBYTE)hIl2Cpp + CLASS_1_E777D0504F5995FF_SET_STATE_OFFSET))(this, a1);
	}
};
