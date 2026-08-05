#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C2937544035FD07F.h"

class Class_3_EC335C1F34DF1320;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4303B303734B1461_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x194C9560)
#define CLASS_2_4303B303734B1461_METHOD_2_2B5AA16931CCAEE6_OFFSET UNITYSDK_OFFSET(0x194C9000)
#define CLASS_2_4303B303734B1461_METHOD_2_351EC58F05947F54_OFFSET UNITYSDK_OFFSET(0x194C9810)
#define CLASS_2_4303B303734B1461_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x194C8F40)
#define CLASS_2_4303B303734B1461_METHOD_2_601F640857BFB221_OFFSET UNITYSDK_OFFSET(0x194C91D0)
#define CLASS_2_4303B303734B1461_METHOD_2_F84C45E5D7C025B0_OFFSET UNITYSDK_OFFSET(0x194C9680)
#define CLASS_2_4303B303734B1461_METHOD_2_F9CACB0AE4F2192A_OFFSET UNITYSDK_OFFSET(0x194C9370)
#define CLASS_2_4303B303734B1461_ONSTART_OFFSET UNITYSDK_OFFSET(0x194C8F00)
#define CLASS_2_4303B303734B1461__CTOR_OFFSET UNITYSDK_OFFSET(0x194C8FF0)

inline static constexpr unsigned int Class_2_4303B303734B1461_TypeDefinitionIndex = 82926;

class Class_2_4303B303734B1461 : public ::Class_1_C2937544035FD07F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4303B303734B1461__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4303B303734B1461_ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4303B303734B1461_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_2B5AA16931CCAEE6(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_4303B303734B1461_METHOD_2_2B5AA16931CCAEE6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_601F640857BFB221(::System::UInt32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_4303B303734B1461_METHOD_2_601F640857BFB221_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F9CACB0AE4F2192A(::Class_3_EC335C1F34DF1320* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_EC335C1F34DF1320*))((::PBYTE)hIl2Cpp + CLASS_2_4303B303734B1461_METHOD_2_F9CACB0AE4F2192A_OFFSET))(this, a1);
	}

	::System::Void Method_2_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4303B303734B1461_METHOD_2_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_2_F84C45E5D7C025B0(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_4303B303734B1461_METHOD_2_F84C45E5D7C025B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_351EC58F05947F54(::System::Action_1<::Class_3_EC335C1F34DF1320*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_3_EC335C1F34DF1320*>*))((::PBYTE)hIl2Cpp + CLASS_2_4303B303734B1461_METHOD_2_351EC58F05947F54_OFFSET))(this, a1);
	}
};
