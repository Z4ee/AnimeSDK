#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IFix::Core { class PatchManager___c__DisplayClass7_1; }
namespace System { class Type; }
namespace System::Reflection { class FieldInfo; }

#define IFIX_CORE_PATCHMANAGER___C__DISPLAYCLASS7_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAA48C0)
#define IFIX_CORE_PATCHMANAGER___C__DISPLAYCLASS7_2__LOAD_B__1_OFFSET UNITYSDK_OFFSET(0x1CAA5040)

namespace IFix::Core
{
	inline static constexpr unsigned int PatchManager___c__DisplayClass7_2_TypeDefinitionIndex = 6921;

	class PatchManager___c__DisplayClass7_2 : public ::System::Object
	{
	public:
		::System::Reflection::FieldInfo* patchedIDs; // 0x10
		::System::Type* IFixPatched; // 0x18
		::IFix::Core::PatchManager___c__DisplayClass7_1* CS___8__locals1; // 0x20
		::System::Int32 maxPos; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER___C__DISPLAYCLASS7_2__CTOR_OFFSET))(this);
		}

		::System::Void _Load_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER___C__DISPLAYCLASS7_2__LOAD_B__1_OFFSET))(this);
		}
	};
}
