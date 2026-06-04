#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define IFIX_CORE_PATCHMANAGER__LOAD_C__ANONSTOREY1__CTOR_OFFSET UNITYSDK_OFFSET(0x17F915B0)
#define IFIX_CORE_PATCHMANAGER__LOAD_C__ANONSTOREY1___M__0_OFFSET UNITYSDK_OFFSET(0x17F96CE0)

namespace IFix::Core
{
	inline static constexpr unsigned int PatchManager__Load_c__AnonStorey1_TypeDefinitionIndex = 9744;

	class PatchManager__Load_c__AnonStorey1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::IntPtr>* nativePointers; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER__LOAD_C__ANONSTOREY1__CTOR_OFFSET))(this);
		}

		::System::Void __m__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER__LOAD_C__ANONSTOREY1___M__0_OFFSET))(this);
		}
	};
}
