#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C2937544035FD07F.h"

class Class_2_A00D2DACD4105D89;
class Class_3_2F1996701B3D3016;
class Class_3_87492AF8E794E45E_14;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F464DDE3EC5789CD_METHOD_2_0FB6A826C9E17C78_OFFSET UNITYSDK_OFFSET(0x124EF9D0)
#define CLASS_2_F464DDE3EC5789CD_METHOD_2_207146490BB7E633_OFFSET UNITYSDK_OFFSET(0x124F0220)
#define CLASS_2_F464DDE3EC5789CD_METHOD_2_25DEA5C65A602671_1_OFFSET UNITYSDK_OFFSET(0x124EFF70)
#define CLASS_2_F464DDE3EC5789CD_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x124EFC80)
#define CLASS_2_F464DDE3EC5789CD_METHOD_2_351EC58F05947F54_OFFSET UNITYSDK_OFFSET(0x124F0090)
#define CLASS_2_F464DDE3EC5789CD_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x124EF800)
#define CLASS_2_F464DDE3EC5789CD_METHOD_2_A45081B524FCB181_OFFSET UNITYSDK_OFFSET(0x124EFDA0)
#define CLASS_2_F464DDE3EC5789CD_ONSTART_OFFSET UNITYSDK_OFFSET(0x124EF8B0)
#define CLASS_2_F464DDE3EC5789CD__CTOR_OFFSET UNITYSDK_OFFSET(0x124EF9C0)

inline static constexpr unsigned int Class_2_F464DDE3EC5789CD_TypeDefinitionIndex = 89878;

class Class_2_F464DDE3EC5789CD : public ::Class_1_C2937544035FD07F
{
public:
	::Class_2_A00D2DACD4105D89* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F464DDE3EC5789CD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F464DDE3EC5789CD_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F464DDE3EC5789CD_ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_0FB6A826C9E17C78(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_F464DDE3EC5789CD_METHOD_2_0FB6A826C9E17C78_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F464DDE3EC5789CD_METHOD_2_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_2_A45081B524FCB181(::System::UInt32 a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_F464DDE3EC5789CD_METHOD_2_A45081B524FCB181_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_25DEA5C65A602671_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F464DDE3EC5789CD_METHOD_2_25DEA5C65A602671_1_OFFSET))(this);
	}

	::System::Void Method_2_351EC58F05947F54(::System::Action_1<::Class_3_2F1996701B3D3016*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_3_2F1996701B3D3016*>*))((::PBYTE)hIl2Cpp + CLASS_2_F464DDE3EC5789CD_METHOD_2_351EC58F05947F54_OFFSET))(this, a1);
	}

	::System::Void Method_2_207146490BB7E633(::Class_3_87492AF8E794E45E_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_87492AF8E794E45E_14*))((::PBYTE)hIl2Cpp + CLASS_2_F464DDE3EC5789CD_METHOD_2_207146490BB7E633_OFFSET))(this, a1);
	}
};
