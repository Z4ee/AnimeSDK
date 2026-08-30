#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F516C49FBFFD7507;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3E04A2025797BCBF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1997F380)
#define CLASS_1_3E04A2025797BCBF_METHOD_1_0A7C75AE549C5CCF_OFFSET UNITYSDK_OFFSET(0x1997EF90)
#define CLASS_1_3E04A2025797BCBF_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x1997EF30)
#define CLASS_1_3E04A2025797BCBF_METHOD_1_1AFA9AA538C1EAD8_OFFSET UNITYSDK_OFFSET(0x1997F570)
#define CLASS_1_3E04A2025797BCBF_METHOD_1_64D4218A6D7E75F0_OFFSET UNITYSDK_OFFSET(0x1997F8E0)
#define CLASS_1_3E04A2025797BCBF_METHOD_1_6B4A3A1B5816B81E_OFFSET UNITYSDK_OFFSET(0x1997F140)
#define CLASS_1_3E04A2025797BCBF_METHOD_1_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x1997FA70)
#define CLASS_1_3E04A2025797BCBF_METHOD_1_FF0BED909298199C_OFFSET UNITYSDK_OFFSET(0x1997F260)
#define CLASS_1_3E04A2025797BCBF_TICK_OFFSET UNITYSDK_OFFSET(0x1997F420)
#define CLASS_1_3E04A2025797BCBF__CTOR_OFFSET UNITYSDK_OFFSET(0x1997FAD0)

inline static constexpr unsigned int Class_1_3E04A2025797BCBF_TypeDefinitionIndex = 60855;

class Class_1_3E04A2025797BCBF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_F516C49FBFFD7507*>* IKOCAOENCFG; // 0x10
	::System::Boolean MHEAIOMEGCA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E04A2025797BCBF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3E04A2025797BCBF_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_6B4A3A1B5816B81E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E04A2025797BCBF_METHOD_1_6B4A3A1B5816B81E_OFFSET))(this);
	}

	::System::Void Method_1_FF0BED909298199C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E04A2025797BCBF_METHOD_1_FF0BED909298199C_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E04A2025797BCBF_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3E04A2025797BCBF_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_1_1AFA9AA538C1EAD8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3E04A2025797BCBF_METHOD_1_1AFA9AA538C1EAD8_OFFSET))(this, a1);
	}

	::System::Void Method_1_64D4218A6D7E75F0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3E04A2025797BCBF_METHOD_1_64D4218A6D7E75F0_OFFSET))(this, a1);
	}

	::System::Void Method_1_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3E04A2025797BCBF_METHOD_1_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_1_0A7C75AE549C5CCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E04A2025797BCBF_METHOD_1_0A7C75AE549C5CCF_OFFSET))(this);
	}
};
