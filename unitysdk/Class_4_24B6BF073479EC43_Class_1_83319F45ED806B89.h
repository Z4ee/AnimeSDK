#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

class Class_2_67F3C5E647F33C2D;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_24B6BF073479EC43_CLASS_1_83319F45ED806B89_METHOD_1_125126BF7ACBDD51_OFFSET UNITYSDK_OFFSET(0x1407FD70)
#define CLASS_4_24B6BF073479EC43_CLASS_1_83319F45ED806B89_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1407FF00)
#define CLASS_4_24B6BF073479EC43_CLASS_1_83319F45ED806B89__CTOR_OFFSET UNITYSDK_OFFSET(0x1407FD60)

inline static constexpr unsigned int Class_4_24B6BF073479EC43_Class_1_83319F45ED806B89_TypeDefinitionIndex = 87288;

class Class_4_24B6BF073479EC43_Class_1_83319F45ED806B89 : public ::System::Object
{
public:
	::Struct_2_FE9BD044832BC9C3 Field_1_6; // 0x10
	::Struct_2_FE9BD044832BC9C3 Field_1_0; // 0x40
	::Struct_2_FE9BD044832BC9C3 Field_1_7; // 0x70
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Field_1_2; // 0xA0
	::System::Action* Field_1_5; // 0xA8
	::Foundation::ViewObject::ViewObjectHandle Field_1_3; // 0xB0
	::System::Boolean Field_1_1; // 0xC0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_24B6BF073479EC43_CLASS_1_83319F45ED806B89__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_125126BF7ACBDD51(::Class_2_67F3C5E647F33C2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_67F3C5E647F33C2D*))((::PBYTE)hIl2Cpp + CLASS_4_24B6BF073479EC43_CLASS_1_83319F45ED806B89_METHOD_1_125126BF7ACBDD51_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_24B6BF073479EC43_CLASS_1_83319F45ED806B89_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
