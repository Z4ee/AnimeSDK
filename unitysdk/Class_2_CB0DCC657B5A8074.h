#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPhotoGraphConditionResult; }
namespace System { class Object; }

#define CLASS_2_CB0DCC657B5A8074_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16EE6AF0)
#define CLASS_2_CB0DCC657B5A8074_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x16EE6E60)
#define CLASS_2_CB0DCC657B5A8074_METHOD_2_F55160DB3394C58D_OFFSET UNITYSDK_OFFSET(0x16EE7100)
#define CLASS_2_CB0DCC657B5A8074_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16EE6F40)
#define CLASS_2_CB0DCC657B5A8074_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16EE6FF0)
#define CLASS_2_CB0DCC657B5A8074_TICK_OFFSET UNITYSDK_OFFSET(0x16EE6CE0)
#define CLASS_2_CB0DCC657B5A8074__CTOR_OFFSET UNITYSDK_OFFSET(0x16EE6A00)

inline static constexpr unsigned int Class_2_CB0DCC657B5A8074_TypeDefinitionIndex = 53739;

class Class_2_CB0DCC657B5A8074 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* CHOOMNGLJHI; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::Class_3_07C3C4D2990C49EE* HPJPJBLFDGA; // 0x28
	::RPG::GameCore::WaitPhotoGraphConditionResult* OFKGLJOAMLD; // 0x30
	::Class_3_07C3C4D2990C49EE* LNMOCNDILJN; // 0x38
	::System::Boolean MFGHMLJJNIG; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPhotoGraphConditionResult* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPhotoGraphConditionResult*))((::PBYTE)hIl2Cpp + CLASS_2_CB0DCC657B5A8074__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB0DCC657B5A8074_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CB0DCC657B5A8074_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB0DCC657B5A8074_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB0DCC657B5A8074_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_F55160DB3394C58D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CB0DCC657B5A8074_METHOD_2_F55160DB3394C58D_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB0DCC657B5A8074_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}
};
