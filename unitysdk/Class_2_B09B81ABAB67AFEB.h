#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class AdvWaitTickValueFinish; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_B09B81ABAB67AFEB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEB9620)
#define CLASS_2_B09B81ABAB67AFEB_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xBEB9990)
#define CLASS_2_B09B81ABAB67AFEB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBEB9790)
#define CLASS_2_B09B81ABAB67AFEB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBEB96D0)
#define CLASS_2_B09B81ABAB67AFEB_TICK_OFFSET UNITYSDK_OFFSET(0xBEB98B0)
#define CLASS_2_B09B81ABAB67AFEB__CTOR_OFFSET UNITYSDK_OFFSET(0xBEB95A0)

inline static constexpr unsigned int Class_2_B09B81ABAB67AFEB_TypeDefinitionIndex = 46679;

class Class_2_B09B81ABAB67AFEB : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_5775A4FEC79026BC* Field_2_2; // 0x18
	::RPG::GameCore::AdvWaitTickValueFinish* Field_2_1; // 0x20
	::RPG::GameCore::GameEntity* Field_2_3; // 0x28
	::System::String* Field_2_4; // 0x30
	::RPG::GameCore::TaskContext* Field_2_0; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvWaitTickValueFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvWaitTickValueFinish*))((::PBYTE)hIl2Cpp + CLASS_2_B09B81ABAB67AFEB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B09B81ABAB67AFEB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B09B81ABAB67AFEB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B09B81ABAB67AFEB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B09B81ABAB67AFEB_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B09B81ABAB67AFEB_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}
};
