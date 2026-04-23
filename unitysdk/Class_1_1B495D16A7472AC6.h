#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class ManualResetEvent; }

#define CLASS_1_1B495D16A7472AC6_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x9A17FA0)
#define CLASS_1_1B495D16A7472AC6_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x9A18060)
#define CLASS_1_1B495D16A7472AC6__CTOR_OFFSET UNITYSDK_OFFSET(0x9A17F60)

inline static constexpr unsigned int Class_1_1B495D16A7472AC6_TypeDefinitionIndex = 54834;

class Class_1_1B495D16A7472AC6 : public ::System::Object
{
public:
	::System::Threading::ManualResetEvent* Field_1_0; // 0x10

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1B495D16A7472AC6__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B495D16A7472AC6_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B495D16A7472AC6_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}
};
