#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Work/WorkFlags.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_305;
class Class_0_16E4307DCC419505_306;
class Class_1_9D40F9D90905A4A4_Class_3_4FF8BBC96790DA30_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_9D40F9D90905A4A4_ADD__WORKFINISHEDEVENT_OFFSET UNITYSDK_OFFSET(0x1E59C400)
#define CLASS_1_9D40F9D90905A4A4_GET_DEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x1E59CBB0)
#define CLASS_1_9D40F9D90905A4A4_GET_ID_OFFSET UNITYSDK_OFFSET(0x1E59CB50)
#define CLASS_1_9D40F9D90905A4A4_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E59CB70)
#define CLASS_1_9D40F9D90905A4A4_GET_STARTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1E59CBD0)
#define CLASS_1_9D40F9D90905A4A4_GET_WORKACTION_OFFSET UNITYSDK_OFFSET(0x1E59CB90)
#define CLASS_1_9D40F9D90905A4A4_METHOD_1_00605CD46BC5ED28_OFFSET UNITYSDK_OFFSET(0x1E599400)
#define CLASS_1_9D40F9D90905A4A4_METHOD_1_53A2E604B5E386EE_OFFSET UNITYSDK_OFFSET(0x1E595720)
#define CLASS_1_9D40F9D90905A4A4_METHOD_1_614723C343C99351_OFFSET UNITYSDK_OFFSET(0x1E595920)
#define CLASS_1_9D40F9D90905A4A4_METHOD_1_A0BDC44A9D22219F_OFFSET UNITYSDK_OFFSET(0x1E59C470)
#define CLASS_1_9D40F9D90905A4A4_METHOD_1_C93037C2C383890D_OFFSET UNITYSDK_OFFSET(0x1E59CB40)
#define CLASS_1_9D40F9D90905A4A4_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1E598800)
#define CLASS_1_9D40F9D90905A4A4_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x1E598610)
#define CLASS_1_9D40F9D90905A4A4_METHOD_1_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x1E597460)
#define CLASS_1_9D40F9D90905A4A4_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1E5985B0)
#define CLASS_1_9D40F9D90905A4A4_REMOVE__WORKFINISHEDEVENT_OFFSET UNITYSDK_OFFSET(0x1E59C3A0)
#define CLASS_1_9D40F9D90905A4A4_SET_DEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x1E59CBC0)
#define CLASS_1_9D40F9D90905A4A4_SET_ID_OFFSET UNITYSDK_OFFSET(0x1E59CB60)
#define CLASS_1_9D40F9D90905A4A4_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1E59CB80)
#define CLASS_1_9D40F9D90905A4A4_SET_STARTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1E59CBE0)
#define CLASS_1_9D40F9D90905A4A4_SET_WORKACTION_OFFSET UNITYSDK_OFFSET(0x1E59CBA0)
#define CLASS_1_9D40F9D90905A4A4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E59C770)
#define CLASS_1_9D40F9D90905A4A4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5973F0)
#define CLASS_1_9D40F9D90905A4A4__CTOR_OFFSET UNITYSDK_OFFSET(0x1E597380)

inline static constexpr unsigned int Class_1_9D40F9D90905A4A4_TypeDefinitionIndex = 42352;

class Class_1_9D40F9D90905A4A4 : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_EHCGIKEDJHP()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9D40F9D90905A4A4_TypeDefinitionIndex)->GetStaticField(0x880);
	}
	::System::String* _Name_k__BackingField; // 0x10
	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_305*>* _WorkAction_k__BackingField; // 0x18
	::Class_1_9D40F9D90905A4A4_Class_3_4FF8BBC96790DA30_1* _WorkFinishedEvent; // 0x20
	::Il2CppArray<::Class_0_16E4307DCC419505_306*>* _Dependencies_k__BackingField; // 0x28
	::System::UInt32 _ID_k__BackingField; // 0x30
	::RPG::Work::WorkFlags OFGJAFHJFHG; // 0x34
	::System::Single _StartTimeStamp_k__BackingField; // 0x38

	::System::Void _ctor(::System::String* a1, ::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_305*>* a2, ::Il2CppArray<::Class_0_16E4307DCC419505_306*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_305*>*, ::Il2CppArray<::Class_0_16E4307DCC419505_306*>*))((::PBYTE)hIl2Cpp + CLASS_1_9D40F9D90905A4A4__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::System::String* a1, ::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_305*>* a2, ::RPG::Work::WorkFlags a3, ::Il2CppArray<::Class_0_16E4307DCC419505_306*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_305*>*, ::RPG::Work::WorkFlags, ::Il2CppArray<::Class_0_16E4307DCC419505_306*>*))((::PBYTE)hIl2Cpp + CLASS_1_9D40F9D90905A4A4__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_53A2E604B5E386EE(::Class_1_9D40F9D90905A4A4_Class_3_4FF8BBC96790DA30_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9D40F9D90905A4A4_Class_3_4FF8BBC96790DA30_1*))((::PBYTE)hIl2Cpp + CLASS_1_9D40F9D90905A4A4_METHOD_1_53A2E604B5E386EE_OFFSET))(this, a1);
	}

	::System::Void Method_1_614723C343C99351(::Class_1_9D40F9D90905A4A4_Class_3_4FF8BBC96790DA30_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9D40F9D90905A4A4_Class_3_4FF8BBC96790DA30_1*))((::PBYTE)hIl2Cpp + CLASS_1_9D40F9D90905A4A4_METHOD_1_614723C343C99351_OFFSET))(this, a1);
	}

	::System::Void Method_1_00605CD46BC5ED28(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9D40F9D90905A4A4_METHOD_1_00605CD46BC5ED28_OFFSET))(this, a1);
	}

	::System::String* Method_1_A0BDC44A9D22219F()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D40F9D90905A4A4_METHOD_1_A0BDC44A9D22219F_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D40F9D90905A4A4_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Method_1_C93037C2C383890D(::RPG::Work::WorkFlags a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Work::WorkFlags))((::PBYTE)hIl2Cpp + CLASS_1_9D40F9D90905A4A4_METHOD_1_C93037C2C383890D_OFFSET))(this, a1);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D40F9D90905A4A4_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9D40F9D90905A4A4_SET_ID_OFFSET))(this, a1);
	}

	::System::String* get_Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D40F9D90905A4A4_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9D40F9D90905A4A4_SET_NAME_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_305*>* get_WorkAction()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_305*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D40F9D90905A4A4_GET_WORKACTION_OFFSET))(this);
	}

	::System::Void set_WorkAction(::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_305*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_305*>*))((::PBYTE)hIl2Cpp + CLASS_1_9D40F9D90905A4A4_SET_WORKACTION_OFFSET))(this, a1);
	}

	::Il2CppArray<::Class_0_16E4307DCC419505_306*>* get_Dependencies()
	{
		return ((::Il2CppArray<::Class_0_16E4307DCC419505_306*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D40F9D90905A4A4_GET_DEPENDENCIES_OFFSET))(this);
	}

	::System::Void set_Dependencies(::Il2CppArray<::Class_0_16E4307DCC419505_306*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_0_16E4307DCC419505_306*>*))((::PBYTE)hIl2Cpp + CLASS_1_9D40F9D90905A4A4_SET_DEPENDENCIES_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D40F9D90905A4A4_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D40F9D90905A4A4_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D40F9D90905A4A4_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D40F9D90905A4A4_METHOD_1_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Single get_StartTimeStamp()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D40F9D90905A4A4_GET_STARTTIMESTAMP_OFFSET))(this);
	}

	::System::Void set_StartTimeStamp(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9D40F9D90905A4A4_SET_STARTTIMESTAMP_OFFSET))(this, a1);
	}

	::System::Void add__WorkFinishedEvent(::Class_1_9D40F9D90905A4A4_Class_3_4FF8BBC96790DA30_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9D40F9D90905A4A4_Class_3_4FF8BBC96790DA30_1*))((::PBYTE)hIl2Cpp + CLASS_1_9D40F9D90905A4A4_ADD__WORKFINISHEDEVENT_OFFSET))(this, a1);
	}

	::System::Void remove__WorkFinishedEvent(::Class_1_9D40F9D90905A4A4_Class_3_4FF8BBC96790DA30_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9D40F9D90905A4A4_Class_3_4FF8BBC96790DA30_1*))((::PBYTE)hIl2Cpp + CLASS_1_9D40F9D90905A4A4_REMOVE__WORKFINISHEDEVENT_OFFSET))(this, a1);
	}
};
