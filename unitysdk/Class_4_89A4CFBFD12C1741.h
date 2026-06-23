#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_89A4CFBFD12C1741_METHOD_4_052FAABF5BB8BE83_OFFSET UNITYSDK_OFFSET(0x14985370)
#define CLASS_4_89A4CFBFD12C1741_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x149858B0)
#define CLASS_4_89A4CFBFD12C1741_METHOD_4_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x14985160)
#define CLASS_4_89A4CFBFD12C1741__CTOR_OFFSET UNITYSDK_OFFSET(0x14985710)

inline static constexpr unsigned int Class_4_89A4CFBFD12C1741_TypeDefinitionIndex = 81788;

class Class_4_89A4CFBFD12C1741 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_4_4; // 0x30
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_4_1; // 0x38
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_4_2; // 0x40
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_4_3; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_89A4CFBFD12C1741__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_89A4CFBFD12C1741_METHOD_4_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_4_052FAABF5BB8BE83(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_89A4CFBFD12C1741_METHOD_4_052FAABF5BB8BE83_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_89A4CFBFD12C1741_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
