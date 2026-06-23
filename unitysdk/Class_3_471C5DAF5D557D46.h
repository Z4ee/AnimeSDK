#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_1_8FBDD7D8E0EE0B49;
class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_471C5DAF5D557D46_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x1140F3B0)
#define CLASS_3_471C5DAF5D557D46_METHOD_3_7680878B5D79126A_OFFSET UNITYSDK_OFFSET(0x1140FB00)
#define CLASS_3_471C5DAF5D557D46_METHOD_3_C43DD7AFEEA2B827_OFFSET UNITYSDK_OFFSET(0x1140F610)
#define CLASS_3_471C5DAF5D557D46_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1140FE20)
#define CLASS_3_471C5DAF5D557D46__CTOR_OFFSET UNITYSDK_OFFSET(0x1140FC60)

inline static constexpr unsigned int Class_3_471C5DAF5D557D46_TypeDefinitionIndex = 47779;

class Class_3_471C5DAF5D557D46 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x18
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_3_3; // 0x20
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_3_4; // 0x28
	::Class_3_B537A0AA78803363* Field_3_5; // 0x30
	::Class_4_F91115D9A1F02F5F<::MoleMole::EntityHandle>* Field_3_1; // 0x38
	::Class_4_F91115D9A1F02F5F<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* Field_3_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_471C5DAF5D557D46__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_471C5DAF5D557D46_METHOD_3_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_3_C43DD7AFEEA2B827(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_471C5DAF5D557D46_METHOD_3_C43DD7AFEEA2B827_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_7680878B5D79126A(::MoleMole::Battle::Entity* a1, ::Class_1_8FBDD7D8E0EE0B49* a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_1_8FBDD7D8E0EE0B49*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_471C5DAF5D557D46_METHOD_3_7680878B5D79126A_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_471C5DAF5D557D46_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
