#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Work/WorkFlags.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_278;
class Class_0_16E4307DCC419505_279;
class Class_1_9D40F9D90905A4A4_Class_3_4FF8BBC96790DA30_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_9D40F9D90905A4A4_ADD__WORKFINISHEDEVENT_OFFSET UNITYSDK_OFFSET(0x1AC1FE10)
#define CLASS_1_9D40F9D90905A4A4_GET_DEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x1AC20630)
#define CLASS_1_9D40F9D90905A4A4_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AC205D0)
#define CLASS_1_9D40F9D90905A4A4_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AC205F0)
#define CLASS_1_9D40F9D90905A4A4_GET_STARTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1AC20650)
#define CLASS_1_9D40F9D90905A4A4_GET_WORKACTION_OFFSET UNITYSDK_OFFSET(0x1AC20610)
#define CLASS_1_9D40F9D90905A4A4_METHOD_1_00605CD46BC5ED28_OFFSET UNITYSDK_OFFSET(0x1AC1CE00)
#define CLASS_1_9D40F9D90905A4A4_METHOD_1_00F227E02AED3805_OFFSET UNITYSDK_OFFSET(0x1AC1FEA0)
#define CLASS_1_9D40F9D90905A4A4_METHOD_1_679599BD235F6A28_OFFSET UNITYSDK_OFFSET(0x1AC19620)
#define CLASS_1_9D40F9D90905A4A4_METHOD_1_C93037C2C383890D_OFFSET UNITYSDK_OFFSET(0x1AC205C0)
#define CLASS_1_9D40F9D90905A4A4_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1AC1C450)
#define CLASS_1_9D40F9D90905A4A4_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x1AC1C260)
#define CLASS_1_9D40F9D90905A4A4_METHOD_1_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x1AC1B180)
#define CLASS_1_9D40F9D90905A4A4_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1AC1C200)
#define CLASS_1_9D40F9D90905A4A4_METHOD_1_FD7D9A8826CCD5F7_OFFSET UNITYSDK_OFFSET(0x1AC19390)
#define CLASS_1_9D40F9D90905A4A4_REMOVE__WORKFINISHEDEVENT_OFFSET UNITYSDK_OFFSET(0x1AC1FD90)
#define CLASS_1_9D40F9D90905A4A4_SET_DEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x1AC20640)
#define CLASS_1_9D40F9D90905A4A4_SET_ID_OFFSET UNITYSDK_OFFSET(0x1AC205E0)
#define CLASS_1_9D40F9D90905A4A4_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1AC20600)
#define CLASS_1_9D40F9D90905A4A4_SET_STARTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1AC20660)
#define CLASS_1_9D40F9D90905A4A4_SET_WORKACTION_OFFSET UNITYSDK_OFFSET(0x1AC20620)
#define CLASS_1_9D40F9D90905A4A4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AC202A0)
#define CLASS_1_9D40F9D90905A4A4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AC1B110)
#define CLASS_1_9D40F9D90905A4A4__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC1B0A0)

inline static constexpr unsigned int Class_1_9D40F9D90905A4A4_TypeDefinitionIndex = 40577;

class Class_1_9D40F9D90905A4A4 : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_Field_1_0()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9D40F9D90905A4A4_TypeDefinitionIndex)->GetStaticField(0x990);
	}
	::System::String* _Name_k__BackingField; // 0x10
	::Class_1_9D40F9D90905A4A4_Class_3_4FF8BBC96790DA30_1* _WorkFinishedEvent; // 0x18
	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_278*>* _WorkAction_k__BackingField; // 0x20
	::Il2CppArray<::Class_0_16E4307DCC419505_279*>* _Dependencies_k__BackingField; // 0x28
	::System::UInt32 _ID_k__BackingField; // 0x30
	::System::Single _StartTimeStamp_k__BackingField; // 0x34
	::RPG::Work::WorkFlags Field_1_7; // 0x38

	::System::Void _ctor(::System::String* a1, ::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_278*>* a2, ::Il2CppArray<::Class_0_16E4307DCC419505_279*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_278*>*, ::Il2CppArray<::Class_0_16E4307DCC419505_279*>*))((::PBYTE)hIl2Cpp + CLASS_1_9D40F9D90905A4A4__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::System::String* a1, ::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_278*>* a2, ::RPG::Work::WorkFlags a3, ::Il2CppArray<::Class_0_16E4307DCC419505_279*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_278*>*, ::RPG::Work::WorkFlags, ::Il2CppArray<::Class_0_16E4307DCC419505_279*>*))((::PBYTE)hIl2Cpp + CLASS_1_9D40F9D90905A4A4__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_FD7D9A8826CCD5F7(::Class_1_9D40F9D90905A4A4_Class_3_4FF8BBC96790DA30_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9D40F9D90905A4A4_Class_3_4FF8BBC96790DA30_1*))((::PBYTE)hIl2Cpp + CLASS_1_9D40F9D90905A4A4_METHOD_1_FD7D9A8826CCD5F7_OFFSET))(this, a1);
	}

	::System::Void Method_1_679599BD235F6A28(::Class_1_9D40F9D90905A4A4_Class_3_4FF8BBC96790DA30_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9D40F9D90905A4A4_Class_3_4FF8BBC96790DA30_1*))((::PBYTE)hIl2Cpp + CLASS_1_9D40F9D90905A4A4_METHOD_1_679599BD235F6A28_OFFSET))(this, a1);
	}

	::System::Void Method_1_00605CD46BC5ED28(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9D40F9D90905A4A4_METHOD_1_00605CD46BC5ED28_OFFSET))(this, a1);
	}

	::System::String* Method_1_00F227E02AED3805()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D40F9D90905A4A4_METHOD_1_00F227E02AED3805_OFFSET))(this);
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

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_278*>* get_WorkAction()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_278*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D40F9D90905A4A4_GET_WORKACTION_OFFSET))(this);
	}

	::System::Void set_WorkAction(::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_278*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_278*>*))((::PBYTE)hIl2Cpp + CLASS_1_9D40F9D90905A4A4_SET_WORKACTION_OFFSET))(this, a1);
	}

	::Il2CppArray<::Class_0_16E4307DCC419505_279*>* get_Dependencies()
	{
		return ((::Il2CppArray<::Class_0_16E4307DCC419505_279*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D40F9D90905A4A4_GET_DEPENDENCIES_OFFSET))(this);
	}

	::System::Void set_Dependencies(::Il2CppArray<::Class_0_16E4307DCC419505_279*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_0_16E4307DCC419505_279*>*))((::PBYTE)hIl2Cpp + CLASS_1_9D40F9D90905A4A4_SET_DEPENDENCIES_OFFSET))(this, a1);
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
