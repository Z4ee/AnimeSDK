#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_2_E1BEF57B43890B46_CLASS_1_B4403A3D88A27A84_METHOD_1_2E747A494DE13055_OFFSET UNITYSDK_OFFSET(0x17680FF0)
#define CLASS_2_E1BEF57B43890B46_CLASS_1_B4403A3D88A27A84__CTOR_OFFSET UNITYSDK_OFFSET(0x17680FE0)

inline static constexpr unsigned int Class_2_E1BEF57B43890B46_Class_1_B4403A3D88A27A84_TypeDefinitionIndex = 59360;

class Class_2_E1BEF57B43890B46_Class_1_B4403A3D88A27A84 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_7; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E1BEF57B43890B46_CLASS_1_B4403A3D88A27A84__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_2E747A494DE13055(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::MoleMole::Battle::Entity*> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::MoleMole::Battle::Entity*>))((::PBYTE)hIl2Cpp + CLASS_2_E1BEF57B43890B46_CLASS_1_B4403A3D88A27A84_METHOD_1_2E747A494DE13055_OFFSET))(this, a1);
	}
};
