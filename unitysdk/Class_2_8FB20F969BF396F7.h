#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C2937544035FD07F.h"

class Class_2_3F6C09E90314E9AB;
class Class_3_79F5DCFD14B4B27B;
class Class_3_EEABD7221BA6BEC2;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_8FB20F969BF396F7_METHOD_2_0FB6A826C9E17C78_OFFSET UNITYSDK_OFFSET(0x110798B0)
#define CLASS_2_8FB20F969BF396F7_METHOD_2_207146490BB7E633_OFFSET UNITYSDK_OFFSET(0x11079640)
#define CLASS_2_8FB20F969BF396F7_METHOD_2_351EC58F05947F54_OFFSET UNITYSDK_OFFSET(0x110794B0)
#define CLASS_2_8FB20F969BF396F7_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11078FF0)
#define CLASS_2_8FB20F969BF396F7_METHOD_2_775B6D644F07B554_1_OFFSET UNITYSDK_OFFSET(0x11079790)
#define CLASS_2_8FB20F969BF396F7_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x110791C0)
#define CLASS_2_8FB20F969BF396F7_METHOD_2_9DCE53F2A478D1A2_OFFSET UNITYSDK_OFFSET(0x110792E0)
#define CLASS_2_8FB20F969BF396F7_ONSTART_OFFSET UNITYSDK_OFFSET(0x110790A0)
#define CLASS_2_8FB20F969BF396F7__CTOR_OFFSET UNITYSDK_OFFSET(0x110791B0)

inline static constexpr unsigned int Class_2_8FB20F969BF396F7_TypeDefinitionIndex = 52097;

class Class_2_8FB20F969BF396F7 : public ::Class_1_C2937544035FD07F
{
public:
	::Class_2_3F6C09E90314E9AB* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FB20F969BF396F7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FB20F969BF396F7_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FB20F969BF396F7_ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FB20F969BF396F7_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_2_9DCE53F2A478D1A2(::System::UInt32 a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_8FB20F969BF396F7_METHOD_2_9DCE53F2A478D1A2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_351EC58F05947F54(::System::Action_1<::Class_3_79F5DCFD14B4B27B*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_3_79F5DCFD14B4B27B*>*))((::PBYTE)hIl2Cpp + CLASS_2_8FB20F969BF396F7_METHOD_2_351EC58F05947F54_OFFSET))(this, a1);
	}

	::System::Void Method_2_207146490BB7E633(::Class_3_EEABD7221BA6BEC2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_EEABD7221BA6BEC2*))((::PBYTE)hIl2Cpp + CLASS_2_8FB20F969BF396F7_METHOD_2_207146490BB7E633_OFFSET))(this, a1);
	}

	::System::Void Method_2_775B6D644F07B554_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FB20F969BF396F7_METHOD_2_775B6D644F07B554_1_OFFSET))(this);
	}

	::System::Void Method_2_0FB6A826C9E17C78(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_8FB20F969BF396F7_METHOD_2_0FB6A826C9E17C78_OFFSET))(this, a1, a2);
	}
};
