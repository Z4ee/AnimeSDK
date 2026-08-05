#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_0CE5318321486AA4_4_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x10977650)
#define CLASS_1_0CE5318321486AA4_4_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x109776A0)
#define CLASS_1_0CE5318321486AA4_4__CTOR_OFFSET UNITYSDK_OFFSET(0x10977710)

inline static constexpr unsigned int Class_1_0CE5318321486AA4_4_TypeDefinitionIndex = 61890;

class Class_1_0CE5318321486AA4_4 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CE5318321486AA4_4__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CE5318321486AA4_4_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CE5318321486AA4_4_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}
};
