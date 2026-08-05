#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_01D7436DC83C9513_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x10697AF0)
#define CLASS_4_01D7436DC83C9513_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x10697200)
#define CLASS_4_01D7436DC83C9513_METHOD_4_7A00E552FBB51A60_OFFSET UNITYSDK_OFFSET(0x106973B0)
#define CLASS_4_01D7436DC83C9513__CTOR_OFFSET UNITYSDK_OFFSET(0x10697990)

inline static constexpr unsigned int Class_4_01D7436DC83C9513_TypeDefinitionIndex = 80815;

class Class_4_01D7436DC83C9513 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_0; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::System::Int32>*>* Field_4_1; // 0x30
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_4_6; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_7; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_01D7436DC83C9513__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_01D7436DC83C9513_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_7A00E552FBB51A60(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_01D7436DC83C9513_METHOD_4_7A00E552FBB51A60_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_01D7436DC83C9513_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
