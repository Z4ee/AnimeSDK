#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_842;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_CD6736B46496BBF4_METHOD_1_88AD2FF46F46C80C_OFFSET UNITYSDK_OFFSET(0x10C96180)
#define CLASS_1_CD6736B46496BBF4_METHOD_1_CC9C9A9047B24E05_OFFSET UNITYSDK_OFFSET(0x10C961E0)
#define CLASS_1_CD6736B46496BBF4__CTOR_OFFSET UNITYSDK_OFFSET(0x10C96170)

inline static constexpr unsigned int Class_1_CD6736B46496BBF4_TypeDefinitionIndex = 62749;

class Class_1_CD6736B46496BBF4 : public ::System::Object
{
public:
	::System::Action_1<::Class_0_16E4307DCC419505_842*>* Field_1_0; // 0x10
	::Enum_3_63BCB6C405BA8A1D_2 Field_1_1; // 0x18

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_2))((::PBYTE)hIl2Cpp + CLASS_1_CD6736B46496BBF4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_88AD2FF46F46C80C(::System::Action_1<::Class_0_16E4307DCC419505_842*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_0_16E4307DCC419505_842*>*))((::PBYTE)hIl2Cpp + CLASS_1_CD6736B46496BBF4_METHOD_1_88AD2FF46F46C80C_OFFSET))(this, a1);
	}

	::System::Void Method_1_CC9C9A9047B24E05(::Class_0_16E4307DCC419505_842* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_842*))((::PBYTE)hIl2Cpp + CLASS_1_CD6736B46496BBF4_METHOD_1_CC9C9A9047B24E05_OFFSET))(this, a1);
	}
};
