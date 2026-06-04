#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/Client/LoginPhase.h"

class Class_1_6B41D5D37BA0605F;
class Class_1_718B8238EA10D3FF;

#define CLASS_3_CA807220C14CD3E3_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA933C00)
#define CLASS_3_CA807220C14CD3E3_1_ENTER_OFFSET UNITYSDK_OFFSET(0xA933C40)
#define CLASS_3_CA807220C14CD3E3_1_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0xA934160)
#define CLASS_3_CA807220C14CD3E3_1_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA9340B0)
#define CLASS_3_CA807220C14CD3E3_1_LEAVE_OFFSET UNITYSDK_OFFSET(0xA934110)
#define CLASS_3_CA807220C14CD3E3_1_METHOD_3_E53DFBBB5F1609C2_OFFSET UNITYSDK_OFFSET(0xA933F20)
#define CLASS_3_CA807220C14CD3E3_1_TICK_OFFSET UNITYSDK_OFFSET(0xA9341B0)
#define CLASS_3_CA807220C14CD3E3_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA933B70)
#define CLASS_3_CA807220C14CD3E3_1__ENTER_B__2_0_OFFSET UNITYSDK_OFFSET(0xA934210)

inline static constexpr unsigned int Class_3_CA807220C14CD3E3_1_TypeDefinitionIndex = 57171;

class Class_3_CA807220C14CD3E3_1 : public ::RPG::Client::LoginPhase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA807220C14CD3E3_1__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA807220C14CD3E3_1_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Enter()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA807220C14CD3E3_1_ENTER_OFFSET))(this);
	}

	::System::Void Method_3_E53DFBBB5F1609C2(::Class_1_718B8238EA10D3FF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_718B8238EA10D3FF*))((::PBYTE)hIl2Cpp + CLASS_3_CA807220C14CD3E3_1_METHOD_3_E53DFBBB5F1609C2_OFFSET))(this, a1);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_CA807220C14CD3E3_1_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Boolean Leave(::Class_1_6B41D5D37BA0605F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + CLASS_3_CA807220C14CD3E3_1_LEAVE_OFFSET))(this, a1);
	}

	::RPG::Client::GamePhaseType GetGamePhaseType()
	{
		return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA807220C14CD3E3_1_GETGAMEPHASETYPE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_CA807220C14CD3E3_1_TICK_OFFSET))(this, a1);
	}

	::System::Void _Enter_b__2_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA807220C14CD3E3_1__ENTER_B__2_0_OFFSET))(this);
	}
};
