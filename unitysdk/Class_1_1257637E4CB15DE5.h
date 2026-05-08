#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5A362B24321C6106.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1257637E4CB15DE5_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0xD223650)
#define CLASS_1_1257637E4CB15DE5_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0xD2236A0)
#define CLASS_1_1257637E4CB15DE5__CTOR_OFFSET UNITYSDK_OFFSET(0xD223710)

inline static constexpr unsigned int Class_1_1257637E4CB15DE5_TypeDefinitionIndex = 41098;

class Class_1_1257637E4CB15DE5 : public ::System::Object
{
public:
	::Struct_2_5A362B24321C6106 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1257637E4CB15DE5__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1257637E4CB15DE5_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1257637E4CB15DE5_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}
};
