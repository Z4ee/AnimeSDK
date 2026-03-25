#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_8D1F4CBFE61774F3;
class Class_2_19B073890834B7DD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A713B041081271E7_METHOD_2_5E332DD268462C0B_OFFSET UNITYSDK_OFFSET(0x115A4D30)
#define CLASS_2_A713B041081271E7_METHOD_2_7206DC8F66A4D2A8_1_OFFSET UNITYSDK_OFFSET(0x115A49D0)
#define CLASS_2_A713B041081271E7_METHOD_2_7206DC8F66A4D2A8_OFFSET UNITYSDK_OFFSET(0x115A48B0)
#define CLASS_2_A713B041081271E7_METHOD_2_760C441FBCB7CAF7_OFFSET UNITYSDK_OFFSET(0x115A4AF0)
#define CLASS_2_A713B041081271E7_METHOD_2_96DDE37D4E1F865F_OFFSET UNITYSDK_OFFSET(0x115A4F50)
#define CLASS_2_A713B041081271E7_METHOD_2_CFE83945BCC6EF41_OFFSET UNITYSDK_OFFSET(0x115A4E00)
#define CLASS_2_A713B041081271E7_METHOD_2_ED34DCC6F6541B09_OFFSET UNITYSDK_OFFSET(0x115A4C80)
#define CLASS_2_A713B041081271E7__CTOR_OFFSET UNITYSDK_OFFSET(0x115A50A0)

inline static constexpr unsigned int Class_2_A713B041081271E7_TypeDefinitionIndex = 58527;

class Class_2_A713B041081271E7 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_1; // 0x0
	::System::Collections::Generic::List_1<::Class_2_19B073890834B7DD*>* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A713B041081271E7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7206DC8F66A4D2A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A713B041081271E7_METHOD_2_7206DC8F66A4D2A8_OFFSET))(this);
	}

	::System::Void Method_2_7206DC8F66A4D2A8_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A713B041081271E7_METHOD_2_7206DC8F66A4D2A8_1_OFFSET))(this);
	}

	::System::Void Method_2_760C441FBCB7CAF7(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A713B041081271E7_METHOD_2_760C441FBCB7CAF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5E332DD268462C0B(::System::Collections::Generic::List_1<::Class_1_8D1F4CBFE61774F3*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_8D1F4CBFE61774F3*>*))((::PBYTE)hIl2Cpp + CLASS_2_A713B041081271E7_METHOD_2_5E332DD268462C0B_OFFSET))(this, a1);
	}

	::System::Void Method_2_CFE83945BCC6EF41(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A713B041081271E7_METHOD_2_CFE83945BCC6EF41_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_96DDE37D4E1F865F(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A713B041081271E7_METHOD_2_96DDE37D4E1F865F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_ED34DCC6F6541B09(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A713B041081271E7_METHOD_2_ED34DCC6F6541B09_OFFSET))(this, a1);
	}
};
