#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_FF80A1ACD786CECB_2_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x1105B560)
#define CLASS_1_FF80A1ACD786CECB_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1105B440)
#define CLASS_1_FF80A1ACD786CECB_2_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x1105B4F0)
#define CLASS_1_FF80A1ACD786CECB_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1105B430)
#define CLASS_1_FF80A1ACD786CECB_2___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1105B570)

inline static constexpr unsigned int Class_1_FF80A1ACD786CECB_2_TypeDefinitionIndex = 54584;

class Class_1_FF80A1ACD786CECB_2 : public ::System::Object
{
public:
	::System::Int32 _Delta_k__BackingField; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_2__CTOR_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_2_TOSTRING_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_2_TRIGGERACTION_OFFSET))(this);
	}

	::System::Int32 get_Delta()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_2_GET_DELTA_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_2___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
