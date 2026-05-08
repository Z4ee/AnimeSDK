#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3002EE73D986F5EA.h"

class Class_1_0D6706375CDAAE8C;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E333DF2DB7CA18D0_METHOD_2_13A24B87A78C90C7_OFFSET UNITYSDK_OFFSET(0x169E9AB0)
#define CLASS_2_E333DF2DB7CA18D0__CTOR_OFFSET UNITYSDK_OFFSET(0x169E98A0)

inline static constexpr unsigned int Class_2_E333DF2DB7CA18D0_TypeDefinitionIndex = 57892;

class Class_2_E333DF2DB7CA18D0 : public ::Class_1_3002EE73D986F5EA
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* Field_2_1; // 0x20
	::System::Int32 Field_2_2; // 0x28

	::System::Void _ctor(::System::Int32 a1, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*))((::PBYTE)hIl2Cpp + CLASS_2_E333DF2DB7CA18D0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_13A24B87A78C90C7(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_E333DF2DB7CA18D0_METHOD_2_13A24B87A78C90C7_OFFSET))(this, a1);
	}
};
