#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"

class Class_1_6B41D5D37BA0605F;

#define CLASS_1_63D18ECF87218619_2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9944E40)
#define CLASS_1_63D18ECF87218619_2_ENTER_OFFSET UNITYSDK_OFFSET(0x9944E80)
#define CLASS_1_63D18ECF87218619_2_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x9945100)
#define CLASS_1_63D18ECF87218619_2_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9945020)
#define CLASS_1_63D18ECF87218619_2_LEAVE_OFFSET UNITYSDK_OFFSET(0x9945080)
#define CLASS_1_63D18ECF87218619_2_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9944F80)
#define CLASS_1_63D18ECF87218619_2_TICK_OFFSET UNITYSDK_OFFSET(0x9944FC0)
#define CLASS_1_63D18ECF87218619_2__CTOR_OFFSET UNITYSDK_OFFSET(0x9944E30)

inline static constexpr unsigned int Class_1_63D18ECF87218619_2_TypeDefinitionIndex = 56366;

class Class_1_63D18ECF87218619_2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63D18ECF87218619_2__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63D18ECF87218619_2_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Enter()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63D18ECF87218619_2_ENTER_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_63D18ECF87218619_2_TICK_OFFSET))(this, a1);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_63D18ECF87218619_2_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Boolean Leave(::Class_1_6B41D5D37BA0605F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + CLASS_1_63D18ECF87218619_2_LEAVE_OFFSET))(this, a1);
	}

	::RPG::Client::GamePhaseType GetGamePhaseType()
	{
		return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63D18ECF87218619_2_GETGAMEPHASETYPE_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63D18ECF87218619_2_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
