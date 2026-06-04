#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RogueDLCADVRoomHideDestruct; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_4B04EFB7ACBD76AF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x137538E0)
#define CLASS_2_4B04EFB7ACBD76AF_METHOD_2_7B6EC255F45D034F_OFFSET UNITYSDK_OFFSET(0x13753B30)
#define CLASS_2_4B04EFB7ACBD76AF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13753980)
#define CLASS_2_4B04EFB7ACBD76AF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13753C80)
#define CLASS_2_4B04EFB7ACBD76AF_TICK_OFFSET UNITYSDK_OFFSET(0x13753920)
#define CLASS_2_4B04EFB7ACBD76AF__CTOR_OFFSET UNITYSDK_OFFSET(0x137538D0)

inline static constexpr unsigned int Class_2_4B04EFB7ACBD76AF_TypeDefinitionIndex = 54619;

class Class_2_4B04EFB7ACBD76AF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::RogueDLCADVRoomHideDestruct* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueDLCADVRoomHideDestruct* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueDLCADVRoomHideDestruct*))((::PBYTE)hIl2Cpp + CLASS_2_4B04EFB7ACBD76AF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B04EFB7ACBD76AF_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4B04EFB7ACBD76AF_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B04EFB7ACBD76AF_ONTASKBEGIN_OFFSET))(this);
	}

	static ::System::Void Method_2_7B6EC255F45D034F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_4B04EFB7ACBD76AF_METHOD_2_7B6EC255F45D034F_OFFSET))(a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B04EFB7ACBD76AF_ONTASKRESET_OFFSET))(this);
	}
};
