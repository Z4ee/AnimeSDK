#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0E117AC86D8E5BCA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C37C49455047F71F_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x17D100A0)
#define CLASS_1_C37C49455047F71F_METHOD_1_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x17D101E0)
#define CLASS_1_C37C49455047F71F_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x17D10190)
#define CLASS_1_C37C49455047F71F_METHOD_1_F6E6E622B53160EC_OFFSET UNITYSDK_OFFSET(0x17D10230)
#define CLASS_1_C37C49455047F71F__CTOR_OFFSET UNITYSDK_OFFSET(0x17D102E0)

inline static constexpr unsigned int Class_1_C37C49455047F71F_TypeDefinitionIndex = 33992;

class Class_1_C37C49455047F71F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Field_1_4; // 0x10
	::System::Collections::Generic::Dictionary_2<::Class_1_0E117AC86D8E5BCA*, ::System::String*>* Field_1_3; // 0x18
	::System::Int32 Field_1_1; // 0x20
	::System::Int32 Field_1_0; // 0x24
	::System::Boolean Field_1_5; // 0x28
	::System::Int32 Field_1_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C37C49455047F71F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C37C49455047F71F_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C37C49455047F71F_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C37C49455047F71F_METHOD_1_A1D8CD775DEC3C21_1_OFFSET))(this);
	}

	::System::Int32 Method_1_F6E6E622B53160EC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C37C49455047F71F_METHOD_1_F6E6E622B53160EC_OFFSET))(this);
	}
};
