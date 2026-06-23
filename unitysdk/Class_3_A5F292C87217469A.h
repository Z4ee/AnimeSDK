#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_0_16E4307DCC419505_44;
class Class_1_CED4C4BADCBE81C2;
class Class_2_456958B23DC020CE;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_A5F292C87217469A_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13B46910)
#define CLASS_3_A5F292C87217469A_METHOD_3_128774387667156B_OFFSET UNITYSDK_OFFSET(0x13B46AC0)
#define CLASS_3_A5F292C87217469A_METHOD_3_3DD62C523982CE25_OFFSET UNITYSDK_OFFSET(0x13B46B00)
#define CLASS_3_A5F292C87217469A_METHOD_3_52843B847BEFBCAA_OFFSET UNITYSDK_OFFSET(0x13B46B10)
#define CLASS_3_A5F292C87217469A_METHOD_3_977A5C8234F34C98_OFFSET UNITYSDK_OFFSET(0x13B46D20)
#define CLASS_3_A5F292C87217469A_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x13B46C90)
#define CLASS_3_A5F292C87217469A_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x13B46C80)
#define CLASS_3_A5F292C87217469A_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13B46C70)
#define CLASS_3_A5F292C87217469A_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13B46590)
#define CLASS_3_A5F292C87217469A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x13B466A0)
#define CLASS_3_A5F292C87217469A__CCTOR_OFFSET UNITYSDK_OFFSET(0x13B46960)
#define CLASS_3_A5F292C87217469A__CTOR_OFFSET UNITYSDK_OFFSET(0x13B469E0)

inline static constexpr unsigned int Class_3_A5F292C87217469A_TypeDefinitionIndex = 65908;

class Class_3_A5F292C87217469A : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_6 = 0xBB; // 0x0
	::System::Action* Field_3_4; // 0x48
	::System::Collections::Generic::List_1<::Class_1_CED4C4BADCBE81C2*>* Field_3_5; // 0x50
	::Class_0_16E4307DCC419505_44* Field_3_0; // 0x58
	::System::Collections::Generic::List_1<::Class_2_456958B23DC020CE*>* Field_3_1; // 0x60
	::System::Boolean Field_3_3; // 0x68
	::System::Single Field_3_2; // 0x6C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A5F292C87217469A__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5F292C87217469A__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5F292C87217469A_ONCLEAN_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5F292C87217469A_TOSTRING_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5F292C87217469A_GETCLASSID_OFFSET))(this);
	}

	::System::String* Method_3_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5F292C87217469A_METHOD_3_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_3_3DD62C523982CE25(::System::Collections::Generic::List_1<::Class_2_456958B23DC020CE*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_456958B23DC020CE*>*))((::PBYTE)hIl2Cpp + CLASS_3_A5F292C87217469A_METHOD_3_3DD62C523982CE25_OFFSET))(this, a1);
	}

	static ::Class_3_A5F292C87217469A* Method_3_52843B847BEFBCAA()
	{
		return ((::Class_3_A5F292C87217469A*(*)())((::PBYTE)hIl2Cpp + CLASS_3_A5F292C87217469A_METHOD_3_52843B847BEFBCAA_OFFSET))();
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5F292C87217469A_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A5F292C87217469A_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5F292C87217469A_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_456958B23DC020CE*>* Method_3_977A5C8234F34C98()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_456958B23DC020CE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5F292C87217469A_METHOD_3_977A5C8234F34C98_OFFSET))(this);
	}
};
