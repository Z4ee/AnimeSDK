#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_27E38B1A892A490A;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropCurveMovePaused; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class WeakReference_1; }

#define CLASS_2_F2E3AAF4C7D409DF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12369320)
#define CLASS_2_F2E3AAF4C7D409DF_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x12369760)
#define CLASS_2_F2E3AAF4C7D409DF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12369510)
#define CLASS_2_F2E3AAF4C7D409DF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12369400)
#define CLASS_2_F2E3AAF4C7D409DF_TICK_OFFSET UNITYSDK_OFFSET(0x12369680)
#define CLASS_2_F2E3AAF4C7D409DF__CTOR_OFFSET UNITYSDK_OFFSET(0x12369200)

inline static constexpr unsigned int Class_2_F2E3AAF4C7D409DF_TypeDefinitionIndex = 54322;

class Class_2_F2E3AAF4C7D409DF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::WeakReference_1<::Class_1_27E38B1A892A490A*>* Field_2_5; // 0x18
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x20
	::RPG::GameCore::WaitPropCurveMovePaused* Field_2_1; // 0x28
	::System::String* Field_2_4; // 0x30
	::RPG::GameCore::TaskContext* Field_2_0; // 0x38
	::RPG::GameCore::GameEntity* Field_2_3; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPropCurveMovePaused* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPropCurveMovePaused*))((::PBYTE)hIl2Cpp + CLASS_2_F2E3AAF4C7D409DF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2E3AAF4C7D409DF_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2E3AAF4C7D409DF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2E3AAF4C7D409DF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F2E3AAF4C7D409DF_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F2E3AAF4C7D409DF_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}
};
