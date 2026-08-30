#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"

class Class_1_6B41D5D37BA0605F;
class Class_1_DF83DCE9F713417B;

#define CLASS_1_AC54A34AF811EFDC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x152C6810)
#define CLASS_1_AC54A34AF811EFDC_ENTER_OFFSET UNITYSDK_OFFSET(0x152C6850)
#define CLASS_1_AC54A34AF811EFDC_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x152C6C70)
#define CLASS_1_AC54A34AF811EFDC_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x152C6B90)
#define CLASS_1_AC54A34AF811EFDC_LEAVE_OFFSET UNITYSDK_OFFSET(0x152C6BF0)
#define CLASS_1_AC54A34AF811EFDC_TICK_OFFSET UNITYSDK_OFFSET(0x152C6B30)
#define CLASS_1_AC54A34AF811EFDC__CTOR_OFFSET UNITYSDK_OFFSET(0x152C67E0)

inline static constexpr unsigned int Class_1_AC54A34AF811EFDC_TypeDefinitionIndex = 61216;

class Class_1_AC54A34AF811EFDC : public ::System::Object
{
public:
	::Class_1_DF83DCE9F713417B* MOFHGHGKAFP; // 0x10

	::System::Void _ctor(::Class_1_DF83DCE9F713417B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DF83DCE9F713417B*))((::PBYTE)hIl2Cpp + CLASS_1_AC54A34AF811EFDC__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC54A34AF811EFDC_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Enter()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC54A34AF811EFDC_ENTER_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AC54A34AF811EFDC_TICK_OFFSET))(this, a1);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AC54A34AF811EFDC_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Boolean Leave(::Class_1_6B41D5D37BA0605F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + CLASS_1_AC54A34AF811EFDC_LEAVE_OFFSET))(this, a1);
	}

	::RPG::Client::GamePhaseType GetGamePhaseType()
	{
		return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC54A34AF811EFDC_GETGAMEPHASETYPE_OFFSET))(this);
	}
};
