#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"

class Class_1_6B41D5D37BA0605F;
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::Client { class StoryTestPhaseInitParams; }
namespace RPG::GameCore { class GameWorld; }

#define CLASS_1_81ED0EC323D8AB99_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1145B310)
#define CLASS_1_81ED0EC323D8AB99_ENTER_OFFSET UNITYSDK_OFFSET(0x1145B380)
#define CLASS_1_81ED0EC323D8AB99_GETENVIRONMENTSYSTEM_OFFSET UNITYSDK_OFFSET(0x1145BA50)
#define CLASS_1_81ED0EC323D8AB99_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x1145BA00)
#define CLASS_1_81ED0EC323D8AB99_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1145B8A0)
#define CLASS_1_81ED0EC323D8AB99_LEAVE_OFFSET UNITYSDK_OFFSET(0x1145B910)
#define CLASS_1_81ED0EC323D8AB99_METHOD_1_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x1145B4B0)
#define CLASS_1_81ED0EC323D8AB99_METHOD_1_B5B09D474D46B1C0_OFFSET UNITYSDK_OFFSET(0x1145BAD0)
#define CLASS_1_81ED0EC323D8AB99_METHOD_1_E80CE1204A45E2C8_OFFSET UNITYSDK_OFFSET(0x1145BA90)
#define CLASS_1_81ED0EC323D8AB99_TICK_OFFSET UNITYSDK_OFFSET(0x1145B830)
#define CLASS_1_81ED0EC323D8AB99__CTOR_OFFSET UNITYSDK_OFFSET(0x1145B300)

inline static constexpr unsigned int Class_1_81ED0EC323D8AB99_TypeDefinitionIndex = 49630;

class Class_1_81ED0EC323D8AB99 : public ::System::Object
{
public:
	::RPG::GameCore::GameWorld* Field_1_1; // 0x10
	::RPG::Client::EnvironmentSystem* Field_1_2; // 0x18
	::RPG::Client::StoryTestPhaseInitParams* Field_1_0; // 0x20

	::System::Void _ctor(::RPG::Client::StoryTestPhaseInitParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::StoryTestPhaseInitParams*))((::PBYTE)hIl2Cpp + CLASS_1_81ED0EC323D8AB99__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81ED0EC323D8AB99_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Enter()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81ED0EC323D8AB99_ENTER_OFFSET))(this);
	}

	::System::Void Method_1_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81ED0EC323D8AB99_METHOD_1_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_81ED0EC323D8AB99_TICK_OFFSET))(this, a1);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_81ED0EC323D8AB99_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Boolean Leave(::Class_1_6B41D5D37BA0605F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + CLASS_1_81ED0EC323D8AB99_LEAVE_OFFSET))(this, a1);
	}

	::RPG::Client::GamePhaseType GetGamePhaseType()
	{
		return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81ED0EC323D8AB99_GETGAMEPHASETYPE_OFFSET))(this);
	}

	::RPG::Client::EnvironmentSystem* GetEnvironmentSystem()
	{
		return ((::RPG::Client::EnvironmentSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81ED0EC323D8AB99_GETENVIRONMENTSYSTEM_OFFSET))(this);
	}

	::RPG::GameCore::GameWorld* Method_1_E80CE1204A45E2C8()
	{
		return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81ED0EC323D8AB99_METHOD_1_E80CE1204A45E2C8_OFFSET))(this);
	}

	::RPG::Client::StoryTestPhaseInitParams* Method_1_B5B09D474D46B1C0()
	{
		return ((::RPG::Client::StoryTestPhaseInitParams*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81ED0EC323D8AB99_METHOD_1_B5B09D474D46B1C0_OFFSET))(this);
	}
};
