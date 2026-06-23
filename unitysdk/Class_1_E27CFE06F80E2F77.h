#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1824EF69C8E376A3;
namespace MoleMole { class UIHandBookChangeWishlistTargetRowWidgetController; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_E27CFE06F80E2F77__CTOR_OFFSET UNITYSDK_OFFSET(0x12A5FE20)

inline static constexpr unsigned int Class_1_E27CFE06F80E2F77_TypeDefinitionIndex = 84878;

class Class_1_E27CFE06F80E2F77 : public ::System::Object
{
public:
	::Class_2_1824EF69C8E376A3* Field_1_0; // 0x10
	::System::Action_1<::MoleMole::UIHandBookChangeWishlistTargetRowWidgetController*>* Field_1_5; // 0x18
	::System::Int32 Field_1_3; // 0x20
	::System::Int32 Field_1_1; // 0x24
	::System::Boolean Field_1_2; // 0x28
	::System::Boolean Field_1_4; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E27CFE06F80E2F77__CTOR_OFFSET))(this);
	}
};
