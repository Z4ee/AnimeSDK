#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class ManualResetEvent; }

#define CLASS_1_1B495D16A7472AC6_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x179F8380)
#define CLASS_1_1B495D16A7472AC6_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x179F8270)
#define CLASS_1_1B495D16A7472AC6__CTOR_OFFSET UNITYSDK_OFFSET(0x179F8230)

inline static constexpr unsigned int Class_1_1B495D16A7472AC6_TypeDefinitionIndex = 56798;

class Class_1_1B495D16A7472AC6 : public ::System::Object
{
public:
	::System::Threading::ManualResetEvent* Field_1_0; // 0x10

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1B495D16A7472AC6__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B495D16A7472AC6_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B495D16A7472AC6_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
