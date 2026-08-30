#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_952A7C560FC1CD4B.h"

class Class_1_EAF7984A8FAD6BE4;
class Class_3_0E555CA4A7C24310;
class Class_6_024D9C9A4DA753DC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class Class_4_7BB875E6C4315570;

#define CLASS_2_4602423B91FF2599_METHOD_2_4F548348F29E93D9_OFFSET UNITYSDK_OFFSET(0xBE845D0)
#define CLASS_2_4602423B91FF2599_METHOD_2_6D3A4546382BD733_OFFSET UNITYSDK_OFFSET(0xBE84B90)
#define CLASS_2_4602423B91FF2599_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xBE84AF0)
#define CLASS_2_4602423B91FF2599_METHOD_2_AFC8215C57A0845A_OFFSET UNITYSDK_OFFSET(0xBE84620)
#define CLASS_2_4602423B91FF2599_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xBE84980)
#define CLASS_2_4602423B91FF2599_METHOD_2_EC8BD148390A52E1_OFFSET UNITYSDK_OFFSET(0xBE84BA0)
#define CLASS_2_4602423B91FF2599__CTOR_OFFSET UNITYSDK_OFFSET(0xBE84D30)

inline static constexpr unsigned int Class_2_4602423B91FF2599_TypeDefinitionIndex = 49749;

class Class_2_4602423B91FF2599 : public ::Class_1_952A7C560FC1CD4B
{
public:
	::Class_4_7BB875E6C4315570<::Class_3_0E555CA4A7C24310*>* ABJANJPBHEH; // 0x28
	::Class_6_024D9C9A4DA753DC* HOAFIIPDPNA; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* KKHBIELEAOB; // 0x38
	::System::Boolean AMFHEJMFNJM; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4602423B91FF2599__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4F548348F29E93D9(::Class_1_EAF7984A8FAD6BE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_2_4602423B91FF2599_METHOD_2_4F548348F29E93D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4602423B91FF2599_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4602423B91FF2599_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Method_2_6D3A4546382BD733()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4602423B91FF2599_METHOD_2_6D3A4546382BD733_OFFSET))(this);
	}

	::System::Void Method_2_AFC8215C57A0845A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4602423B91FF2599_METHOD_2_AFC8215C57A0845A_OFFSET))(this);
	}

	::System::Single Method_2_EC8BD148390A52E1(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4602423B91FF2599_METHOD_2_EC8BD148390A52E1_OFFSET))(this, a1);
	}
};
