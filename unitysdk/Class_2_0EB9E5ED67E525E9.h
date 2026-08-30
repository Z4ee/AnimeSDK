#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AdvRoguePhotoEntityFaceToPlayer; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_0EB9E5ED67E525E9_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC483C00)
#define CLASS_2_0EB9E5ED67E525E9_METHOD_2_61EC2AC0BD93363E_OFFSET UNITYSDK_OFFSET(0xC4842A0)
#define CLASS_2_0EB9E5ED67E525E9_METHOD_2_6B4A3A1B5816B81E_OFFSET UNITYSDK_OFFSET(0xC484120)
#define CLASS_2_0EB9E5ED67E525E9_METHOD_2_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0xC483E80)
#define CLASS_2_0EB9E5ED67E525E9_METHOD_2_FF0BED909298199C_OFFSET UNITYSDK_OFFSET(0xC483C60)
#define CLASS_2_0EB9E5ED67E525E9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC483DE0)
#define CLASS_2_0EB9E5ED67E525E9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC483D80)
#define CLASS_2_0EB9E5ED67E525E9_TICK_OFFSET UNITYSDK_OFFSET(0xC484240)
#define CLASS_2_0EB9E5ED67E525E9__CTOR_OFFSET UNITYSDK_OFFSET(0xC483BF0)

inline static constexpr unsigned int Class_2_0EB9E5ED67E525E9_TypeDefinitionIndex = 52758;

class Class_2_0EB9E5ED67E525E9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdvRoguePhotoEntityFaceToPlayer* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x28

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

	::System::Void Method_2_FF0BED909298199C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EB9E5ED67E525E9_METHOD_2_FF0BED909298199C_OFFSET))(this);
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
