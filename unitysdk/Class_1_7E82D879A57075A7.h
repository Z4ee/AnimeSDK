#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1DCE552D1462A914;
class Class_1_43BD383C98B4C0C5_80;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7E82D879A57075A7__CTOR_OFFSET UNITYSDK_OFFSET(0x137A4DA0)

inline static constexpr unsigned int Class_1_7E82D879A57075A7_TypeDefinitionIndex = 68861;

class Class_1_7E82D879A57075A7 : public ::System::Object
{
public:
	::Class_1_43BD383C98B4C0C5_80* Field_1_6; // 0x10
	::System::Collections::Generic::List_1<::Class_1_1DCE552D1462A914*>* Field_1_5; // 0x18
	::System::UInt32 Field_1_4; // 0x20
	::System::UInt32 Field_1_0; // 0x24
	::System::Int32 Field_1_2; // 0x28
	::System::UInt32 Field_1_3; // 0x2C
	::System::UInt32 Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E82D879A57075A7__CTOR_OFFSET))(this);
	}
};
