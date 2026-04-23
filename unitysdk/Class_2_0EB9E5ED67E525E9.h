#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AdvRoguePhotoEntityFaceToPlayer; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_0EB9E5ED67E525E9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x118D0930)
#define CLASS_2_0EB9E5ED67E525E9_METHOD_2_5AD578FCE9CF19D4_OFFSET UNITYSDK_OFFSET(0x118D0E20)
#define CLASS_2_0EB9E5ED67E525E9_METHOD_2_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0x118D0990)
#define CLASS_2_0EB9E5ED67E525E9_METHOD_2_8C3DB70FFBBF01C7_1_OFFSET UNITYSDK_OFFSET(0x118D0F60)
#define CLASS_2_0EB9E5ED67E525E9_METHOD_2_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x118D0B70)
#define CLASS_2_0EB9E5ED67E525E9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x118D0AD0)
#define CLASS_2_0EB9E5ED67E525E9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x118D0A70)
#define CLASS_2_0EB9E5ED67E525E9_TICK_OFFSET UNITYSDK_OFFSET(0x118D0F00)
#define CLASS_2_0EB9E5ED67E525E9__CTOR_OFFSET UNITYSDK_OFFSET(0x118D0920)

inline static constexpr unsigned int Class_2_0EB9E5ED67E525E9_TypeDefinitionIndex = 48457;

class Class_2_0EB9E5ED67E525E9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::GameEntity* Field_2_2; // 0x20
	::RPG::GameCore::AdvRoguePhotoEntityFaceToPlayer* Field_2_1; // 0x28

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

	::System::Void Method_2_5AD578FCE9CF19D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EB9E5ED67E525E9_METHOD_2_5AD578FCE9CF19D4_OFFSET))(this);
	}

	::System::Void Method_2_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EB9E5ED67E525E9_METHOD_2_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_2_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0EB9E5ED67E525E9_METHOD_2_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C3DB70FFBBF01C7_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0EB9E5ED67E525E9_METHOD_2_8C3DB70FFBBF01C7_1_OFFSET))(this, a1);
	}
};
