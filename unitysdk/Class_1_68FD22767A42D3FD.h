#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_3.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class CancellationTokenSource; }

#define CLASS_1_68FD22767A42D3FD_METHOD_1_289F28027FF47717_1_OFFSET UNITYSDK_OFFSET(0x11565990)
#define CLASS_1_68FD22767A42D3FD_METHOD_1_289F28027FF47717_2_OFFSET UNITYSDK_OFFSET(0x11565BF0)
#define CLASS_1_68FD22767A42D3FD_METHOD_1_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x11565730)
#define CLASS_1_68FD22767A42D3FD_METHOD_1_513C7EE8B09CA415_OFFSET UNITYSDK_OFFSET(0x11565E60)
#define CLASS_1_68FD22767A42D3FD__CTOR_OFFSET UNITYSDK_OFFSET(0x115656E0)

inline static constexpr unsigned int Class_1_68FD22767A42D3FD_TypeDefinitionIndex = 82946;

class Class_1_68FD22767A42D3FD : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle Field_1_4; // 0x10
	::System::Threading::CancellationTokenSource* Field_1_11; // 0x20
	::System::Boolean Field_1_6; // 0x28
	::System::UInt32 Field_1_0; // 0x2C
	::System::UInt32 Field_1_7; // 0x30
	::Enum_3_0A3761FE34514D6C_3 Field_1_5; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68FD22767A42D3FD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68FD22767A42D3FD_METHOD_1_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_1_289F28027FF47717_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68FD22767A42D3FD_METHOD_1_289F28027FF47717_1_OFFSET))(this);
	}

	::System::Void Method_1_289F28027FF47717_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68FD22767A42D3FD_METHOD_1_289F28027FF47717_2_OFFSET))(this);
	}

	::System::Void Method_1_513C7EE8B09CA415(::Enum_3_0A3761FE34514D6C_3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_3))((::PBYTE)hIl2Cpp + CLASS_1_68FD22767A42D3FD_METHOD_1_513C7EE8B09CA415_OFFSET))(this, a1);
	}
};
