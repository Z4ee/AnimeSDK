#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_011F5F8CC4313C2D_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x13F73530)
#define CLASS_4_011F5F8CC4313C2D_METHOD_4_3574512695A597AB_OFFSET UNITYSDK_OFFSET(0x13F725F0)
#define CLASS_4_011F5F8CC4313C2D_METHOD_4_C43DD7AFEEA2B827_OFFSET UNITYSDK_OFFSET(0x13F72A30)
#define CLASS_4_011F5F8CC4313C2D__CTOR_OFFSET UNITYSDK_OFFSET(0x13F73230)

inline static constexpr unsigned int Class_4_011F5F8CC4313C2D_TypeDefinitionIndex = 71301;

class Class_4_011F5F8CC4313C2D : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_6; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_4; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_9; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_2; // 0x40
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_1; // 0x48
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_4_7; // 0x50
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* Field_4_8; // 0x58
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::System::String*>*>* Field_4_10; // 0x60
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_0; // 0x68
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_3; // 0x70
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_5; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_011F5F8CC4313C2D__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_3574512695A597AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_011F5F8CC4313C2D_METHOD_4_3574512695A597AB_OFFSET))(this);
	}

	::System::Void Method_4_C43DD7AFEEA2B827(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_011F5F8CC4313C2D_METHOD_4_C43DD7AFEEA2B827_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_011F5F8CC4313C2D_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
