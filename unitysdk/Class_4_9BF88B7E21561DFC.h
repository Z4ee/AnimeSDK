#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_9BF88B7E21561DFC_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xD472D30)
#define CLASS_4_9BF88B7E21561DFC_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xD473290)
#define CLASS_4_9BF88B7E21561DFC_METHOD_4_E6101D93928B4095_OFFSET UNITYSDK_OFFSET(0xD472E80)
#define CLASS_4_9BF88B7E21561DFC__CTOR_OFFSET UNITYSDK_OFFSET(0xD473160)

inline static constexpr unsigned int Class_4_9BF88B7E21561DFC_TypeDefinitionIndex = 68531;

class Class_4_9BF88B7E21561DFC : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_2; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_1; // 0x30
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_4_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9BF88B7E21561DFC__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9BF88B7E21561DFC_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_E6101D93928B4095(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_9BF88B7E21561DFC_METHOD_4_E6101D93928B4095_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9BF88B7E21561DFC_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
