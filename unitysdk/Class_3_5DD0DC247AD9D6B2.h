#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_5DD0DC247AD9D6B2_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x12B4B210)
#define CLASS_3_5DD0DC247AD9D6B2_METHOD_3_729CCA2968BE806F_OFFSET UNITYSDK_OFFSET(0x12B4B350)
#define CLASS_3_5DD0DC247AD9D6B2_METHOD_3_B9DED6516148F58E_OFFSET UNITYSDK_OFFSET(0x12B4B420)
#define CLASS_3_5DD0DC247AD9D6B2_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12B4BA00)
#define CLASS_3_5DD0DC247AD9D6B2__CTOR_OFFSET UNITYSDK_OFFSET(0x12B4B8E0)

inline static constexpr unsigned int Class_3_5DD0DC247AD9D6B2_TypeDefinitionIndex = 86705;

class Class_3_5DD0DC247AD9D6B2 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_F91115D9A1F02F5F<::MoleMole::EntityHandle>* Field_3_0; // 0x18
	::Class_4_F91115D9A1F02F5F<::System::Collections::Generic::List_1<::System::String*>*>* Field_3_1; // 0x20
	::Class_4_B51FB35349ACD175<::System::String*>* Field_3_2; // 0x28

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

	::System::Boolean Method_3_B9DED6516148F58E(::Struct_2_29439DBE2B63DCF3& a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_3_5DD0DC247AD9D6B2_METHOD_3_B9DED6516148F58E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5DD0DC247AD9D6B2_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
