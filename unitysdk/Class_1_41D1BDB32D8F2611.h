#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDataDeltaFlag.h"
#include "unitysdk/Struct_2_455336A079B58DD3.h"
#include "unitysdk/Struct_2_FC8D9EFDEDD88792.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_41D1BDB32D8F2611_METHOD_1_253D7053C84F6052_OFFSET UNITYSDK_OFFSET(0x11EB7920)
#define CLASS_1_41D1BDB32D8F2611_METHOD_1_8A5370F4070DF55A_OFFSET UNITYSDK_OFFSET(0x11EB7D80)
#define CLASS_1_41D1BDB32D8F2611_METHOD_1_AF8ACC70A93E73D6_OFFSET UNITYSDK_OFFSET(0x11EB7A10)
#define CLASS_1_41D1BDB32D8F2611_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11EB79B0)
#define CLASS_1_41D1BDB32D8F2611_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11EB78C0)
#define CLASS_1_41D1BDB32D8F2611_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x11EB7EE0)
#define CLASS_1_41D1BDB32D8F2611_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11EB7D70)
#define CLASS_1_41D1BDB32D8F2611__CTOR_OFFSET UNITYSDK_OFFSET(0x11EB78B0)

inline static constexpr unsigned int Class_1_41D1BDB32D8F2611_TypeDefinitionIndex = 75094;

class Class_1_41D1BDB32D8F2611 : public ::System::Object
{
public:
	::System::Nullable_1<::Struct_2_FC8D9EFDEDD88792> Field_1_1; // 0x10
	::System::Nullable_1<::Struct_2_455336A079B58DD3> Field_1_2; // 0x70
	::PipelineCamera::WorldBasicCameraDataDeltaFlag Field_1_3; // 0x98
	::System::Nullable_1<::PipelineCamera::WorldBasicCameraData> Field_1_0; // 0x9C

	::System::Void _ctor(::PipelineCamera::WorldBasicCameraDataDeltaFlag a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraDataDeltaFlag))((::PBYTE)hIl2Cpp + CLASS_1_41D1BDB32D8F2611__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41D1BDB32D8F2611_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_253D7053C84F6052(::PipelineCamera::WorldBasicCameraData& a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + CLASS_1_41D1BDB32D8F2611_METHOD_1_253D7053C84F6052_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41D1BDB32D8F2611_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_AF8ACC70A93E73D6(::System::Single a1, ::System::Single a2, ::PipelineCamera::WorldBasicCameraData& a3)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::System::Single, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + CLASS_1_41D1BDB32D8F2611_METHOD_1_AF8ACC70A93E73D6_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41D1BDB32D8F2611_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_8A5370F4070DF55A(::Struct_2_455336A079B58DD3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_455336A079B58DD3&))((::PBYTE)hIl2Cpp + CLASS_1_41D1BDB32D8F2611_METHOD_1_8A5370F4070DF55A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41D1BDB32D8F2611_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}
};
