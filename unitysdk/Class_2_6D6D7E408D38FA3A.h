#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class AddSneakEffect; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_6D6D7E408D38FA3A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9C549A0)
#define CLASS_2_6D6D7E408D38FA3A_METHOD_2_50DAA2D68A6C09FD_OFFSET UNITYSDK_OFFSET(0x9C55450)
#define CLASS_2_6D6D7E408D38FA3A_METHOD_2_6B268AC3E897EA46_OFFSET UNITYSDK_OFFSET(0x9C55110)
#define CLASS_2_6D6D7E408D38FA3A_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x9C54FA0)
#define CLASS_2_6D6D7E408D38FA3A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9C54AA0)
#define CLASS_2_6D6D7E408D38FA3A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9C55610)
#define CLASS_2_6D6D7E408D38FA3A_TICK_OFFSET UNITYSDK_OFFSET(0x9C55540)
#define CLASS_2_6D6D7E408D38FA3A__CTOR_OFFSET UNITYSDK_OFFSET(0x9C54990)

inline static constexpr unsigned int Class_2_6D6D7E408D38FA3A_TypeDefinitionIndex = 42344;

class Class_2_6D6D7E408D38FA3A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::GameEntity* Field_2_2; // 0x20
	::Class_3_5775A4FEC79026BC* Field_2_4; // 0x28
	::RPG::GameCore::CharacterVisibleComponent* Field_2_3; // 0x30
	::RPG::GameCore::AddSneakEffect* Field_2_1; // 0x38
	::System::Boolean Field_2_6; // 0x40
	::System::Boolean Field_2_5; // 0x41

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddSneakEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddSneakEffect*))((::PBYTE)hIl2Cpp + CLASS_2_6D6D7E408D38FA3A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D6D7E408D38FA3A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D6D7E408D38FA3A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6D6D7E408D38FA3A_METHOD_2_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_2_50DAA2D68A6C09FD(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6D6D7E408D38FA3A_METHOD_2_50DAA2D68A6C09FD_OFFSET))(this, a1);
	}

	::System::Void Method_2_6B268AC3E897EA46(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6D6D7E408D38FA3A_METHOD_2_6B268AC3E897EA46_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6D6D7E408D38FA3A_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D6D7E408D38FA3A_ONTASKRESET_OFFSET))(this);
	}
};
