#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_FF80A1ACD786CECB_3_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x187639E0)
#define CLASS_1_FF80A1ACD786CECB_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x187638C0)
#define CLASS_1_FF80A1ACD786CECB_3_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x18763970)
#define CLASS_1_FF80A1ACD786CECB_3__CTOR_OFFSET UNITYSDK_OFFSET(0x187638B0)

inline static constexpr unsigned int Class_1_FF80A1ACD786CECB_3_TypeDefinitionIndex = 67065;

class Class_1_FF80A1ACD786CECB_3 : public ::System::Object
{
public:
	::System::Int32 _Delta_k__BackingField; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_3__CTOR_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_3_TOSTRING_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_3_TRIGGERACTION_OFFSET))(this);
	}

	::System::Int32 get_Delta()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_3_GET_DELTA_OFFSET))(this);
	}
};
