#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_4;
class Class_1_9545B07472DE9BFD;
namespace System { class Exception; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_EFBF8B52CF8996A4_CLASS_1_A59E524B6DD536F0_METHOD_1_96F6E9EA89A38FD1_OFFSET UNITYSDK_OFFSET(0x106A2A30)
#define CLASS_1_EFBF8B52CF8996A4_CLASS_1_A59E524B6DD536F0_METHOD_1_D745D031D2CFFE8A_OFFSET UNITYSDK_OFFSET(0x106A2AC0)
#define CLASS_1_EFBF8B52CF8996A4_CLASS_1_A59E524B6DD536F0__CTOR_OFFSET UNITYSDK_OFFSET(0x106A2A20)

inline static constexpr unsigned int Class_1_EFBF8B52CF8996A4_Class_1_A59E524B6DD536F0_TypeDefinitionIndex = 64724;

class Class_1_EFBF8B52CF8996A4_Class_1_A59E524B6DD536F0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_4* Field_1_1; // 0x10
	::System::Action_2<::System::Int32, ::System::Exception*>* Field_1_3; // 0x18
	::System::UInt16 Field_1_0; // 0x20
	::System::UInt32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFBF8B52CF8996A4_CLASS_1_A59E524B6DD536F0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_96F6E9EA89A38FD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFBF8B52CF8996A4_CLASS_1_A59E524B6DD536F0_METHOD_1_96F6E9EA89A38FD1_OFFSET))(this);
	}

	static ::Class_1_EFBF8B52CF8996A4_Class_1_A59E524B6DD536F0* Method_1_D745D031D2CFFE8A(::Class_1_9545B07472DE9BFD* a1, ::System::Action_2<::System::Int32, ::System::Exception*>* a2)
	{
		return ((::Class_1_EFBF8B52CF8996A4_Class_1_A59E524B6DD536F0*(*)(::Class_1_9545B07472DE9BFD*, ::System::Action_2<::System::Int32, ::System::Exception*>*))((::PBYTE)hIl2Cpp + CLASS_1_EFBF8B52CF8996A4_CLASS_1_A59E524B6DD536F0_METHOD_1_D745D031D2CFFE8A_OFFSET))(a1, a2);
	}
};
