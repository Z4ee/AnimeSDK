#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_D34DC667C78FACFB;
namespace RPG::GameCore { class BubbleTalkInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_AED9DEBFE511BA56_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17AE31E0)
#define CLASS_2_AED9DEBFE511BA56_METHOD_2_53404204717493A0_OFFSET UNITYSDK_OFFSET(0x17AE3C40)
#define CLASS_2_AED9DEBFE511BA56_METHOD_2_5DF8A193E0F647B6_OFFSET UNITYSDK_OFFSET(0x17AE3F60)
#define CLASS_2_AED9DEBFE511BA56_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x17AE3E80)
#define CLASS_2_AED9DEBFE511BA56_METHOD_2_B710AD145420A84D_OFFSET UNITYSDK_OFFSET(0x17AE3DB0)
#define CLASS_2_AED9DEBFE511BA56_METHOD_2_E74F6B0E289A921B_OFFSET UNITYSDK_OFFSET(0x17AE3750)
#define CLASS_2_AED9DEBFE511BA56_METHOD_2_E8217CFA7994B532_OFFSET UNITYSDK_OFFSET(0x17AE39D0)
#define CLASS_2_AED9DEBFE511BA56_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x17AE3D50)
#define CLASS_2_AED9DEBFE511BA56_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17AE32A0)
#define CLASS_2_AED9DEBFE511BA56_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17AE3CA0)
#define CLASS_2_AED9DEBFE511BA56_TICK_OFFSET UNITYSDK_OFFSET(0x17AE3CF0)
#define CLASS_2_AED9DEBFE511BA56__CTOR_OFFSET UNITYSDK_OFFSET(0x17AE31D0)

inline static constexpr unsigned int Class_2_AED9DEBFE511BA56_TypeDefinitionIndex = 58425;

class Class_2_AED9DEBFE511BA56 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* JPJAMENFBKD; // 0x0
	::Class_3_D34DC667C78FACFB* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_D34DC667C78FACFB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_D34DC667C78FACFB*))((::PBYTE)hIl2Cpp + CLASS_2_AED9DEBFE511BA56__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AED9DEBFE511BA56_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AED9DEBFE511BA56_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AED9DEBFE511BA56_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AED9DEBFE511BA56_TICK_OFFSET))(this, a1);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AED9DEBFE511BA56_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Void Method_2_B710AD145420A84D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AED9DEBFE511BA56_METHOD_2_B710AD145420A84D_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AED9DEBFE511BA56_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_53404204717493A0(::RPG::GameCore::BubbleTalkInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BubbleTalkInfo*))((::PBYTE)hIl2Cpp + CLASS_2_AED9DEBFE511BA56_METHOD_2_53404204717493A0_OFFSET))(this, a1);
	}

	::System::Void Method_2_E74F6B0E289A921B(::RPG::GameCore::GameEntity* a1, ::System::String*& a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_AED9DEBFE511BA56_METHOD_2_E74F6B0E289A921B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E8217CFA7994B532(::RPG::GameCore::BubbleTalkInfo* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BubbleTalkInfo*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AED9DEBFE511BA56_METHOD_2_E8217CFA7994B532_OFFSET))(this, a1, a2, a3);
	}

	static ::Il2CppArray<::System::Object*>* Method_2_5DF8A193E0F647B6(::System::Object* a1)
	{
		return ((::Il2CppArray<::System::Object*>*(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AED9DEBFE511BA56_METHOD_2_5DF8A193E0F647B6_OFFSET))(a1);
	}
};
