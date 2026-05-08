#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_5DD0DC247AD9D6B2_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x14CD52D0)
#define CLASS_3_5DD0DC247AD9D6B2_METHOD_3_729CCA2968BE806F_OFFSET UNITYSDK_OFFSET(0x14CD5410)
#define CLASS_3_5DD0DC247AD9D6B2_METHOD_3_B9DED6516148F58E_OFFSET UNITYSDK_OFFSET(0x14CD54E0)
#define CLASS_3_5DD0DC247AD9D6B2_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14CD5AC0)
#define CLASS_3_5DD0DC247AD9D6B2__CTOR_OFFSET UNITYSDK_OFFSET(0x14CD59A0)

inline static constexpr unsigned int Class_3_5DD0DC247AD9D6B2_TypeDefinitionIndex = 52068;

class Class_3_5DD0DC247AD9D6B2 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_8D3E479B491881B3<::System::String*>* Field_3_2; // 0x18
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::System::String*>*>* Field_3_1; // 0x20
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5DD0DC247AD9D6B2__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5DD0DC247AD9D6B2_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_729CCA2968BE806F(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_5DD0DC247AD9D6B2_METHOD_3_729CCA2968BE806F_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5DD0DC247AD9D6B2_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_3_B9DED6516148F58E(::Struct_2_29439DBE2B63DCF3& a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_3_5DD0DC247AD9D6B2_METHOD_3_B9DED6516148F58E_OFFSET))(this, a1, a2);
	}
};
