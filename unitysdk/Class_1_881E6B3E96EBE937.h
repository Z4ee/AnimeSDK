#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7FD53D4D9647095F;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_881E6B3E96EBE937_METHOD_1_82ABFE24D5168B0C_OFFSET UNITYSDK_OFFSET(0x162618D0)
#define CLASS_1_881E6B3E96EBE937_METHOD_1_98ED140FE30B789F_OFFSET UNITYSDK_OFFSET(0x16261960)
#define CLASS_1_881E6B3E96EBE937_METHOD_1_A21E2F12977A0292_OFFSET UNITYSDK_OFFSET(0x162615C0)
#define CLASS_1_881E6B3E96EBE937_METHOD_1_A8C76E5489E4C577_OFFSET UNITYSDK_OFFSET(0x162617C0)
#define CLASS_1_881E6B3E96EBE937_METHOD_1_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x16261720)
#define CLASS_1_881E6B3E96EBE937_METHOD_1_FD6692A5F6B0AC0C_OFFSET UNITYSDK_OFFSET(0x162613B0)
#define CLASS_1_881E6B3E96EBE937__CTOR_OFFSET UNITYSDK_OFFSET(0x16261280)

inline static constexpr unsigned int Class_1_881E6B3E96EBE937_TypeDefinitionIndex = 71379;

class Class_1_881E6B3E96EBE937 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_7FD53D4D9647095F*>* Field_1_3; // 0x10
	::System::Collections::Generic::Stack_1<::Class_1_7FD53D4D9647095F*>* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::Class_1_7FD53D4D9647095F*>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::Class_1_7FD53D4D9647095F*>* Field_1_1; // 0x28
	::System::Boolean Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_881E6B3E96EBE937__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FD6692A5F6B0AC0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_881E6B3E96EBE937_METHOD_1_FD6692A5F6B0AC0C_OFFSET))(this);
	}

	::Class_1_7FD53D4D9647095F* Method_1_A21E2F12977A0292(::System::Single a1, ::System::Int32 a2, ::System::Action* a3, ::System::Action* a4)
	{
		return ((::Class_1_7FD53D4D9647095F*(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_881E6B3E96EBE937_METHOD_1_A21E2F12977A0292_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_A8C76E5489E4C577(::Class_1_7FD53D4D9647095F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FD53D4D9647095F*))((::PBYTE)hIl2Cpp + CLASS_1_881E6B3E96EBE937_METHOD_1_A8C76E5489E4C577_OFFSET))(this, a1);
	}

	::Class_1_7FD53D4D9647095F* Method_1_82ABFE24D5168B0C()
	{
		return ((::Class_1_7FD53D4D9647095F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_881E6B3E96EBE937_METHOD_1_82ABFE24D5168B0C_OFFSET))(this);
	}

	::System::Void Method_1_98ED140FE30B789F(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_881E6B3E96EBE937_METHOD_1_98ED140FE30B789F_OFFSET))(this, a1, a2);
	}

	::Class_1_7FD53D4D9647095F* Method_1_B64C60973842FE45()
	{
		return ((::Class_1_7FD53D4D9647095F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_881E6B3E96EBE937_METHOD_1_B64C60973842FE45_OFFSET))(this);
	}
};
