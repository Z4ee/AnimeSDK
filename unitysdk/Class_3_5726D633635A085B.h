#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_5726D633635A085B_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x158607E0)
#define CLASS_3_5726D633635A085B_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15861360)
#define CLASS_3_5726D633635A085B_METHOD_3_D7D32BC455E1AEBB_OFFSET UNITYSDK_OFFSET(0x15860AA0)
#define CLASS_3_5726D633635A085B__CTOR_OFFSET UNITYSDK_OFFSET(0x15861160)

inline static constexpr unsigned int Class_3_5726D633635A085B_TypeDefinitionIndex = 70558;

class Class_3_5726D633635A085B : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_10; // 0x18
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_6; // 0x20
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::System::String*>*>* Field_3_11; // 0x28
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_3_4; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_3_5; // 0x40
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_3_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5726D633635A085B__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5726D633635A085B_METHOD_3_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_3_D7D32BC455E1AEBB(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_5726D633635A085B_METHOD_3_D7D32BC455E1AEBB_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5726D633635A085B_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
