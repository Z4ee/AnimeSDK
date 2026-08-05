#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6A15F0394BF6F10B.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_A0B1A57C6DC75B0F;
class Class_2_1824EF69C8E376A3;
namespace MoleMole { class UIRoleSelectPageController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_78A281F5BD052587_METHOD_1_4A41C63BFE58D26F_OFFSET UNITYSDK_OFFSET(0x18BA60C0)
#define CLASS_1_78A281F5BD052587_METHOD_1_B7B9C082F052B0A3_OFFSET UNITYSDK_OFFSET(0x18BA6010)
#define CLASS_1_78A281F5BD052587__CTOR_OFFSET UNITYSDK_OFFSET(0x18BA5FF0)

inline static constexpr unsigned int Class_1_78A281F5BD052587_TypeDefinitionIndex = 46435;

class Class_1_78A281F5BD052587 : public ::System::Object
{
public:
	::Class_2_1824EF69C8E376A3* Field_1_7; // 0x10
	::Class_1_A0B1A57C6DC75B0F* Field_1_6; // 0x18
	::MoleMole::UIRoleSelectPageController* Field_1_5; // 0x20
	::System::Int32 Field_1_0; // 0x28

	::System::Void _ctor(::MoleMole::UIRoleSelectPageController* a1, ::Class_2_1824EF69C8E376A3* a2, ::System::Int32 a3, ::Class_1_A0B1A57C6DC75B0F* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIRoleSelectPageController*, ::Class_2_1824EF69C8E376A3*, ::System::Int32, ::Class_1_A0B1A57C6DC75B0F*))((::PBYTE)hIl2Cpp + CLASS_1_78A281F5BD052587__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_B7B9C082F052B0A3(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::Enum_3_6A15F0394BF6F10B, ::System::UInt16>>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::Enum_3_6A15F0394BF6F10B, ::System::UInt16>>*))((::PBYTE)hIl2Cpp + CLASS_1_78A281F5BD052587_METHOD_1_B7B9C082F052B0A3_OFFSET))(this, a1);
	}

	::System::Void Method_1_4A41C63BFE58D26F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78A281F5BD052587_METHOD_1_4A41C63BFE58D26F_OFFSET))(this);
	}
};
