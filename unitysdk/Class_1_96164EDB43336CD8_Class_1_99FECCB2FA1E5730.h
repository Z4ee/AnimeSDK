#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2A76A884C97A2E2B;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_96164EDB43336CD8_CLASS_1_99FECCB2FA1E5730_METHOD_1_50884DFE76178C82_OFFSET UNITYSDK_OFFSET(0x10FAC4E0)
#define CLASS_1_96164EDB43336CD8_CLASS_1_99FECCB2FA1E5730__CTOR_OFFSET UNITYSDK_OFFSET(0x10FAC4D0)

inline static constexpr unsigned int Class_1_96164EDB43336CD8_Class_1_99FECCB2FA1E5730_TypeDefinitionIndex = 52341;

class Class_1_96164EDB43336CD8_Class_1_99FECCB2FA1E5730 : public ::System::Object
{
public:
	::System::Action_1<::Class_1_2A76A884C97A2E2B*>* Field_1_3; // 0x10
	::System::Action_1<::System::Single>* Field_1_0; // 0x18
	::System::Single Field_1_1; // 0x20
	::System::Int32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96164EDB43336CD8_CLASS_1_99FECCB2FA1E5730__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_50884DFE76178C82(::Class_1_2A76A884C97A2E2B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2A76A884C97A2E2B*))((::PBYTE)hIl2Cpp + CLASS_1_96164EDB43336CD8_CLASS_1_99FECCB2FA1E5730_METHOD_1_50884DFE76178C82_OFFSET))(this, a1);
	}
};
