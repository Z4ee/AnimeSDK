#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/AComponentUpdateHandler_1.h"

class Class_0_16E4307DCC419505_38;
class Class_1_6F0828FBB5B15920;
namespace Entitas { class IEntity; }

#define CLASS_2_1D4581C1DA04859A_METHOD_2_A016357ACE9DA9F9_OFFSET UNITYSDK_OFFSET(0x17AB3BA0)
#define CLASS_2_1D4581C1DA04859A_ONADD_OFFSET UNITYSDK_OFFSET(0x17AB3B30)
#define CLASS_2_1D4581C1DA04859A_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x17AB3F80)
#define CLASS_2_1D4581C1DA04859A_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x17AB3F10)
#define CLASS_2_1D4581C1DA04859A__CTOR_OFFSET UNITYSDK_OFFSET(0x17AB3FD0)

inline static constexpr unsigned int Class_2_1D4581C1DA04859A_TypeDefinitionIndex = 75163;

class Class_2_1D4581C1DA04859A : public ::RPG::Client::LittleGameShare::AComponentUpdateHandler_1<::Class_1_6F0828FBB5B15920*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D4581C1DA04859A__CTOR_OFFSET))(this);
	}

	::System::Void OnAdd(::Entitas::IEntity* a1, ::Class_1_6F0828FBB5B15920* a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_6F0828FBB5B15920*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_1D4581C1DA04859A_ONADD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnUpdate(::Entitas::IEntity* a1, ::Class_1_6F0828FBB5B15920* a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_6F0828FBB5B15920*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_1D4581C1DA04859A_ONUPDATE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnRemove(::Entitas::IEntity* a1, ::Class_0_16E4307DCC419505_38* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_1D4581C1DA04859A_ONREMOVE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A016357ACE9DA9F9(::Entitas::IEntity* a1, ::Class_1_6F0828FBB5B15920* a2, ::Class_0_16E4307DCC419505_38* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_6F0828FBB5B15920*, ::Class_0_16E4307DCC419505_38*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1D4581C1DA04859A_METHOD_2_A016357ACE9DA9F9_OFFSET))(this, a1, a2, a3, a4);
	}
};
