#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_7734F33592BF49F6_6.h"
#include "unitysdk/System/Object.h"

class Class_1_7F57F1E502AAA0D8;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DD4EC0590E1613C3_METHOD_1_17E9228A0E9B4A1D_OFFSET UNITYSDK_OFFSET(0x14011AC0)
#define CLASS_1_DD4EC0590E1613C3_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x14011D30)
#define CLASS_1_DD4EC0590E1613C3_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x14011F00)
#define CLASS_1_DD4EC0590E1613C3_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14011A80)
#define CLASS_1_DD4EC0590E1613C3_METHOD_1_CB8CF89038C44C8A_OFFSET UNITYSDK_OFFSET(0x14011CE0)
#define CLASS_1_DD4EC0590E1613C3_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x14011BC0)
#define CLASS_1_DD4EC0590E1613C3__CTOR_OFFSET UNITYSDK_OFFSET(0x14011A70)

inline static constexpr unsigned int Class_1_DD4EC0590E1613C3_TypeDefinitionIndex = 89342;

class Class_1_DD4EC0590E1613C3 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::Class_1_7F57F1E502AAA0D8* Field_1_7; // 0x18
	::System::Action_1<::Struct_2_7734F33592BF49F6_6>* Field_1_0; // 0x20
	::System::Collections::Generic::List_1<::Struct_2_7734F33592BF49F6_6>* Field_1_2; // 0x28
	::System::Boolean Field_1_6; // 0x30
	::System::Boolean Field_1_5; // 0x31
	::System::Int32 Field_1_3; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD4EC0590E1613C3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD4EC0590E1613C3_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_17E9228A0E9B4A1D(::System::Collections::Generic::List_1<::Struct_2_7734F33592BF49F6_6>* a1, ::System::Boolean a2, ::System::Action* a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_7734F33592BF49F6_6>*, ::System::Boolean, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DD4EC0590E1613C3_METHOD_1_17E9228A0E9B4A1D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_CB8CF89038C44C8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD4EC0590E1613C3_METHOD_1_CB8CF89038C44C8A_OFFSET))(this);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD4EC0590E1613C3_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD4EC0590E1613C3_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD4EC0590E1613C3_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
