#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define IFIX_CORE_PATCHMANAGER__APPENDPATCH_C__ANONSTOREY4__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4CBA80)
#define IFIX_CORE_PATCHMANAGER__APPENDPATCH_C__ANONSTOREY4___M__0_OFFSET UNITYSDK_OFFSET(0x1B4CC840)

namespace IFix::Core
{
	inline static constexpr unsigned int PatchManager__AppendPatch_c__AnonStorey4_TypeDefinitionIndex = 10040;

	class PatchManager__AppendPatch_c__AnonStorey4 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::IntPtr>* nativePointers; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER__APPENDPATCH_C__ANONSTOREY4__CTOR_OFFSET))(this);
		}

		::System::Void __m__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER__APPENDPATCH_C__ANONSTOREY4___M__0_OFFSET))(this);
		}
	};
}
