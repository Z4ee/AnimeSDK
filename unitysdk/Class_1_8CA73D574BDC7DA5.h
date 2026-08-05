#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F8C71DEE253F84BD.h"
#include "unitysdk/Struct_2_57C422EDEAAA7766.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_299;
class Class_2_CEC585D0736F3660;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_8CA73D574BDC7DA5_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1249CE50)
#define CLASS_1_8CA73D574BDC7DA5_METHOD_1_E9DCB8C06425A332_OFFSET UNITYSDK_OFFSET(0x1249CE90)
#define CLASS_1_8CA73D574BDC7DA5__CTOR_OFFSET UNITYSDK_OFFSET(0x1249CE10)

inline static constexpr unsigned int Class_1_8CA73D574BDC7DA5_TypeDefinitionIndex = 58013;

class Class_1_8CA73D574BDC7DA5 : public ::System::Object
{
public:
	::System::Action* Field_1_7; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::Action_1<::Class_2_CEC585D0736F3660*>* Field_1_5; // 0x20
	::Il2CppArray<::Struct_2_57C422EDEAAA7766>* Field_1_2; // 0x28
	::System::Action* Field_1_6; // 0x30
	::System::Int32 Field_1_3; // 0x38
	::Enum_3_F8C71DEE253F84BD Field_1_1; // 0x3C

	::System::Void _ctor(::System::Int32 a1, ::Il2CppArray<::Struct_2_57C422EDEAAA7766>* a2, ::Enum_3_F8C71DEE253F84BD a3, ::System::String* a4, ::System::Action* a5, ::System::Action* a6, ::System::Action_1<::Class_2_CEC585D0736F3660*>* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::Struct_2_57C422EDEAAA7766>*, ::Enum_3_F8C71DEE253F84BD, ::System::String*, ::System::Action*, ::System::Action*, ::System::Action_1<::Class_2_CEC585D0736F3660*>*))((::PBYTE)hIl2Cpp + CLASS_1_8CA73D574BDC7DA5__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CA73D574BDC7DA5_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_299* Method_1_E9DCB8C06425A332()
	{
		return ((::Class_0_16E4307DCC419505_299*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CA73D574BDC7DA5_METHOD_1_E9DCB8C06425A332_OFFSET))(this);
	}
};
