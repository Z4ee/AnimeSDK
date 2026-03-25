#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropCurveMoveFinish; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_382FA5EC7C784A7D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D37440)
#define CLASS_2_382FA5EC7C784A7D_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x8D37810)
#define CLASS_2_382FA5EC7C784A7D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8D375B0)
#define CLASS_2_382FA5EC7C784A7D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8D374F0)
#define CLASS_2_382FA5EC7C784A7D_TICK_OFFSET UNITYSDK_OFFSET(0x8D37730)
#define CLASS_2_382FA5EC7C784A7D__CTOR_OFFSET UNITYSDK_OFFSET(0x8D373C0)

inline static constexpr unsigned int Class_2_382FA5EC7C784A7D_TypeDefinitionIndex = 47583;

class Class_2_382FA5EC7C784A7D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_5775A4FEC79026BC* Field_2_2; // 0x18
	::RPG::GameCore::GameEntity* Field_2_3; // 0x20
	::System::String* Field_2_4; // 0x28
	::RPG::GameCore::WaitPropCurveMoveFinish* Field_2_1; // 0x30
	::RPG::GameCore::TaskContext* Field_2_0; // 0x38
	::System::UInt32 Field_2_5; // 0x40
	::System::UInt32 Field_2_6; // 0x44

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPropCurveMoveFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPropCurveMoveFinish*))((::PBYTE)hIl2Cpp + CLASS_2_382FA5EC7C784A7D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_382FA5EC7C784A7D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_382FA5EC7C784A7D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_382FA5EC7C784A7D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_382FA5EC7C784A7D_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_382FA5EC7C784A7D_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}
};
