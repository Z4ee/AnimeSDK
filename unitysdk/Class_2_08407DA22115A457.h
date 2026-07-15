#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PlayMultiVoiceTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_08407DA22115A457_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17C735A0)
#define CLASS_2_08407DA22115A457_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x17C73CE0)
#define CLASS_2_08407DA22115A457_METHOD_2_543CEB0AE7A91C84_OFFSET UNITYSDK_OFFSET(0x17C739C0)
#define CLASS_2_08407DA22115A457_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x17C73A10)
#define CLASS_2_08407DA22115A457_METHOD_2_989E498ACD13A884_OFFSET UNITYSDK_OFFSET(0x17C73C50)
#define CLASS_2_08407DA22115A457_METHOD_2_F944CC0CE8B3E57A_OFFSET UNITYSDK_OFFSET(0x17C735F0)
#define CLASS_2_08407DA22115A457_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x17C73BF0)
#define CLASS_2_08407DA22115A457_ONSKIP_OFFSET UNITYSDK_OFFSET(0x17C73B80)
#define CLASS_2_08407DA22115A457_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17C73700)
#define CLASS_2_08407DA22115A457_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17C73AD0)
#define CLASS_2_08407DA22115A457_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x17C736B0)
#define CLASS_2_08407DA22115A457_TICK_OFFSET UNITYSDK_OFFSET(0x17C73B20)
#define CLASS_2_08407DA22115A457__CTOR_OFFSET UNITYSDK_OFFSET(0x17C73590)

inline static constexpr unsigned int Class_2_08407DA22115A457_TypeDefinitionIndex = 55688;

class Class_2_08407DA22115A457 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PlayMultiVoiceTalk* Field_2_0; // 0x18
	::Class_1_5F51D4049EA87B7B* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::System::Boolean Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayMultiVoiceTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayMultiVoiceTalk*))((::PBYTE)hIl2Cpp + CLASS_2_08407DA22115A457__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08407DA22115A457_DISPOSE_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* SetNextTask(::Class_1_5F51D4049EA87B7B* a1)
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + CLASS_2_08407DA22115A457_SETNEXTTASK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08407DA22115A457_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08407DA22115A457_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_08407DA22115A457_TICK_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08407DA22115A457_ONSKIP_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_08407DA22115A457_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08407DA22115A457_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_F944CC0CE8B3E57A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08407DA22115A457_METHOD_2_F944CC0CE8B3E57A_OFFSET))(this);
	}

	::System::Void Method_2_989E498ACD13A884(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_08407DA22115A457_METHOD_2_989E498ACD13A884_OFFSET))(this, a1);
	}

	::System::Void Method_2_543CEB0AE7A91C84()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08407DA22115A457_METHOD_2_543CEB0AE7A91C84_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08407DA22115A457_GET_FORCESKIP_OFFSET))(this);
	}
};
