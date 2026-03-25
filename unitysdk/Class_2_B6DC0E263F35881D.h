#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ListenTargetUseSkill; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_B6DC0E263F35881D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD7E0CA0)
#define CLASS_2_B6DC0E263F35881D_METHOD_2_2AA27BA1D6C33879_OFFSET UNITYSDK_OFFSET(0xD7E0E40)
#define CLASS_2_B6DC0E263F35881D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD7E0B50)
#define CLASS_2_B6DC0E263F35881D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD7E0C20)
#define CLASS_2_B6DC0E263F35881D_TICK_OFFSET UNITYSDK_OFFSET(0xD7E0D60)
#define CLASS_2_B6DC0E263F35881D__CTOR_OFFSET UNITYSDK_OFFSET(0xD7E0AD0)

inline static constexpr unsigned int Class_2_B6DC0E263F35881D_TypeDefinitionIndex = 42852;

class Class_2_B6DC0E263F35881D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_5775A4FEC79026BC* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_3; // 0x20
	::RPG::GameCore::ListenTargetUseSkill* Field_2_2; // 0x28
	::RPG::GameCore::GameEntity* Field_2_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ListenTargetUseSkill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ListenTargetUseSkill*))((::PBYTE)hIl2Cpp + CLASS_2_B6DC0E263F35881D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6DC0E263F35881D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6DC0E263F35881D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6DC0E263F35881D_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B6DC0E263F35881D_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_2AA27BA1D6C33879(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B6DC0E263F35881D_METHOD_2_2AA27BA1D6C33879_OFFSET))(this, a1);
	}
};
