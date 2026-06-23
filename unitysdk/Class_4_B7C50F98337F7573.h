#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_B7C50F98337F7573_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x162CC8A0)
#define CLASS_4_B7C50F98337F7573_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x162CC6F0)
#define CLASS_4_B7C50F98337F7573_METHOD_4_C8969DD7A71D9911_OFFSET UNITYSDK_OFFSET(0x162CC780)
#define CLASS_4_B7C50F98337F7573__CTOR_OFFSET UNITYSDK_OFFSET(0x162CC800)

inline static constexpr unsigned int Class_4_B7C50F98337F7573_TypeDefinitionIndex = 56806;

class Class_4_B7C50F98337F7573 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B7C50F98337F7573__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B7C50F98337F7573_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_C8969DD7A71D9911(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_B7C50F98337F7573_METHOD_4_C8969DD7A71D9911_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B7C50F98337F7573_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
