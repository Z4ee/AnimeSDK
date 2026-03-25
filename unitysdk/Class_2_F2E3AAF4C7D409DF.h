#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_27E38B1A892A490A;
class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropCurveMovePaused; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class WeakReference_1; }

#define CLASS_2_F2E3AAF4C7D409DF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1177C860)
#define CLASS_2_F2E3AAF4C7D409DF_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x1177CCA0)
#define CLASS_2_F2E3AAF4C7D409DF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1177CA50)
#define CLASS_2_F2E3AAF4C7D409DF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1177C940)
#define CLASS_2_F2E3AAF4C7D409DF_TICK_OFFSET UNITYSDK_OFFSET(0x1177CBC0)
#define CLASS_2_F2E3AAF4C7D409DF__CTOR_OFFSET UNITYSDK_OFFSET(0x1177C740)

inline static constexpr unsigned int Class_2_F2E3AAF4C7D409DF_TypeDefinitionIndex = 47584;

class Class_2_F2E3AAF4C7D409DF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::String* Field_2_4; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20
	::System::WeakReference_1<::Class_1_27E38B1A892A490A*>* Field_2_5; // 0x28
	::RPG::GameCore::GameEntity* Field_2_3; // 0x30
	::RPG::GameCore::WaitPropCurveMovePaused* Field_2_1; // 0x38
	::Class_3_5775A4FEC79026BC* Field_2_2; // 0x40

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
