#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define IFIX_CORE_PATCHMANAGER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A794570)
#define IFIX_CORE_PATCHMANAGER___C__DISPLAYCLASS7_0__LOAD_B__0_OFFSET UNITYSDK_OFFSET(0x1A795020)

namespace IFix::Core
{
	inline static constexpr unsigned int PatchManager___c__DisplayClass7_0_TypeDefinitionIndex = 6788;

	class PatchManager___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::IntPtr>* nativePointers; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _Load_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER___C__DISPLAYCLASS7_0__LOAD_B__0_OFFSET))(this);
		}
	};
}
