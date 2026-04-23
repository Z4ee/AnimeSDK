#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_59305B446B42427E.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

class Class_2_624AFA55756E2453;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_4E58D132629F675B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9155890)
#define CLASS_2_4E58D132629F675B_DOONENTER_OFFSET UNITYSDK_OFFSET(0x91558E0)
#define CLASS_2_4E58D132629F675B_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x9155960)
#define CLASS_2_4E58D132629F675B__CTOR_OFFSET UNITYSDK_OFFSET(0x9155780)
#define CLASS_2_4E58D132629F675B___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91559E0)
#define CLASS_2_4E58D132629F675B___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0x91559F0)
#define CLASS_2_4E58D132629F675B___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x9155A00)

inline static constexpr unsigned int Class_2_4E58D132629F675B_TypeDefinitionIndex = 55870;

class Class_2_4E58D132629F675B : public ::Class_1_59305B446B42427E
{
public:
	::Class_2_624AFA55756E2453* Field_2_4; // 0x98
	::System::String* Field_2_2; // 0xA0
	::System::UInt32 Field_2_3; // 0xA8
	::System::UInt32 Field_2_0; // 0xAC
	::System::UInt32 Field_2_1; // 0xB0

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::String* a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_4E58D132629F675B__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E58D132629F675B_DISPOSE_OFFSET))(this);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_4E58D132629F675B_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_4E58D132629F675B_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E58D132629F675B___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_4E58D132629F675B___IFIXBASEPROXY_DOONENTER_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TriggerExitReason P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_4E58D132629F675B___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, P0, P1);
	}
};
