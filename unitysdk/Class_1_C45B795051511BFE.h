#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_C45B795051511BFE_METHOD_1_FA07211BE90EEC5E_OFFSET UNITYSDK_OFFSET(0x14A435C0)
#define CLASS_1_C45B795051511BFE__CTOR_OFFSET UNITYSDK_OFFSET(0x14A435B0)

inline static constexpr unsigned int Class_1_C45B795051511BFE_TypeDefinitionIndex = 60895;

class Class_1_C45B795051511BFE : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::System::Boolean Field_1_7; // 0x18
	::System::Boolean Field_1_0; // 0x19
	::System::Boolean Field_1_1; // 0x1A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C45B795051511BFE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FA07211BE90EEC5E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C45B795051511BFE_METHOD_1_FA07211BE90EEC5E_OFFSET))(this, a1);
	}
};
