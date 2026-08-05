#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_CLASS_1_F17899E2B30E1031_METHOD_1_502673E4828319FC_OFFSET UNITYSDK_OFFSET(0x1E39C5C0)
#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_CLASS_1_F17899E2B30E1031__CTOR_OFFSET UNITYSDK_OFFSET(0x1E39C330)

namespace BinaryBundleLib::Runtime
{
	inline static constexpr unsigned int ThreadHelper_Class_1_F17899E2B30E1031_TypeDefinitionIndex = 34510;

	class ThreadHelper_Class_1_F17899E2B30E1031 : public ::System::Object
	{
	public:
		::System::Action* Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_CLASS_1_F17899E2B30E1031__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_502673E4828319FC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_CLASS_1_F17899E2B30E1031_METHOD_1_502673E4828319FC_OFFSET))(this, a1);
		}
	};
}
