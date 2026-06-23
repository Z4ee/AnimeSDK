#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_2EB110F542D52C8D_CLASS_1_ECDD0335339F389E_METHOD_1_B0C374502B2A7CE4_OFFSET UNITYSDK_OFFSET(0x1AACFB80)
#define CLASS_1_2EB110F542D52C8D_CLASS_1_ECDD0335339F389E_METHOD_1_E007B516C4B7E6F7_OFFSET UNITYSDK_OFFSET(0x1AACFD30)
#define CLASS_1_2EB110F542D52C8D_CLASS_1_ECDD0335339F389E__CTOR_OFFSET UNITYSDK_OFFSET(0x1AACDB50)

inline static constexpr unsigned int Class_1_2EB110F542D52C8D_Class_1_ECDD0335339F389E_TypeDefinitionIndex = 73800;

class Class_1_2EB110F542D52C8D_Class_1_ECDD0335339F389E : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EB110F542D52C8D_CLASS_1_ECDD0335339F389E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B0C374502B2A7CE4(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2EB110F542D52C8D_CLASS_1_ECDD0335339F389E_METHOD_1_B0C374502B2A7CE4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E007B516C4B7E6F7(::System::UInt16 a1, ::System::UInt16 a2, ::System::UInt16 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_2EB110F542D52C8D_CLASS_1_ECDD0335339F389E_METHOD_1_E007B516C4B7E6F7_OFFSET))(this, a1, a2, a3);
	}
};
