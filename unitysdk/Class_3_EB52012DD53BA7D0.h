#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1D144748B0C0612C_1.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_EB52012DD53BA7D0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CF14C0)
#define CLASS_3_EB52012DD53BA7D0_METHOD_3_6239B818C02ED1C3_OFFSET UNITYSDK_OFFSET(0x12CF1610)
#define CLASS_3_EB52012DD53BA7D0_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x12CF1450)
#define CLASS_3_EB52012DD53BA7D0_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12CF1550)
#define CLASS_3_EB52012DD53BA7D0__CTOR_OFFSET UNITYSDK_OFFSET(0x12CF1590)

inline static constexpr unsigned int Class_3_EB52012DD53BA7D0_TypeDefinitionIndex = 80867;

class Class_3_EB52012DD53BA7D0 : public ::Class_2_1D144748B0C0612C_1
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EB52012DD53BA7D0__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EB52012DD53BA7D0_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EB52012DD53BA7D0_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EB52012DD53BA7D0_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_3_EB52012DD53BA7D0* Method_3_6239B818C02ED1C3(::System::Boolean a1, ::System::Collections::Generic::List_1<::System::String*>*& a2, ::System::Collections::Generic::List_1<::System::String*>*& a3, ::System::Boolean a4, ::MoleMole::EntityHandle& a5, ::System::Collections::Generic::List_1<::System::String*>*& a6, ::System::Int32& a7)
	{
		return ((::Class_3_EB52012DD53BA7D0*(*)(::System::Boolean, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Boolean, ::MoleMole::EntityHandle&, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_3_EB52012DD53BA7D0_METHOD_3_6239B818C02ED1C3_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}
};
