#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_FF80A1ACD786CECB_1_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x11AEBF00)
#define CLASS_1_FF80A1ACD786CECB_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11AEBDE0)
#define CLASS_1_FF80A1ACD786CECB_1_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x11AEBE90)
#define CLASS_1_FF80A1ACD786CECB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11AEBDD0)
#define CLASS_1_FF80A1ACD786CECB_1___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11AEBF10)

inline static constexpr unsigned int Class_1_FF80A1ACD786CECB_1_TypeDefinitionIndex = 61771;

class Class_1_FF80A1ACD786CECB_1 : public ::System::Object
{
public:
	::System::Int32 _Delta_k__BackingField; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_1__CTOR_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_1_TOSTRING_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_1_TRIGGERACTION_OFFSET))(this);
	}

	::System::Int32 get_Delta()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_1_GET_DELTA_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_1___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
