#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Work/WorkFlags.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_260;
class Class_0_16E4307DCC419505_261;
class Class_1_8E541422F89D76B8_Class_3_4FF8BBC96790DA30_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_8E541422F89D76B8_ADD__WORKFINISHEDEVENT_OFFSET UNITYSDK_OFFSET(0x1834B390)
#define CLASS_1_8E541422F89D76B8_GET_DEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x1834C2B0)
#define CLASS_1_8E541422F89D76B8_GET_ID_OFFSET UNITYSDK_OFFSET(0x1834C250)
#define CLASS_1_8E541422F89D76B8_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1834C270)
#define CLASS_1_8E541422F89D76B8_GET_STARTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1834C310)
#define CLASS_1_8E541422F89D76B8_GET_WORKACTION_OFFSET UNITYSDK_OFFSET(0x1834C290)
#define CLASS_1_8E541422F89D76B8_METHOD_1_00605CD46BC5ED28_OFFSET UNITYSDK_OFFSET(0x1834B490)
#define CLASS_1_8E541422F89D76B8_METHOD_1_00F227E02AED3805_OFFSET UNITYSDK_OFFSET(0x1834BAB0)
#define CLASS_1_8E541422F89D76B8_METHOD_1_679599BD235F6A28_OFFSET UNITYSDK_OFFSET(0x1834B410)
#define CLASS_1_8E541422F89D76B8_METHOD_1_C93037C2C383890D_OFFSET UNITYSDK_OFFSET(0x1834C240)
#define CLASS_1_8E541422F89D76B8_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1834C2E0)
#define CLASS_1_8E541422F89D76B8_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x1834C2F0)
#define CLASS_1_8E541422F89D76B8_METHOD_1_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x1834C300)
#define CLASS_1_8E541422F89D76B8_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1834C2D0)
#define CLASS_1_8E541422F89D76B8_METHOD_1_FD7D9A8826CCD5F7_OFFSET UNITYSDK_OFFSET(0x1834B230)
#define CLASS_1_8E541422F89D76B8_REMOVE__WORKFINISHEDEVENT_OFFSET UNITYSDK_OFFSET(0x1834B310)
#define CLASS_1_8E541422F89D76B8_SET_DEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x1834C2C0)
#define CLASS_1_8E541422F89D76B8_SET_ID_OFFSET UNITYSDK_OFFSET(0x1834C260)
#define CLASS_1_8E541422F89D76B8_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1834C280)
#define CLASS_1_8E541422F89D76B8_SET_STARTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1834C320)
#define CLASS_1_8E541422F89D76B8_SET_WORKACTION_OFFSET UNITYSDK_OFFSET(0x1834C2A0)
#define CLASS_1_8E541422F89D76B8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1834BEC0)
#define CLASS_1_8E541422F89D76B8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1834B200)
#define CLASS_1_8E541422F89D76B8__CTOR_OFFSET UNITYSDK_OFFSET(0x1834B1D0)

inline static constexpr unsigned int Class_1_8E541422F89D76B8_TypeDefinitionIndex = 33953;

class Class_1_8E541422F89D76B8 : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_Field_1_5()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E541422F89D76B8_TypeDefinitionIndex)->GetStaticField(0xCD0);
	}
	::System::String* _Name_k__BackingField; // 0x10
	::Il2CppArray<::Class_0_16E4307DCC419505_261*>* _Dependencies_k__BackingField; // 0x18
	::Class_1_8E541422F89D76B8_Class_3_4FF8BBC96790DA30_1* _WorkFinishedEvent; // 0x20
	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_260*>* _WorkAction_k__BackingField; // 0x28
	::System::Single _StartTimeStamp_k__BackingField; // 0x30
	::RPG::Work::WorkFlags Field_1_6; // 0x34
	::System::UInt32 _ID_k__BackingField; // 0x38

	::System::Void _ctor(::System::String* a1, ::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_260*>* a2, ::Il2CppArray<::Class_0_16E4307DCC419505_261*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_260*>*, ::Il2CppArray<::Class_0_16E4307DCC419505_261*>*))((::PBYTE)hIl2Cpp + CLASS_1_8E541422F89D76B8__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::System::String* a1, ::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_260*>* a2, ::RPG::Work::WorkFlags a3, ::Il2CppArray<::Class_0_16E4307DCC419505_261*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_260*>*, ::RPG::Work::WorkFlags, ::Il2CppArray<::Class_0_16E4307DCC419505_261*>*))((::PBYTE)hIl2Cpp + CLASS_1_8E541422F89D76B8__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_FD7D9A8826CCD5F7(::Class_1_8E541422F89D76B8_Class_3_4FF8BBC96790DA30_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8E541422F89D76B8_Class_3_4FF8BBC96790DA30_1*))((::PBYTE)hIl2Cpp + CLASS_1_8E541422F89D76B8_METHOD_1_FD7D9A8826CCD5F7_OFFSET))(this, a1);
	}

	::System::Void Method_1_679599BD235F6A28(::Class_1_8E541422F89D76B8_Class_3_4FF8BBC96790DA30_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8E541422F89D76B8_Class_3_4FF8BBC96790DA30_1*))((::PBYTE)hIl2Cpp + CLASS_1_8E541422F89D76B8_METHOD_1_679599BD235F6A28_OFFSET))(this, a1);
	}

	::System::Void Method_1_00605CD46BC5ED28(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8E541422F89D76B8_METHOD_1_00605CD46BC5ED28_OFFSET))(this, a1);
	}

	::System::String* Method_1_00F227E02AED3805()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E541422F89D76B8_METHOD_1_00F227E02AED3805_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E541422F89D76B8_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Method_1_C93037C2C383890D(::RPG::Work::WorkFlags a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Work::WorkFlags))((::PBYTE)hIl2Cpp + CLASS_1_8E541422F89D76B8_METHOD_1_C93037C2C383890D_OFFSET))(this, a1);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E541422F89D76B8_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8E541422F89D76B8_SET_ID_OFFSET))(this, value);
	}

	::System::String* get_Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E541422F89D76B8_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8E541422F89D76B8_SET_NAME_OFFSET))(this, value);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_260*>* get_WorkAction()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_260*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E541422F89D76B8_GET_WORKACTION_OFFSET))(this);
	}

	::System::Void set_WorkAction(::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_260*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_260*>*))((::PBYTE)hIl2Cpp + CLASS_1_8E541422F89D76B8_SET_WORKACTION_OFFSET))(this, value);
	}

	::Il2CppArray<::Class_0_16E4307DCC419505_261*>* get_Dependencies()
	{
		return ((::Il2CppArray<::Class_0_16E4307DCC419505_261*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E541422F89D76B8_GET_DEPENDENCIES_OFFSET))(this);
	}

	::System::Void set_Dependencies(::Il2CppArray<::Class_0_16E4307DCC419505_261*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_0_16E4307DCC419505_261*>*))((::PBYTE)hIl2Cpp + CLASS_1_8E541422F89D76B8_SET_DEPENDENCIES_OFFSET))(this, value);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E541422F89D76B8_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E541422F89D76B8_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E541422F89D76B8_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E541422F89D76B8_METHOD_1_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Single get_StartTimeStamp()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E541422F89D76B8_GET_STARTTIMESTAMP_OFFSET))(this);
	}

	::System::Void set_StartTimeStamp(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8E541422F89D76B8_SET_STARTTIMESTAMP_OFFSET))(this, value);
	}

	::System::Void add__WorkFinishedEvent(::Class_1_8E541422F89D76B8_Class_3_4FF8BBC96790DA30_1* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8E541422F89D76B8_Class_3_4FF8BBC96790DA30_1*))((::PBYTE)hIl2Cpp + CLASS_1_8E541422F89D76B8_ADD__WORKFINISHEDEVENT_OFFSET))(this, value);
	}

	::System::Void remove__WorkFinishedEvent(::Class_1_8E541422F89D76B8_Class_3_4FF8BBC96790DA30_1* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8E541422F89D76B8_Class_3_4FF8BBC96790DA30_1*))((::PBYTE)hIl2Cpp + CLASS_1_8E541422F89D76B8_REMOVE__WORKFINISHEDEVENT_OFFSET))(this, value);
	}
};
