#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ResourceModeBase.h"

namespace System { class Action; }

#define CLASS_2_25D51FC1AD561658_METHOD_2_CB8CF89038C44C8A_OFFSET UNITYSDK_OFFSET(0x161CB440)
#define CLASS_2_25D51FC1AD561658__CTOR_OFFSET UNITYSDK_OFFSET(0x161CB3E0)

inline static constexpr unsigned int Class_2_25D51FC1AD561658_TypeDefinitionIndex = 66273;

class Class_2_25D51FC1AD561658 : public ::ResourceModeBase
{
public:
	::System::Int32 Field_2_2; // 0x18
	::System::Int32 Field_2_0; // 0x1C
	::System::Int32 Field_2_1; // 0x20

	::System::Void _ctor(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_25D51FC1AD561658__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_CB8CF89038C44C8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25D51FC1AD561658_METHOD_2_CB8CF89038C44C8A_OFFSET))(this);
	}
};
