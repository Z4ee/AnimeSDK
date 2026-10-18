#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_4.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1035;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_CD6736B46496BBF4_METHOD_1_A923AD73A50F79C3_OFFSET UNITYSDK_OFFSET(0x12CF6C60)
#define CLASS_1_CD6736B46496BBF4_METHOD_1_CC9C9A9047B24E05_OFFSET UNITYSDK_OFFSET(0x12CF6D20)
#define CLASS_1_CD6736B46496BBF4__CTOR_OFFSET UNITYSDK_OFFSET(0x12CF6C50)

inline static constexpr unsigned int Class_1_CD6736B46496BBF4_TypeDefinitionIndex = 67113;

class Class_1_CD6736B46496BBF4 : public ::System::Object
{
public:
	::System::Action_1<::Class_0_16E4307DCC419505_1035*>* CGFIKAICAAC; // 0x10
	::Enum_3_63BCB6C405BA8A1D_4 BPKKKMOCFIP; // 0x18

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_4))((::PBYTE)hIl2Cpp + CLASS_1_CD6736B46496BBF4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_A923AD73A50F79C3(::System::Action_1<::Class_0_16E4307DCC419505_1035*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_0_16E4307DCC419505_1035*>*))((::PBYTE)hIl2Cpp + CLASS_1_CD6736B46496BBF4_METHOD_1_A923AD73A50F79C3_OFFSET))(this, a1);
	}

	::System::Void Method_1_CC9C9A9047B24E05(::Class_0_16E4307DCC419505_1035* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1035*))((::PBYTE)hIl2Cpp + CLASS_1_CD6736B46496BBF4_METHOD_1_CC9C9A9047B24E05_OFFSET))(this, a1);
	}
};
