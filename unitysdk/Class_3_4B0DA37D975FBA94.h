#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_1_E4DCFD174698F990;
class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_4B0DA37D975FBA94_METHOD_3_0D25BC74DF85E464_OFFSET UNITYSDK_OFFSET(0x140C7500)
#define CLASS_3_4B0DA37D975FBA94_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x140C6EC0)
#define CLASS_3_4B0DA37D975FBA94_METHOD_3_9C36AFA140789703_OFFSET UNITYSDK_OFFSET(0x140C6D70)
#define CLASS_3_4B0DA37D975FBA94_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x140C78B0)
#define CLASS_3_4B0DA37D975FBA94_METHOD_3_D8F007BBCA9CFCB2_OFFSET UNITYSDK_OFFSET(0x140C7120)
#define CLASS_3_4B0DA37D975FBA94_METHOD_3_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x140C7820)
#define CLASS_3_4B0DA37D975FBA94__CTOR_OFFSET UNITYSDK_OFFSET(0x140C7660)

inline static constexpr unsigned int Class_3_4B0DA37D975FBA94_TypeDefinitionIndex = 51898;

class Class_3_4B0DA37D975FBA94 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* Field_3_2; // 0x18
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_3; // 0x20
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_3_1; // 0x28
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x30
	::Class_3_B537A0AA78803363* Field_3_5; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_3_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4B0DA37D975FBA94__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9C36AFA140789703(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_3_4B0DA37D975FBA94_METHOD_3_9C36AFA140789703_OFFSET))(this, a1);
	}

	::System::Void Method_3_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4B0DA37D975FBA94_METHOD_3_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_3_D8F007BBCA9CFCB2(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_4B0DA37D975FBA94_METHOD_3_D8F007BBCA9CFCB2_OFFSET))(this, a1);
	}

	::System::Void Method_3_E9A575D18A0748D9(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_3_4B0DA37D975FBA94_METHOD_3_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_0D25BC74DF85E464(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_4B0DA37D975FBA94_METHOD_3_0D25BC74DF85E464_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4B0DA37D975FBA94_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
