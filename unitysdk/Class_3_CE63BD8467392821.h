#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhase.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/GameCore/BattleModeType.h"

class Class_1_1A41AEC3FE4CE438;
class Class_1_2E7E8FCA88CEACA0;
class Class_1_6B41D5D37BA0605F;
class Class_1_CAA8B23EA64BF072;
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::GameCore { class EventManager; }

#define CLASS_3_CE63BD8467392821_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA1CB3B0)
#define CLASS_3_CE63BD8467392821_ENTER_OFFSET UNITYSDK_OFFSET(0xA1CB4C0)
#define CLASS_3_CE63BD8467392821_GETENVIRONMENTSYSTEM_OFFSET UNITYSDK_OFFSET(0xA1CB780)
#define CLASS_3_CE63BD8467392821_GETEVENTMANAGER_OFFSET UNITYSDK_OFFSET(0xA1CB8A0)
#define CLASS_3_CE63BD8467392821_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0xA1CB730)
#define CLASS_3_CE63BD8467392821_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA1CB990)
#define CLASS_3_CE63BD8467392821_LEAVE_OFFSET UNITYSDK_OFFSET(0xA1CB540)
#define CLASS_3_CE63BD8467392821_METHOD_3_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xA1CBA70)
#define CLASS_3_CE63BD8467392821_METHOD_3_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xA1CB5B0)
#define CLASS_3_CE63BD8467392821_METHOD_3_B49D88BC9A93B09A_OFFSET UNITYSDK_OFFSET(0xA1CBA20)
#define CLASS_3_CE63BD8467392821_TICK_OFFSET UNITYSDK_OFFSET(0xA1CB900)
#define CLASS_3_CE63BD8467392821__CTOR_OFFSET UNITYSDK_OFFSET(0xA1CB1D0)

inline static constexpr unsigned int Class_3_CE63BD8467392821_TypeDefinitionIndex = 49492;

class Class_3_CE63BD8467392821 : public ::RPG::Client::GamePhase
{
public:
	::Class_1_2E7E8FCA88CEACA0* Field_3_1; // 0x18
	::Class_1_1A41AEC3FE4CE438* Field_3_0; // 0x20
	::Class_1_CAA8B23EA64BF072* Field_3_2; // 0x28

	::System::Void _ctor(::Class_1_1A41AEC3FE4CE438* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1A41AEC3FE4CE438*))((::PBYTE)hIl2Cpp + CLASS_3_CE63BD8467392821__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CE63BD8467392821_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Enter()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CE63BD8467392821_ENTER_OFFSET))(this);
	}

	::System::Boolean Leave(::Class_1_6B41D5D37BA0605F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + CLASS_3_CE63BD8467392821_LEAVE_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_AA169839CB93802A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_CE63BD8467392821_METHOD_3_AA169839CB93802A_OFFSET))();
	}

	::RPG::Client::GamePhaseType GetGamePhaseType()
	{
		return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CE63BD8467392821_GETGAMEPHASETYPE_OFFSET))(this);
	}

	::RPG::Client::EnvironmentSystem* GetEnvironmentSystem()
	{
		return ((::RPG::Client::EnvironmentSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CE63BD8467392821_GETENVIRONMENTSYSTEM_OFFSET))(this);
	}

	::RPG::GameCore::EventManager* GetEventManager()
	{
		return ((::RPG::GameCore::EventManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CE63BD8467392821_GETEVENTMANAGER_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_CE63BD8467392821_TICK_OFFSET))(this, a1);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_CE63BD8467392821_LATEUPDATE_OFFSET))(this, a1);
	}

	::RPG::GameCore::BattleModeType Method_3_B49D88BC9A93B09A()
	{
		return ((::RPG::GameCore::BattleModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CE63BD8467392821_METHOD_3_B49D88BC9A93B09A_OFFSET))(this);
	}

	::Class_1_2E7E8FCA88CEACA0* Method_3_24748FC20F375725()
	{
		return ((::Class_1_2E7E8FCA88CEACA0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CE63BD8467392821_METHOD_3_24748FC20F375725_OFFSET))(this);
	}
};
