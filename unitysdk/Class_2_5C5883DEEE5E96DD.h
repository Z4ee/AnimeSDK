#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AddSneakEffect; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_5C5883DEEE5E96DD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA753010)
#define CLASS_2_5C5883DEEE5E96DD_METHOD_2_50DAA2D68A6C09FD_OFFSET UNITYSDK_OFFSET(0xA753C10)
#define CLASS_2_5C5883DEEE5E96DD_METHOD_2_889C45DCDD74975A_OFFSET UNITYSDK_OFFSET(0xA7538B0)
#define CLASS_2_5C5883DEEE5E96DD_METHOD_2_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0xA7536C0)
#define CLASS_2_5C5883DEEE5E96DD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA753150)
#define CLASS_2_5C5883DEEE5E96DD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA753DE0)
#define CLASS_2_5C5883DEEE5E96DD_TICK_OFFSET UNITYSDK_OFFSET(0xA753D00)
#define CLASS_2_5C5883DEEE5E96DD__CTOR_OFFSET UNITYSDK_OFFSET(0xA753000)

inline static constexpr unsigned int Class_2_5C5883DEEE5E96DD_TypeDefinitionIndex = 48930;

class Class_2_5C5883DEEE5E96DD : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::CharacterVisibleComponent* Field_2_1; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x28
	::RPG::GameCore::GameEntity* Field_2_3; // 0x30
	::RPG::GameCore::AddSneakEffect* Field_2_4; // 0x38
	::System::Boolean Field_2_5; // 0x40
	::System::Boolean Field_2_6; // 0x41

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddSneakEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddSneakEffect*))((::PBYTE)hIl2Cpp + CLASS_2_5C5883DEEE5E96DD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C5883DEEE5E96DD_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C5883DEEE5E96DD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5C5883DEEE5E96DD_METHOD_2_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_50DAA2D68A6C09FD(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5C5883DEEE5E96DD_METHOD_2_50DAA2D68A6C09FD_OFFSET))(this, a1);
	}

	::System::Void Method_2_889C45DCDD74975A(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5C5883DEEE5E96DD_METHOD_2_889C45DCDD74975A_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5C5883DEEE5E96DD_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C5883DEEE5E96DD_ONTASKRESET_OFFSET))(this);
	}
};
