#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_7E5B401C3D677259_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1664B8D0)
#define CLASS_1_7E5B401C3D677259_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1664B880)
#define CLASS_1_7E5B401C3D677259_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1664B8E0)
#define CLASS_1_7E5B401C3D677259__CTOR_OFFSET UNITYSDK_OFFSET(0x1664B830)

inline static constexpr unsigned int Class_1_7E5B401C3D677259_TypeDefinitionIndex = 90509;

class Class_1_7E5B401C3D677259 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x11

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7E5B401C3D677259__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7E5B401C3D677259_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E5B401C3D677259_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E5B401C3D677259_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
