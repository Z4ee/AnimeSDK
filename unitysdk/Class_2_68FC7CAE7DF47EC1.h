#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

class Class_1_EA1FEF8121ADE963;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_68FC7CAE7DF47EC1_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x10A095F0)
#define CLASS_2_68FC7CAE7DF47EC1_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x10A09450)
#define CLASS_2_68FC7CAE7DF47EC1_METHOD_2_AE2FA2713E38451D_OFFSET UNITYSDK_OFFSET(0x10A097B0)
#define CLASS_2_68FC7CAE7DF47EC1_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x10A09720)
#define CLASS_2_68FC7CAE7DF47EC1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10A09680)
#define CLASS_2_68FC7CAE7DF47EC1_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x10A09530)
#define CLASS_2_68FC7CAE7DF47EC1__CCTOR_OFFSET UNITYSDK_OFFSET(0x10A09570)
#define CLASS_2_68FC7CAE7DF47EC1__CTOR_OFFSET UNITYSDK_OFFSET(0x10A095E0)

inline static constexpr unsigned int Class_2_68FC7CAE7DF47EC1_TypeDefinitionIndex = 74924;

class Class_2_68FC7CAE7DF47EC1 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_4 = 0xEC; // 0x0
	::Class_1_EA1FEF8121ADE963* Field_2_5; // 0x20
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_6; // 0x28
	::System::UInt32 Field_2_0; // 0x30
	::System::Boolean Field_2_7; // 0x34

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_68FC7CAE7DF47EC1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68FC7CAE7DF47EC1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68FC7CAE7DF47EC1_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::Class_1_EA1FEF8121ADE963* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_EA1FEF8121ADE963*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68FC7CAE7DF47EC1_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68FC7CAE7DF47EC1_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68FC7CAE7DF47EC1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68FC7CAE7DF47EC1_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_AE2FA2713E38451D(::System::UInt32 a1, ::System::UInt32 a2, ::Class_1_EA1FEF8121ADE963* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Class_1_EA1FEF8121ADE963*))((::PBYTE)hIl2Cpp + CLASS_2_68FC7CAE7DF47EC1_METHOD_2_AE2FA2713E38451D_OFFSET))(this, a1, a2, a3);
	}
};
