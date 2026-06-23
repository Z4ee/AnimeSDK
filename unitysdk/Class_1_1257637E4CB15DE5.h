#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5A362B24321C6106.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1257637E4CB15DE5_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x17CD8E40)
#define CLASS_1_1257637E4CB15DE5_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x17CD8E90)
#define CLASS_1_1257637E4CB15DE5__CTOR_OFFSET UNITYSDK_OFFSET(0x17CD8F00)

inline static constexpr unsigned int Class_1_1257637E4CB15DE5_TypeDefinitionIndex = 55961;

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
