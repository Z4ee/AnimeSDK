#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_37.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class CancellationTokenSource; }

#define CLASS_1_989A86EC3BAB59AF_METHOD_1_937F8473216A3162_1_OFFSET UNITYSDK_OFFSET(0x12E77F20)
#define CLASS_1_989A86EC3BAB59AF_METHOD_1_937F8473216A3162_2_OFFSET UNITYSDK_OFFSET(0x12E78280)
#define CLASS_1_989A86EC3BAB59AF_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x12E77C40)
#define CLASS_1_989A86EC3BAB59AF_METHOD_1_FD73D54AB8609D8E_OFFSET UNITYSDK_OFFSET(0x12E78200)
#define CLASS_1_989A86EC3BAB59AF__CTOR_OFFSET UNITYSDK_OFFSET(0x12E77BF0)

inline static constexpr unsigned int Class_1_989A86EC3BAB59AF_TypeDefinitionIndex = 47624;

class Class_1_989A86EC3BAB59AF : public ::System::Object
{
public:
	::System::Threading::CancellationTokenSource* Field_1_5; // 0x10
	::Foundation::ViewObject::ViewObjectHandle Field_1_4; // 0x18
	::Enum_3_0A3761FE34514D6C_37 Field_1_3; // 0x28
	::System::UInt32 Field_1_1; // 0x2C
	::System::UInt32 Field_1_0; // 0x30
	::System::Boolean Field_1_2; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_989A86EC3BAB59AF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_989A86EC3BAB59AF_METHOD_1_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_1_937F8473216A3162_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_989A86EC3BAB59AF_METHOD_1_937F8473216A3162_1_OFFSET))(this);
	}

	::System::Void Method_1_FD73D54AB8609D8E(::Enum_3_0A3761FE34514D6C_37 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_37))((::PBYTE)hIl2Cpp + CLASS_1_989A86EC3BAB59AF_METHOD_1_FD73D54AB8609D8E_OFFSET))(this, a1);
	}

	::System::Void Method_1_937F8473216A3162_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_989A86EC3BAB59AF_METHOD_1_937F8473216A3162_2_OFFSET))(this);
	}
};
