#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_072D4C86CDF5720B_METHOD_4_10CA1961269E2D91_OFFSET UNITYSDK_OFFSET(0xF513D40)
#define CLASS_4_072D4C86CDF5720B_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xF514320)
#define CLASS_4_072D4C86CDF5720B_METHOD_4_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0xF513CD0)
#define CLASS_4_072D4C86CDF5720B_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xF513B20)
#define CLASS_4_072D4C86CDF5720B__CTOR_OFFSET UNITYSDK_OFFSET(0xF5141C0)

inline static constexpr unsigned int Class_4_072D4C86CDF5720B_TypeDefinitionIndex = 74346;

class Class_4_072D4C86CDF5720B : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_0; // 0x28
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_4_3; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::System::String*>*>* Field_4_1; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_072D4C86CDF5720B__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_072D4C86CDF5720B_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_3F0F9592A0E917D4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_072D4C86CDF5720B_METHOD_4_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_072D4C86CDF5720B_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Boolean Method_4_10CA1961269E2D91(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_072D4C86CDF5720B_METHOD_4_10CA1961269E2D91_OFFSET))(this, a1);
	}
};
