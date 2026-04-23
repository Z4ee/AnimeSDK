#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IFix::Core { class VirtualMachine; }

#define IFIX_CORE_PATCHMANAGER__MERGEWRAPPER_C__ANONSTOREY5__CTOR_OFFSET UNITYSDK_OFFSET(0x1714C580)
#define IFIX_CORE_PATCHMANAGER__MERGEWRAPPER_C__ANONSTOREY5___M__0_OFFSET UNITYSDK_OFFSET(0x1714CA00)

namespace IFix::Core
{
	inline static constexpr unsigned int PatchManager__MergeWrapper_c__AnonStorey5_TypeDefinitionIndex = 9921;

	class PatchManager__MergeWrapper_c__AnonStorey5 : public ::System::Object
	{
	public:
		::IFix::Core::VirtualMachine* vm; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER__MERGEWRAPPER_C__ANONSTOREY5__CTOR_OFFSET))(this);
		}

		::System::Void __m__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER__MERGEWRAPPER_C__ANONSTOREY5___M__0_OFFSET))(this);
		}
	};
}
