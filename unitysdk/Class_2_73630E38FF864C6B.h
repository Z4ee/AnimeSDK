#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_23F67DD15593C8D6;
class Class_2_469A56953483CA0D;
class Class_2_A0580152EB393340;
class Class_2_C14C025AFA60DCA2;
namespace RPG::GameCore { class AdvNPCChase; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class AdventureCharacterDataComponent; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_2_73630E38FF864C6B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1118F0D0)
#define CLASS_2_73630E38FF864C6B_METHOD_2_3A9C03366E936C66_OFFSET UNITYSDK_OFFSET(0x1118F300)
#define CLASS_2_73630E38FF864C6B_METHOD_2_52CA0F45BC3414DC_OFFSET UNITYSDK_OFFSET(0x1118F640)
#define CLASS_2_73630E38FF864C6B_METHOD_2_5587AE4B03E68C58_OFFSET UNITYSDK_OFFSET(0x1118F750)
#define CLASS_2_73630E38FF864C6B_METHOD_2_9CA35E5BF1A50E77_OFFSET UNITYSDK_OFFSET(0x1118FAB0)
#define CLASS_2_73630E38FF864C6B_METHOD_2_CB7FCC6E483860D4_OFFSET UNITYSDK_OFFSET(0x1118FBE0)
#define CLASS_2_73630E38FF864C6B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1118F1D0)
#define CLASS_2_73630E38FF864C6B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1118F510)
#define CLASS_2_73630E38FF864C6B_TICK_OFFSET UNITYSDK_OFFSET(0x1118FA00)
#define CLASS_2_73630E38FF864C6B__CTOR_OFFSET UNITYSDK_OFFSET(0x1118E910)

inline static constexpr unsigned int Class_2_73630E38FF864C6B_TypeDefinitionIndex = 48376;

class Class_2_73630E38FF864C6B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_5F51D4049EA87B7B* Field_2_14; // 0x18
	::Class_2_469A56953483CA0D* Field_2_7; // 0x20
	::RPG::GameCore::AdvNPCChase* Field_2_0; // 0x28
	::Class_2_A0580152EB393340* Field_2_6; // 0x30
	::RPG::GameCore::AdventureCharacterDataComponent* Field_2_5; // 0x38
	::Class_2_C14C025AFA60DCA2* Field_2_3; // 0x40
	::Class_1_5F51D4049EA87B7B* Field_2_11; // 0x48
	::Class_1_5F51D4049EA87B7B* Field_2_12; // 0x50
	::RPG::GameCore::TransformComponent* Field_2_2; // 0x58
	::RPG::GameCore::NPCComponent* Field_2_8; // 0x60
	::Class_1_5F51D4049EA87B7B* Field_2_13; // 0x68
	::Class_1_23F67DD15593C8D6* Field_2_9; // 0x70
	::RPG::GameCore::TaskContext* Field_2_1; // 0x78
	::RPG::GameCore::AdventureCharacterController* Field_2_4; // 0x80
	::Class_1_5F51D4049EA87B7B* Field_2_10; // 0x88
	::System::Boolean Field_2_15; // 0x90
	::UnityEngine::Vector3 Field_2_16; // 0x94

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNPCChase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNPCChase*))((::PBYTE)hIl2Cpp + CLASS_2_73630E38FF864C6B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73630E38FF864C6B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73630E38FF864C6B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73630E38FF864C6B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_52CA0F45BC3414DC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_73630E38FF864C6B_METHOD_2_52CA0F45BC3414DC_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_73630E38FF864C6B_TICK_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_CB7FCC6E483860D4()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73630E38FF864C6B_METHOD_2_CB7FCC6E483860D4_OFFSET))(this);
	}

	::System::Void Method_2_3A9C03366E936C66(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_73630E38FF864C6B_METHOD_2_3A9C03366E936C66_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_9CA35E5BF1A50E77()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73630E38FF864C6B_METHOD_2_9CA35E5BF1A50E77_OFFSET))(this);
	}

	::System::Void Method_2_5587AE4B03E68C58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73630E38FF864C6B_METHOD_2_5587AE4B03E68C58_OFFSET))(this);
	}
};
