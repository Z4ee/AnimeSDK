#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"

class Class_1_6B41D5D37BA0605F;

#define CLASS_1_63D18ECF87218619_3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C4AED0)
#define CLASS_1_63D18ECF87218619_3_ENTER_OFFSET UNITYSDK_OFFSET(0x15C4AF10)
#define CLASS_1_63D18ECF87218619_3_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x15C4B190)
#define CLASS_1_63D18ECF87218619_3_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15C4B0B0)
#define CLASS_1_63D18ECF87218619_3_LEAVE_OFFSET UNITYSDK_OFFSET(0x15C4B110)
#define CLASS_1_63D18ECF87218619_3_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15C4B010)
#define CLASS_1_63D18ECF87218619_3_TICK_OFFSET UNITYSDK_OFFSET(0x15C4B050)
#define CLASS_1_63D18ECF87218619_3__CTOR_OFFSET UNITYSDK_OFFSET(0x15C4AEC0)

inline static constexpr unsigned int Class_1_63D18ECF87218619_3_TypeDefinitionIndex = 61118;

class Class_1_63D18ECF87218619_3 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63D18ECF87218619_3__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63D18ECF87218619_3_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Enter()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63D18ECF87218619_3_ENTER_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_63D18ECF87218619_3_TICK_OFFSET))(this, a1);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_63D18ECF87218619_3_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Boolean Leave(::Class_1_6B41D5D37BA0605F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + CLASS_1_63D18ECF87218619_3_LEAVE_OFFSET))(this, a1);
	}

	::RPG::Client::GamePhaseType GetGamePhaseType()
	{
		return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63D18ECF87218619_3_GETGAMEPHASETYPE_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63D18ECF87218619_3_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
