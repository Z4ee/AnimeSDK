#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_825101C3F006A559_1_GET_ISANIMATORTRIGGER_OFFSET UNITYSDK_OFFSET(0x1A025C70)
#define CLASS_2_825101C3F006A559_1_GET_OUTPUTTYPE_OFFSET UNITYSDK_OFFSET(0x1A025C60)
#define CLASS_2_825101C3F006A559_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A025C80)

inline static constexpr unsigned int Class_2_825101C3F006A559_1_TypeDefinitionIndex = 40654;

class Class_2_825101C3F006A559_1 : public ::System::Attribute
{
public:
	::System::String* _OutPutType_k__BackingField; // 0x10
	::System::Boolean _IsAnimatorTrigger_k__BackingField; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_825101C3F006A559_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* get_OutPutType()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_825101C3F006A559_1_GET_OUTPUTTYPE_OFFSET))(this);
	}

	::System::Boolean get_IsAnimatorTrigger()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_825101C3F006A559_1_GET_ISANIMATORTRIGGER_OFFSET))(this);
	}
};
