#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PlayMultiVoiceTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_08407DA22115A457_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13624740)
#define CLASS_2_08407DA22115A457_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x13624E80)
#define CLASS_2_08407DA22115A457_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x13624BB0)
#define CLASS_2_08407DA22115A457_METHOD_2_F2608408E8EAEFBD_OFFSET UNITYSDK_OFFSET(0x13624B60)
#define CLASS_2_08407DA22115A457_METHOD_2_F944CC0CE8B3E57A_OFFSET UNITYSDK_OFFSET(0x13624790)
#define CLASS_2_08407DA22115A457_METHOD_2_FF20EEA659C4BDE8_OFFSET UNITYSDK_OFFSET(0x13624DF0)
#define CLASS_2_08407DA22115A457_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x13624D90)
#define CLASS_2_08407DA22115A457_ONSKIP_OFFSET UNITYSDK_OFFSET(0x13624D20)
#define CLASS_2_08407DA22115A457_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x136248A0)
#define CLASS_2_08407DA22115A457_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13624C70)
#define CLASS_2_08407DA22115A457_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x13624850)
#define CLASS_2_08407DA22115A457_TICK_OFFSET UNITYSDK_OFFSET(0x13624CC0)
#define CLASS_2_08407DA22115A457__CTOR_OFFSET UNITYSDK_OFFSET(0x13624730)

inline static constexpr unsigned int Class_2_08407DA22115A457_TypeDefinitionIndex = 54464;

class Class_2_08407DA22115A457 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_1_5F51D4049EA87B7B* Field_2_1; // 0x20
	::RPG::GameCore::PlayMultiVoiceTalk* Field_2_2; // 0x28
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

	::System::Void Method_2_FF20EEA659C4BDE8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_08407DA22115A457_METHOD_2_FF20EEA659C4BDE8_OFFSET))(this, a1);
	}

	::System::Void Method_2_F2608408E8EAEFBD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08407DA22115A457_METHOD_2_F2608408E8EAEFBD_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08407DA22115A457_GET_FORCESKIP_OFFSET))(this);
	}
};
