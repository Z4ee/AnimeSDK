#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_CORE_PATCHMANAGER__LOADMANIFEST_C__ANONSTOREY3__CTOR_OFFSET UNITYSDK_OFFSET(0x15B49C50)
#define IFIX_CORE_PATCHMANAGER__LOADMANIFEST_C__ANONSTOREY3___M__0_OFFSET UNITYSDK_OFFSET(0x15B4E940)

namespace IFix::Core
{
	inline static constexpr unsigned int PatchManager__LoadManifest_c__AnonStorey3_TypeDefinitionIndex = 9784;

	class PatchManager__LoadManifest_c__AnonStorey3 : public ::System::Object
	{
	public:
		::System::IntPtr nativePointer; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER__LOADMANIFEST_C__ANONSTOREY3__CTOR_OFFSET))(this);
		}

		::System::Void __m__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER__LOADMANIFEST_C__ANONSTOREY3___M__0_OFFSET))(this);
		}
	};
}
