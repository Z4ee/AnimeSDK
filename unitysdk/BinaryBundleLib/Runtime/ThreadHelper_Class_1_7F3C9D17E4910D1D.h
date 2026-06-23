#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_CLASS_1_7F3C9D17E4910D1D_METHOD_1_9EEDC43A36577D37_OFFSET UNITYSDK_OFFSET(0x1CF6DB00)
#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_CLASS_1_7F3C9D17E4910D1D__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF6DAF0)

namespace BinaryBundleLib::Runtime
{
	inline static constexpr unsigned int ThreadHelper_Class_1_7F3C9D17E4910D1D_TypeDefinitionIndex = 33887;

	class ThreadHelper_Class_1_7F3C9D17E4910D1D : public ::System::Object
	{
	public:
		::System::Action* Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_CLASS_1_7F3C9D17E4910D1D__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_9EEDC43A36577D37(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_CLASS_1_7F3C9D17E4910D1D_METHOD_1_9EEDC43A36577D37_OFFSET))(this, a1);
		}
	};
}
