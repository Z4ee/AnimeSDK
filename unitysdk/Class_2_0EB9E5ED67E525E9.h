#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AdvRoguePhotoEntityFaceToPlayer; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_0EB9E5ED67E525E9_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB05C540)
#define CLASS_2_0EB9E5ED67E525E9_METHOD_2_61EC2AC0BD93363E_OFFSET UNITYSDK_OFFSET(0xB05CBE0)
#define CLASS_2_0EB9E5ED67E525E9_METHOD_2_6B4A3A1B5816B81E_OFFSET UNITYSDK_OFFSET(0xB05CA60)
#define CLASS_2_0EB9E5ED67E525E9_METHOD_2_7FD7D34994C88765_OFFSET UNITYSDK_OFFSET(0xB05C5A0)
#define CLASS_2_0EB9E5ED67E525E9_METHOD_2_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0xB05C7C0)
#define CLASS_2_0EB9E5ED67E525E9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB05C720)
#define CLASS_2_0EB9E5ED67E525E9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB05C6C0)
#define CLASS_2_0EB9E5ED67E525E9_TICK_OFFSET UNITYSDK_OFFSET(0xB05CB80)
#define CLASS_2_0EB9E5ED67E525E9__CTOR_OFFSET UNITYSDK_OFFSET(0xB05C530)

inline static constexpr unsigned int Class_2_0EB9E5ED67E525E9_TypeDefinitionIndex = 49083;

class Class_2_0EB9E5ED67E525E9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x18
	::RPG::GameCore::AdvRoguePhotoEntityFaceToPlayer* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvRoguePhotoEntityFaceToPlayer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvRoguePhotoEntityFaceToPlayer*))((::PBYTE)hIl2Cpp + CLASS_2_0EB9E5ED67E525E9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EB9E5ED67E525E9_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EB9E5ED67E525E9_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EB9E5ED67E525E9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0EB9E5ED67E525E9_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_6B4A3A1B5816B81E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EB9E5ED67E525E9_METHOD_2_6B4A3A1B5816B81E_OFFSET))(this);
	}

	::System::Void Method_2_7FD7D34994C88765()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EB9E5ED67E525E9_METHOD_2_7FD7D34994C88765_OFFSET))(this);
	}

	::System::Void Method_2_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0EB9E5ED67E525E9_METHOD_2_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_61EC2AC0BD93363E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0EB9E5ED67E525E9_METHOD_2_61EC2AC0BD93363E_OFFSET))(this, a1);
	}
};
