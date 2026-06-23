#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D65512A83CF70AB7;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_0E846B689DE3EFD2__CTOR_OFFSET UNITYSDK_OFFSET(0x12E91390)

inline static constexpr unsigned int Class_1_0E846B689DE3EFD2_TypeDefinitionIndex = 51574;

class Class_1_0E846B689DE3EFD2 : public ::System::Object
{
public:
	::System::Action_1<::Class_1_D65512A83CF70AB7*>* Field_1_3; // 0x10
	::System::Action_1<::Class_1_D65512A83CF70AB7*>* Field_1_2; // 0x18
	::System::Int32 Field_1_5; // 0x20
	::System::Int32 Field_1_4; // 0x24
	::System::Int32 Field_1_0; // 0x28
	::System::Int32 Field_1_1; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E846B689DE3EFD2__CTOR_OFFSET))(this);
	}
};
