#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D65512A83CF70AB7;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_0E846B689DE3EFD2__CTOR_OFFSET UNITYSDK_OFFSET(0x1147E600)

inline static constexpr unsigned int Class_1_0E846B689DE3EFD2_TypeDefinitionIndex = 42610;

class Class_1_0E846B689DE3EFD2 : public ::System::Object
{
public:
	::System::Action_1<::Class_1_D65512A83CF70AB7*>* Field_1_2; // 0x10
	::System::Action_1<::Class_1_D65512A83CF70AB7*>* Field_1_3; // 0x18
	::System::Int32 Field_1_0; // 0x20
	::System::Int32 Field_1_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E846B689DE3EFD2__CTOR_OFFSET))(this);
	}
};
