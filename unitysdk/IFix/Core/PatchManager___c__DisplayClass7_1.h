#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IFix::Core { class WrappersManager; }
namespace System { class Type; }
namespace System::Reflection { class FieldInfo; }

#define IFIX_CORE_PATCHMANAGER___C__DISPLAYCLASS7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E083340)
#define IFIX_CORE_PATCHMANAGER___C__DISPLAYCLASS7_1__LOAD_B__1_OFFSET UNITYSDK_OFFSET(0x1E083DA0)

namespace IFix::Core
{
	inline static constexpr unsigned int PatchManager___c__DisplayClass7_1_TypeDefinitionIndex = 6925;

	class PatchManager___c__DisplayClass7_1 : public ::System::Object
	{
	public:
		::System::Type* IFixPatched; // 0x10
		::IFix::Core::WrappersManager* wrapperManager; // 0x18
		::System::Reflection::FieldInfo* patchedIDs; // 0x20
		::System::Int32 maxPos; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER___C__DISPLAYCLASS7_1__CTOR_OFFSET))(this);
		}

		::System::Void _Load_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER___C__DISPLAYCLASS7_1__LOAD_B__1_OFFSET))(this);
		}
	};
}
