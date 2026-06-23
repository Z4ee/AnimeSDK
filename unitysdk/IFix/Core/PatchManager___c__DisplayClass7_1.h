#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IFix::Core { class WrappersManager; }

#define IFIX_CORE_PATCHMANAGER___C__DISPLAYCLASS7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAA4540)

namespace IFix::Core
{
	inline static constexpr unsigned int PatchManager___c__DisplayClass7_1_TypeDefinitionIndex = 6920;

	class PatchManager___c__DisplayClass7_1 : public ::System::Object
	{
	public:
		::IFix::Core::WrappersManager* wrapperManager; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER___C__DISPLAYCLASS7_1__CTOR_OFFSET))(this);
		}
	};
}
